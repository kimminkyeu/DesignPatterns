//
// Created by USER on 2023-12-15.
//

#ifndef EX1_ASSERTION_ACCESSMODIFIER_H
#define EX1_ASSERTION_ACCESSMODIFIER_H

#include "Config.h"
// From "https://google.github.io/styleguide/cppguide.html"
// From "https://en.wikibooks.org/wiki/More_C%2B%2B_Idioms/Non-copyable_Mixin"

namespace MK
{
// --------------------------------------------------
/* class CantCopy : private NonCopyable <CantCopy> {}; */
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
	class MoveOnly
	{
#if (MK_CPP_VER >= 11)
	public: MoveOnly (MoveOnly&&) = default;
	public: MoveOnly& operator= (MoveOnly&&) = default;
	// The copy operations are implicitly deleted, but you can spell that out explicitly if you want:
	public: MoveOnly(const MoveOnly&) = delete;
	public: MoveOnly& operator=(const MoveOnly&) = delete;
#else
	public: MoveOnly (MoveOnly&&) {};
	public: MoveOnly& operator= (MoveOnly&&) {};
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

#endif //EX1_ASSERTION_ACCESSMODIFIER_H
