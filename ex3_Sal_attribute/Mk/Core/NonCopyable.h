//
// Created by USER on 2023-12-15.
//

#ifndef EX1_ASSERTION_COPYABLEANDMOVABLETYPES_H
#define EX1_ASSERTION_COPYABLEANDMOVABLETYPES_H

#include "Predef.h"

// --------------------------------------------------
// NOTE: check Google C++ code standard...
// Ref 1 : https://google.github.io/styleguide/cppguide.html#Copyable_Movable_Types
// Ref 2 : https://en.wikibooks.org/wiki/More_C%2B%2B_Idioms/Non-copyable_Mixin

namespace MK
{
	// NOTE: A copyable class should explicitly declare the copy operations
	// --------------------------------------------------
	class Copyable {
#if (MK_CPP_VER >= 11)
	protected: Copyable() = default;
	protected: ~Copyable() = default;
	protected: Copyable(const Copyable& other) = default;
	protected: Copyable& operator=(const Copyable& other) = default;
	// The implicit move operations are suppressed by the declarations above.
	// You may explicitly declare move operations to support efficient moves.
#else
	protected: Copyable() {};
	protected: ~Copyable() {};
	protected: Copyable(const Copyable& other) {};
	protected: Copyable& operator=(const Copyable& other) {};
#endif
	};

	// --------------------------------------------------
	class NonCopyable
	{
#if (MK_CPP_VER >= 11)
	protected: NonCopyable() = default;
	protected: ~NonCopyable() = default;
	public: NonCopyable( const NonCopyable& ) = delete;
	public: NonCopyable& operator=( const NonCopyable& ) = delete;
#else
	protected: NonCopyable() {};
	protected: ~NonCopyable() {};
	private: NonCopyable( const NonCopyable& );
	private: NonCopyable& operator=( const NonCopyable& );
#endif
	};

	// --------------------------------------------------
	// NOTE: move-only class should explicitly declare the move operations
	class MoveOnly
	{
#if (MK_CPP_VER >= 11)
	protected: MoveOnly() = default;
	protected: ~MoveOnly() = default;
	protected: MoveOnly (MoveOnly&&) = default;
	protected: MoveOnly& operator= (MoveOnly&&) = default;
	// The copy operations are implicitly deleted, but you can spell that out explicitly if you want:
	public: MoveOnly(const MoveOnly&) = delete;
	public: MoveOnly& operator=(const MoveOnly&) = delete;
#else
	protected: MoveOnly() {};
	protected: ~MoveOnly() {};
	protected: MoveOnly (MoveOnly&&) {};
	protected: MoveOnly& operator= (MoveOnly&&) {};
	private: MoveOnly(const MoveOnly&);
	private: MoveOnly& operator=(const MoveOnly&);
#endif
	};

// --------------------------------------------------
	class NonCopyableOrMovable
	{
#if (MK_CPP_VER >= 11)
	public: NonCopyableOrMovable (const NonCopyableOrMovable&) = delete;
	public: NonCopyableOrMovable& operator= (const NonCopyableOrMovable&) = delete;
	// The move operations are implicitly disabled, but you can spell that out explicitly if you want:
	public: NonCopyableOrMovable (NonCopyableOrMovable&&) = delete;
	public: NonCopyableOrMovable& operator= (NonCopyableOrMovable&&) = delete;
#else
	private: NonCopyableOrMovable (const NonCopyableOrMovable&);
	private: NonCopyableOrMovable& operator= (const NonCopyableOrMovable&);
	private: NonCopyableOrMovable (NonCopyableOrMovable&&);
	private: NonCopyableOrMovable& operator= (NonCopyableOrMovable&&);
#endif
	};

} // namespace MK

#endif //EX1_ASSERTION_COPYABLEANDMOVABLETYPES_H
