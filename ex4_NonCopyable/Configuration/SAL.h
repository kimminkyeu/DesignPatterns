//
// Created by Minkyeu Kim on 12/13/23.
//

#ifndef EX1_ASSERTION_SAL_H
#define EX1_ASSERTION_SAL_H
#pragma once

// https://github.com/tpn/winsdk-10/blob/master/Include/10.0.10240.0/shared/sal.h
// MSVC를 쓰지 않아도 Microsoft source-code annotation language (SAL)를 활용하기 위한 헤더.

#if defined(_MSC_VER)
#  include <sal.h>
#elif defined(__has_include)
#  if __has_include(<sal.h>)
#    include <sal.h>
#  endif
#endif

/* Function Parameters & Return Value
 *
 * https://msdn.microsoft.com/en-us/library/hh916382.aspx
 *****/

/*  Pointer Parameters */
#if !defined(_In_)
#  define _In_
#endif

#if !defined(_Out_)
#  define _Out_
#endif

#if !defined(_Inout_)
#  define _Inout_
#endif

#if !defined(_In_z_)
#  define _In_z_
#endif

#if !defined(_Inout_z_)
#  define _Inout_z_
#endif

#if !defined(_In_reads_)
#  define _In_reads_(s)
#endif

#if !defined(_In_reads_bytes_)
#  define _In_reads_bytes_(s)
#endif

#if !defined(_In_reads_z_)
#  define _In_reads_z_(s)
#endif

#if !defined(_In_reads_or_z_)
#  define _In_reads_or_z_(s)
#endif

#if !defined(_Out_writes_)
#  define _Out_writes_(s)
#endif

#if !defined(_Out_writes_bytes_)
#  define _Out_writes_bytes_(s)
#endif

#if !defined(_Out_writes_z_)
#  define _Out_writes_z_(s)
#endif

#if !defined(_Inout_updates_)
#  define _Inout_updates_(s)
#endif

#if !defined(_Inout_updates_bytes_)
#  define _Inout_updates_bytes_(s)
#endif

#if !defined(_Inout_updates_z_)
#  define _Inout_updates_z_(s)
#endif

#if !defined(_Out_writes_to_)
#  define _Out_writes_to_(s,c)
#endif

#if !defined(_Out_writes_bytes_to_)
#  define _Out_writes_bytes_to_(s,c)
#endif

#if !defined(_Out_writes_all_)
#  define _Out_writes_all_(s)
#endif

#if !defined(_Out_writes_bytes_all_)
#  define _Out_writes_bytes_all_(s)
#endif

#if !defined(_In_updates_to_)
#  define _In_updates_to_(s,c)
#endif

#if !defined(_In_updates_bytes_to_)
#  define _In_updates_bytes_to_(s,c)
#endif

#if !defined(_Inout_updates_z_)
#  define _Inout_updates_z_(s)
#endif

#if !defined(_Out_writes_to_)
#  define _Out_writes_to_(s,c)
#endif

#if !defined(_Out_writes_bytes_to_)
#  define _Out_writes_bytes_to_(s,c)
#endif

#if !defined(_Out_writes_all_)
#  define _Out_writes_all_(s)
#endif

#if !defined(_Out_writes_bytes_all_)
#  define _Out_writes_bytes_all_(s)
#endif

#if !defined(_Inout_updates_to_)
#  define _Inout_updates_to_(s,c)
#endif

#if !defined(_Inout_updates_bytes_to_)
#  define _Inout_updates_bytes_to_(s,c)
#endif

#if !defined(_Inout_updates_all_)
#  define _Inout_updates_all_(s)
#endif

#if !defined(_Inout_updates_bytes_all_)
#  define _Inout_updates_bytes_all_(s)
#endif

#if !defined(_In_reads_to_ptr_)
#  define _In_reads_to_ptr_(p)
#endif

#if !defined(_In_reads_to_ptr_z_)
#  define _In_reads_to_ptr_z_(p)
#endif

#if !defined(_Out_writes_to_ptr_)
#  define _Out_writes_to_ptr_(p)
#endif

#if !defined(_Out_writes_to_ptr_z_)
#  define _Out_writes_to_ptr_z_(p)
#endif

/*  Optional Pointer Parameters */

#if !defined(_In_opt_)
#  define _In_opt_
#endif

#if !defined(_Out_opt_)
#  define _Out_opt_
#endif

#if !defined(_Inout_opt_)
#  define _Inout_opt_
#endif

#if !defined(_In_opt_z_)
#  define _In_opt_z_
#endif

#if !defined(_Inout_opt_z_)
#  define _Inout_opt_z_
#endif

#if !defined(_In_reads_opt_)
#  define _In_reads_opt_(s)
#endif

#if !defined(_In_reads_bytes_opt_)
#  define _In_reads_bytes_opt_(s)
#endif

#if !defined(_In_reads_opt_z_)
#  define _In_reads_opt_z_(s)
#endif

#if !defined(_Out_writes_opt_)
#  define _Out_writes_opt_(s)
#endif

#if !defined(_Out_writes_bytes_)
#  define _Out_writes_bytes_(s)
#endif

#if !defined(_Out_writes_opt_z_)
#  define _Out_writes_opt_z_(s)
#endif

#if !defined(_Inout_updates_opt_)
#  define _Inout_updates_opt_(s)
#endif

#if !defined(_Inout_updates_bytes_opt_)
#  define _Inout_updates_bytes_opt_(s)
#endif

#if !defined(_Inout_updates_opt_z_)
#  define _Inout_updates_opt_z_(s)
#endif

#if !defined(_Out_writes_to_opt_)
#  define _Out_writes_to_opt_(s,c)
#endif

#if !defined(_Out_writes_bytes_to_opt_)
#  define _Out_writes_bytes_to_opt_(s,c)
#endif

#if !defined(_Out_writes_all_opt_)
#  define _Out_writes_all_opt_(s)
#endif

#if !defined(_Out_writes_bytes_all_opt_)
#  define _Out_writes_bytes_all_opt_(s)
#endif

#if !defined(_In_updates_to_opt_)
#  define _In_updates_to_opt_(s,c)
#endif

#if !defined(_In_updates_bytes_to_opt_)
#  define _In_updates_bytes_to_opt_(s,c)
#endif

#if !defined(_Inout_updates_all_opt_)
#  define _Inout_updates_all_opt_(s)
#endif

#if !defined(_Inout_updates_bytes_all_opt_)
#  define _Inout_updates_bytes_all_opt_(s)
#endif

#if !defined(_In_reads_to_ptr_opt_)
#  define _In_reads_to_ptr_opt_(p)
#endif

#if !defined(_In_reads_to_ptr_opt_z_)
#  define _In_reads_to_ptr_opt_z_(p)
#endif

#if !defined(_Out_writes_to_ptr_opt_)
#  define _Out_writes_to_ptr_opt_(p)
#endif

#if !defined(_Out_writes_to_ptr_opt_z_)
#  define _Out_writes_to_ptr_opt_z_(p)
#endif

/* Output Pointer Parameters */

#if !defined(_Outptr_)
#  define _Outptr_
#endif

#if !defined(_Outptr_opt_)
#  define _Outptr_opt_
#endif

#if !defined(_Outptr_result_maybenull_)
#  define _Outptr_result_maybenull_
#endif

#if !defined(_Outptr_opt_result_maybenull_)
#  define _Outptr_opt_result_maybenull_
#endif

#if !defined(_Outptr_result_z_)
#  define _Outptr_result_z_
#endif

#if !defined(_Outptr_opt_result_z_)
#  define _Outptr_opt_result_z_
#endif

#if !defined(_Outptr_result_maybenull_z_)
#  define _Outptr_result_maybenull_z_
#endif

#if !defined(_Outptr_opt_result_maybenull_z_)
#  define _Outptr_opt_result_maybenull_z_
#endif

#if !defined(_COM_Outptr_)
#  define _COM_Outptr_
#endif

#if !defined(_COM_Outptr_opt_)
#  define _COM_Outptr_opt_
#endif

#if !defined(_COM_Outptr_result_maybenull_)
#  define _COM_Outptr_result_maybenull_
#endif

#if !defined(_Outptr_opt_result_maybenull_)
#  define _Outptr_opt_result_maybenull_
#endif

#if !defined(_Outptr_result_buffer_)
#  define _Outptr_result_buffer_(s)
#endif

#if !defined(_Outptr_result_bytebuffer_)
#  define _Outptr_result_bytebuffer_(s)
#endif

#if !defined(_Outptr_opt_result_buffer_)
#  define _Outptr_opt_result_buffer_(s)
#endif

#if !defined(_Outptr_opt_result_bytebuffer_)
#  define _Outptr_opt_result_bytebuffer_(s)
#endif

#if !defined(_Outptr_result_buffer_to_)
#  define _Outptr_result_buffer_to_(s,c)
#endif

#if !defined(_Outptr_result_bytebuffer_to_)
#  define _Outptr_result_bytebuffer_to_(s,c)
#endif

#if !defined(_Outptr_opt_result_buffer_to_)
#  define _Outptr_opt_result_buffer_to_(s,c)
#endif

#if !defined(_Outptr_opt_result_bytebuffer_to_)
#  define _Outptr_opt_result_bytebuffer_to_(s,c)
#endif

#if !defined(_Result_nullonfailure_)
#  define _Result_nullonfailure_
#endif

#if !defined(_Result_zeroonfailure_)
#  define _Result_zeroonfailure_
#endif

#if !defined(_Outptr_result_nullonfailure_)
#  define _Outptr_result_nullonfailure_
#endif

#if !defined(_Outptr_opt_result_nullonfailure_)
#  define _Outptr_opt_result_nullonfailure_
#endif

#if !defined(_Outref_result_nullonfailure_)
#  define _Outref_result_nullonfailure_
#endif

/* Output Reference Parameters */

#if !defined(_Outref_)
#  define _Outref_
#endif

#if !defined(_Outref_result_maybenull_)
#  define _Outref_result_maybenull_
#endif

#if !defined(_Outref_result_buffer_)
#  define _Outref_result_buffer_(s)
#endif

#if !defined(_Outref_result_bytebuffer_)
#  define _Outref_result_bytebuffer_(s)
#endif

#if !defined(_Outref_result_buffer_to_)
#  define _Outref_result_buffer_to_(s,c)
#endif

#if !defined(_Outref_result_bytebuffer_to_)
#  define _Outref_result_bytebuffer_to_(s,c)
#endif

#if !defined(_Outref_result_buffer_all_)
#  define _Outref_result_buffer_all_(s)
#endif

#if !defined(_Outref_result_bytebuffer_all_)
#  define _Outref_result_bytebuffer_all_(s)
#endif

#if !defined(_Outref_result_buffer_maybenull_)
#  define _Outref_result_buffer_maybenull_(s)
#endif

#if !defined(_Outref_result_bytebuffer_maybenull_)
#  define _Outref_result_bytebuffer_maybenull_(s)
#endif

#if !defined(_Outref_result_buffer_to_maybenull_)
#  define _Outref_result_buffer_to_maybenull_(s,c)
#endif

#if !defined(_Outref_result_bytebuffer_to_maybenull_)
#  define _Outref_result_bytebuffer_to_maybenull_(s,c)
#endif

#if !defined(_Outref_result_buffer_all_maybenull_)
#  define _Outref_result_buffer_all_maybenull_(s)
#endif

#if !defined(_Outref_result_bytebuffer_all_maybenull_)
#  define _Outref_result_bytebuffer_all_maybenull_(s)
#endif

/* Return Values */

#if !defined(_Ret_z_)
#  define _Ret_z_
#endif

#if !defined(_Ret_writes_)
#  define _Ret_writes_(s)
#endif

#if !defined(_Ret_writes_bytes_)
#  define _Ret_writes_bytes_(s)
#endif

#if !defined(_Ret_writes_z_)
#  define _Ret_writes_z_(s)
#endif

#if !defined(_Ret_writes_to_)
#  define _Ret_writes_to_(s,c)
#endif

#if !defined(_Ret_writes_maybenull_)
#  define _Ret_writes_maybenull_(s)
#endif

#if !defined(_Ret_writes_to_maybenull_)
#  define _Ret_writes_to_maybenull_(s)
#endif

#if !defined(_Ret_writes_maybenull_z_)
#  define _Ret_writes_maybenull_z_(s)
#endif

#if !defined(_Ret_maybenull_)
#  define _Ret_maybenull_
#endif

#if !defined(_Ret_maybenull_z_)
#  define _Ret_maybenull_z_
#endif

#if !defined(_Ret_null_)
#  define _Ret_null_
#endif

#if !defined(_Ret_notnull_)
#  define _Ret_notnull_
#endif

#if !defined(_Ret_writes_bytes_to_)
#  define _Ret_writes_bytes_to_
#endif

#if !defined(_Ret_writes_bytes_to_)
#  define _Ret_writes_bytes_to_
#endif

#if !defined(_Ret_writes_bytes_maybenull_)
#  define _Ret_writes_bytes_maybenull_
#endif

#if !defined(_Ret_writes_bytes_to_maybenull_)
#  define _Ret_writes_bytes_to_maybenull_
#endif

/* Other Common Annotations */

#if !defined(_In_range_)
#  define _In_range_(low, hi)
#endif

#if !defined(_Out_range_)
#  define _Out_range_(low, hi)
#endif

#if !defined(_Ret_range_)
#  define _Ret_range_(low, hi)
#endif

#if !defined(_Deref_in_range_)
#  define _Deref_in_range_(low, hi)
#endif

#if !defined(_Deref_out_range_)
#  define _Deref_out_range_(low, hi)
#endif

#if !defined(_Deref_inout_range_)
#  define _Deref_inout_range_(low, hi)
#endif

#if !defined(_Field_range_)
#  define _Field_range_(low, hi)
#endif

#if !defined(_Pre_equal_to_)
#  define _Pre_equal_to_(expr)
#endif

#if !defined(_Post_equal_to_)
#  define _Post_equal_to_(expr)
#endif

#if !defined(_Struct_size_bytes_)
#  define _Struct_size_bytes_(size)
#endif

/* Annotating Function Behavior
 *
 * https://msdn.microsoft.com/en-us/library/jj159529.aspx
 *****/

#if !defined(_Called_from_function_class_)
#  define _Called_from_function_class_(name)
#endif

#if !defined(_Check_return_)
#  define _Check_return_
#endif

#if !defined(_Function_class_)
#  define _Function_class_(name)
#endif

#if !defined(_Raises_SEH_exception_)
#  define _Raises_SEH_exception_
#endif

#if !defined(_Must_inspect_result_)
#  define _Must_inspect_result_
#endif

#if !defined(_Use_decl_annotations_)
#  define _Use_decl_annotations_
#endif

#if !defined(_Always_)
#  define _Always_(anno_list)
#endif

#if !defined(_On_failure_)
#  define _On_failure_(anno_list)
#endif

#if !defined(_Return_type_success_)
#  define _Return_type_success_(expr)
#endif

#if !defined(_Success_)
#  define _Success_(expr)
#endif

/* Annotating Structs and Classes
 *
 * https://msdn.microsoft.com/en-us/library/jj159528.aspx
 *****/

#if !defined(_Field_range_)
#  define _Field_range_(low, high)
#endif

#if !defined(_Field_size_)
#  define _Field_size_(size)
#endif

#if !defined(_Field_size_part_)
#  define _Field_size_part_(size)
#endif

#if !defined(_Field_size_opt_)
#  define _Field_size_opt_(size)
#endif

#if !defined(_Field_size_bytes_)
#  define _Field_size_bytes_(size)
#endif

#if !defined(_Field_size_bytes_opt_)
#  define _Field_size_bytes_opt_(size)
#endif

#if !defined(_Field_size_part_)
#  define _Field_size_part_(size, count)
#endif

#if !defined(_Field_size_part_opt_)
#  define _Field_size_part_opt_(size, count)
#endif

#if !defined(_Field_size_bytes_part_)
#  define _Field_size_bytes_part_(size, count)
#endif

#if !defined(_Field_size_bytes_part_opt_)
#  define _Field_size_bytes_part_opt_(size, count)
#endif

#if !defined(_Field_size_full_)
#  define _Field_size_full_(size)
#endif

#if !defined(_Field_size_full_opt_)
#  define _Field_size_full_opt_(size)
#endif

#if !defined(_Field_size_bytes_full_)
#  define _Field_size_bytes_full_(size)
#endif

#if !defined(_Field_size_bytes_full_opt_)
#  define _Field_size_bytes_full_opt_(size)
#endif

#if !defined(_Struct_size_bytes_)
#  define _Struct_size_bytes_(size)
#endif

/* Annotating Locking Behavior
 *
 * https://msdn.microsoft.com/en-us/library/hh916381.aspx
 *****/

#if !defined(_Acquires_exclusive_lock_)
#  define _Acquires_exclusive_lock_(expr)
#endif

#if !defined(_Acquires_lock_)
#  define _Acquires_lock_(expr)
#endif

#if !defined(_Acquires_nonreentrant_lock_)
#  define _Acquires_nonreentrant_lock_(expr)
#endif

#if !defined(_Acquires_shared_lock_)
#  define _Acquires_shared_lock_(expr)
#endif

#if !defined(_Create_lock_level_)
#  define _Create_lock_level_(name)
#endif

#if !defined(_Has_lock_kind_)
#  define _Has_lock_kind_(kind)
#endif

#if !defined(_Has_lock_level_)
#  define _Has_lock_level_(name)
#endif

#if !defined(_Lock_level_order_)
#  define _Lock_level_order_(name1, name2)
#endif

#if !defined(_Post_same_lock_)
#  define _Post_same_lock_(expr1, expr2)
#endif

#if !defined(_Releases_exclusive_lock_)
#  define _Releases_exclusive_lock_(expr)
#endif

#if !defined(_Releases_lock_)
#  define _Releases_lock_(expr)
#endif

#if !defined(_Releases_nonreentrant_lock_)
#  define _Releases_nonreentrant_lock_(expr)
#endif

#if !defined(_Releases_shared_lock_)
#  define _Releases_shared_lock_(expr)
#endif

#if !defined(_Requires_lock_held_)
#  define _Requires_lock_held_(expr)
#endif

#if !defined(_Requires_lock_not_held_)
#  define _Requires_lock_not_held_(expr)
#endif

#if !defined(_Requires_no_locks_held_)
#  define _Requires_no_locks_held_
#endif

#if !defined(_Requires_shared_lock_held_)
#  define _Requires_shared_lock_held_(expr)
#endif

#if !defined(_Requires_exclusive_lock_held_)
#  define _Requires_exclusive_lock_held_(expr)
#endif

/* Shared Data Access Annotations */

#if !defined(_Guarded_by_)
#  define _Guarded_by_(expr)
#endif

#if !defined(_Interlocked_)
#  define _Interlocked_
#endif

#if !defined(_Interlocked_operand_)
#  define _Interlocked_operand_
#endif

#if !defined(_Write_guarded_by_)
#  define _Write_guarded_by_(expr)
#endif

/* Specifying When and Where an Annotation Applies
 *
 * https://msdn.microsoft.com/en-us/library/jj159526.aspx
 *****/

#if !defined(_At_)
#  define _At_(expr, anno_list)
#endif

#if !defined(_At_buffer_)
#  define _At_buffer_(expr, iter, elem_count, anno_list)
#endif

#if !defined(_Group_)
#  define _Group_(anno_list)
#endif

#if !defined(_When_)
#  define _When_(expr, anno_list)
#endif

/* Intrinsic Functions
 *
 * https://msdn.microsoft.com/en-us/library/jj159527.aspx
 *****/

/* General Purpose */

#if !defined(_Curr_)
#  define _Curr_
#endif

#if !defined(_Inexpressible_)
#  define _Inexpressible_(expr)
#endif

#if !defined(_Nullterm_length_)
#  define _Nullterm_length_(param)
#endif

#if !defined(_Old_)
#  define _Old_(expr)
#endif

#if !defined(_Param_)
#  define _Param_(n)
#endif

/* String Specific */

#if !defined(_String_length_)
#  define _String_length_(param)
#endif

#endif //EX1_ASSERTION_SAL_H
