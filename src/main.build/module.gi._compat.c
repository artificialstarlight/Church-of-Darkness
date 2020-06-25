/* Generated code for Python module 'gi._compat'
 * created by Nuitka version 0.6.9rc5
 *
 * This code is in part copyright 2020 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_gi$_compat" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_gi$_compat;
PyDictObject *moduledict_gi$_compat;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_b;
static PyObject *const_str_plain_cmp;
static PyObject *const_str_digest_3898c2c082a386d2be6ad501a13b48cd;
static PyObject *const_str_plain_PY2;
static PyObject *const_str_digest_58ff6ccfc11c8774c9d298b85af436df;
static PyObject *const_str_plain_eval;
static PyObject *const_tuple_str_plain_UserList_tuple;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple;
extern PyObject *const_str_plain_sys;
static PyObject *const_tuple_str_plain_StringIO_tuple;
static PyObject *const_str_plain_xrange;
extern PyObject *const_str_plain_io;
static PyObject *const_str_plain_tp;
static PyObject *const_str_plain_StringIO;
static PyObject *const_str_plain_text_type;
extern PyObject *const_str_plain_str;
static PyObject *const_str_digest_1a6288f59e7208b4832970c7a8e4e197;
extern PyObject *const_str_plain_range;
static PyObject *const_tuple_str_plain_tp_str_plain_value_str_plain_tb_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_with_traceback;
static PyObject *const_str_plain_long;
extern PyObject *const_str_plain_importlib;
extern PyObject *const_str_plain_int;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_tb;
static PyObject *const_str_digest_6179944d8bb339d712b456a36789f415;
extern PyObject *const_str_plain_string_types;
static PyObject *const_str_plain_UserList;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_unicode;
static PyObject *const_str_plain_a;
extern PyObject *const_str_plain_collections;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_version_info;
static PyObject *const_str_digest_bc431905b930e533433c92e81a7ea71c;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_strip;
static PyObject *const_str_plain_integer_types;
static PyObject *const_str_plain_exec;
static PyObject *const_tuple_type_int_tuple;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_str_plain_reload_tuple;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_ac02ab0238280e341b2aff0eed15b128;
static PyObject *const_tuple_str_plain_a_str_plain_b_tuple;
extern PyObject *const_str_angle_lambda;
static PyObject *const_str_angle_string;
extern PyObject *const_tuple_type_str_tuple;
static PyObject *const_str_plain_reraise;
static PyObject *const_str_plain_PY3;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_reload;
extern PyObject *const_str_plain_long_;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_b = UNSTREAM_STRING_ASCII(&constant_bin[ 308 ], 1, 1);
    const_str_plain_cmp = UNSTREAM_STRING_ASCII(&constant_bin[ 59673 ], 3, 1);
    const_str_digest_3898c2c082a386d2be6ad501a13b48cd = UNSTREAM_STRING_ASCII(&constant_bin[ 59676 ], 48, 0);
    const_str_plain_PY2 = UNSTREAM_STRING_ASCII(&constant_bin[ 59724 ], 3, 1);
    const_str_digest_58ff6ccfc11c8774c9d298b85af436df = UNSTREAM_STRING_ASCII(&constant_bin[ 59727 ], 48, 0);
    const_str_plain_eval = UNSTREAM_STRING_ASCII(&constant_bin[ 59775 ], 4, 1);
    const_tuple_str_plain_UserList_tuple = PyTuple_New(1);
    const_str_plain_UserList = UNSTREAM_STRING_ASCII(&constant_bin[ 59779 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_UserList_tuple, 0, const_str_plain_UserList); Py_INCREF(const_str_plain_UserList);
    const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple = PyTuple_New(1);
    const_str_digest_ac02ab0238280e341b2aff0eed15b128 = UNSTREAM_STRING_ASCII(&constant_bin[ 59787 ], 2, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple, 0, const_str_digest_ac02ab0238280e341b2aff0eed15b128); Py_INCREF(const_str_digest_ac02ab0238280e341b2aff0eed15b128);
    const_tuple_str_plain_StringIO_tuple = PyTuple_New(1);
    const_str_plain_StringIO = UNSTREAM_STRING_ASCII(&constant_bin[ 59789 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_StringIO_tuple, 0, const_str_plain_StringIO); Py_INCREF(const_str_plain_StringIO);
    const_str_plain_xrange = UNSTREAM_STRING_ASCII(&constant_bin[ 59797 ], 6, 1);
    const_str_plain_tp = UNSTREAM_STRING_ASCII(&constant_bin[ 31820 ], 2, 1);
    const_str_plain_text_type = UNSTREAM_STRING_ASCII(&constant_bin[ 59803 ], 9, 1);
    const_str_digest_1a6288f59e7208b4832970c7a8e4e197 = UNSTREAM_STRING_ASCII(&constant_bin[ 59812 ], 13, 0);
    const_tuple_str_plain_tp_str_plain_value_str_plain_tb_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_tp_str_plain_value_str_plain_tb_tuple, 0, const_str_plain_tp); Py_INCREF(const_str_plain_tp);
    PyTuple_SET_ITEM(const_tuple_str_plain_tp_str_plain_value_str_plain_tb_tuple, 1, const_str_plain_value); Py_INCREF(const_str_plain_value);
    PyTuple_SET_ITEM(const_tuple_str_plain_tp_str_plain_value_str_plain_tb_tuple, 2, const_str_plain_tb); Py_INCREF(const_str_plain_tb);
    const_str_plain_with_traceback = UNSTREAM_STRING_ASCII(&constant_bin[ 59825 ], 14, 1);
    const_str_plain_long = UNSTREAM_STRING_ASCII(&constant_bin[ 4778 ], 4, 1);
    const_str_digest_6179944d8bb339d712b456a36789f415 = UNSTREAM_STRING_ASCII(&constant_bin[ 59839 ], 11, 0);
    const_str_plain_a = UNSTREAM_STRING_ASCII(&constant_bin[ 1 ], 1, 1);
    const_str_digest_bc431905b930e533433c92e81a7ea71c = UNSTREAM_STRING_ASCII(&constant_bin[ 59850 ], 19, 0);
    const_str_plain_integer_types = UNSTREAM_STRING_ASCII(&constant_bin[ 59869 ], 13, 1);
    const_str_plain_exec = UNSTREAM_STRING_ASCII(&constant_bin[ 23321 ], 4, 1);
    const_tuple_type_int_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_type_int_tuple, 0, (PyObject *)&PyLong_Type); Py_INCREF((PyObject *)&PyLong_Type);
    const_tuple_str_plain_reload_tuple = PyTuple_New(1);
    const_str_plain_reload = UNSTREAM_STRING_ASCII(&constant_bin[ 59882 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_reload_tuple, 0, const_str_plain_reload); Py_INCREF(const_str_plain_reload);
    const_tuple_str_plain_a_str_plain_b_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_a_str_plain_b_tuple, 0, const_str_plain_a); Py_INCREF(const_str_plain_a);
    PyTuple_SET_ITEM(const_tuple_str_plain_a_str_plain_b_tuple, 1, const_str_plain_b); Py_INCREF(const_str_plain_b);
    const_str_angle_string = UNSTREAM_STRING_ASCII(&constant_bin[ 59888 ], 8, 0);
    const_str_plain_reraise = UNSTREAM_STRING_ASCII(&constant_bin[ 59731 ], 7, 1);
    const_str_plain_PY3 = UNSTREAM_STRING_ASCII(&constant_bin[ 59896 ], 3, 1);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_gi$_compat(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c7ee09116823775e6d74d77d4da55a8f;
static PyCodeObject *codeobj_5f320125ed280f901d4051c6ddd2fed6;
static PyCodeObject *codeobj_11c7f55af7cd8b3edc0c984dc6eb7621;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_3898c2c082a386d2be6ad501a13b48cd;
    codeobj_c7ee09116823775e6d74d77d4da55a8f = MAKE_CODEOBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_angle_lambda, const_tuple_str_plain_a_str_plain_b_tuple, 2, 0, 0);
    codeobj_5f320125ed280f901d4051c6ddd2fed6 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_bc431905b930e533433c92e81a7ea71c, const_tuple_empty, 0, 0, 0);
    codeobj_11c7f55af7cd8b3edc0c984dc6eb7621 = MAKE_CODEOBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_reraise, const_tuple_str_plain_tp_str_plain_value_str_plain_tb_tuple, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_gi$_compat$$$function_1_lambda();


static PyObject *MAKE_FUNCTION_gi$_compat$$$function_2_reraise();


// The module function definitions.
static PyObject *impl_gi$_compat$$$function_1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_b = python_pars[1];
    struct Nuitka_FrameObject *frame_c7ee09116823775e6d74d77d4da55a8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c7ee09116823775e6d74d77d4da55a8f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c7ee09116823775e6d74d77d4da55a8f)) {
        Py_XDECREF(cache_frame_c7ee09116823775e6d74d77d4da55a8f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c7ee09116823775e6d74d77d4da55a8f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c7ee09116823775e6d74d77d4da55a8f = MAKE_FUNCTION_FRAME(codeobj_c7ee09116823775e6d74d77d4da55a8f, module_gi$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c7ee09116823775e6d74d77d4da55a8f->m_type_description == NULL);
    frame_c7ee09116823775e6d74d77d4da55a8f = cache_frame_c7ee09116823775e6d74d77d4da55a8f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c7ee09116823775e6d74d77d4da55a8f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c7ee09116823775e6d74d77d4da55a8f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_a);
        tmp_compexpr_left_1 = par_a;
        CHECK_OBJECT(par_b);
        tmp_compexpr_right_1 = par_b;
        tmp_left_name_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_compexpr_left_2 = par_a;
        CHECK_OBJECT(par_b);
        tmp_compexpr_right_2 = par_b;
        tmp_right_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c7ee09116823775e6d74d77d4da55a8f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c7ee09116823775e6d74d77d4da55a8f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c7ee09116823775e6d74d77d4da55a8f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c7ee09116823775e6d74d77d4da55a8f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c7ee09116823775e6d74d77d4da55a8f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c7ee09116823775e6d74d77d4da55a8f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c7ee09116823775e6d74d77d4da55a8f,
        type_description_1,
        par_a,
        par_b
    );


    // Release cached frame.
    if (frame_c7ee09116823775e6d74d77d4da55a8f == cache_frame_c7ee09116823775e6d74d77d4da55a8f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_c7ee09116823775e6d74d77d4da55a8f);
    }
    cache_frame_c7ee09116823775e6d74d77d4da55a8f = NULL;

    assertFrameObject(frame_c7ee09116823775e6d74d77d4da55a8f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$_compat$$$function_2_reraise(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tp = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_tb = python_pars[2];
    struct Nuitka_FrameObject *frame_11c7f55af7cd8b3edc0c984dc6eb7621;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_11c7f55af7cd8b3edc0c984dc6eb7621 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_11c7f55af7cd8b3edc0c984dc6eb7621)) {
        Py_XDECREF(cache_frame_11c7f55af7cd8b3edc0c984dc6eb7621);

#if _DEBUG_REFCOUNTS
        if (cache_frame_11c7f55af7cd8b3edc0c984dc6eb7621 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_11c7f55af7cd8b3edc0c984dc6eb7621 = MAKE_FUNCTION_FRAME(codeobj_11c7f55af7cd8b3edc0c984dc6eb7621, module_gi$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_11c7f55af7cd8b3edc0c984dc6eb7621->m_type_description == NULL);
    frame_11c7f55af7cd8b3edc0c984dc6eb7621 = cache_frame_11c7f55af7cd8b3edc0c984dc6eb7621;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_11c7f55af7cd8b3edc0c984dc6eb7621);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_11c7f55af7cd8b3edc0c984dc6eb7621) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_tp);
        tmp_called_name_1 = par_tp;
        CHECK_OBJECT(par_value);
        tmp_args_element_name_1 = par_value;
        frame_11c7f55af7cd8b3edc0c984dc6eb7621->m_frame.f_lineno = 56;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tb);
        tmp_args_element_name_2 = par_tb;
        frame_11c7f55af7cd8b3edc0c984dc6eb7621->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_name_2};
            tmp_raise_type_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_with_traceback, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 56;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_11c7f55af7cd8b3edc0c984dc6eb7621);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_11c7f55af7cd8b3edc0c984dc6eb7621);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_11c7f55af7cd8b3edc0c984dc6eb7621, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_11c7f55af7cd8b3edc0c984dc6eb7621->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_11c7f55af7cd8b3edc0c984dc6eb7621, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_11c7f55af7cd8b3edc0c984dc6eb7621,
        type_description_1,
        par_tp,
        par_value,
        par_tb
    );


    // Release cached frame.
    if (frame_11c7f55af7cd8b3edc0c984dc6eb7621 == cache_frame_11c7f55af7cd8b3edc0c984dc6eb7621) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_11c7f55af7cd8b3edc0c984dc6eb7621);
    }
    cache_frame_11c7f55af7cd8b3edc0c984dc6eb7621 = NULL;

    assertFrameObject(frame_11c7f55af7cd8b3edc0c984dc6eb7621);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_tp);
    Py_DECREF(par_tp);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_tb);
    Py_DECREF(par_tb);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}



static PyObject *MAKE_FUNCTION_gi$_compat$$$function_1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$_compat$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c7ee09116823775e6d74d77d4da55a8f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gi$_compat,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$_compat$$$function_2_reraise() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$_compat$$$function_2_reraise,
        const_str_plain_reraise,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_11c7f55af7cd8b3edc0c984dc6eb7621,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gi$_compat,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}


extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;
extern PyObject *const_str_empty;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_gi$_compat[] = {
    impl_gi$_compat$$$function_1_lambda,
    impl_gi$_compat$$$function_2_reraise,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_gi$_compat;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_gi$_compat) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    // TODO: More stuff needed for Python3, best to re-order arguments of MAKE_CODEOBJECT.
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_gi$_compat[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_gi$_compat,
        doc,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_gi$_compat(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_gi$_compat = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_gi$_compat;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("gi._compat: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("gi._compat: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("gi._compat: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initgi$_compat\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_gi$_compat = MODULE_DICT(module_gi$_compat);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL) {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SET_ITEM(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SET_ITEM(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_gi$_compat,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_gi$_compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_gi$_compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_gi$_compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_gi$_compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_gi$_compat);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_gi$_compat);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_eval_call_1__globals = NULL;
    PyObject *tmp_eval_call_1__locals = NULL;
    PyObject *tmp_eval_call_1__source = NULL;
    PyObject *tmp_eval_call_2__globals = NULL;
    PyObject *tmp_eval_call_2__locals = NULL;
    PyObject *tmp_eval_call_2__source = NULL;
    PyObject *tmp_eval_call_3__globals = NULL;
    PyObject *tmp_eval_call_3__locals = NULL;
    PyObject *tmp_eval_call_3__source = NULL;
    PyObject *tmp_eval_call_4__globals = NULL;
    PyObject *tmp_eval_call_4__locals = NULL;
    PyObject *tmp_eval_call_4__source = NULL;
    PyObject *tmp_eval_call_5__globals = NULL;
    PyObject *tmp_eval_call_5__locals = NULL;
    PyObject *tmp_eval_call_5__source = NULL;
    PyObject *tmp_eval_call_6__globals = NULL;
    PyObject *tmp_eval_call_6__locals = NULL;
    PyObject *tmp_eval_call_6__source = NULL;
    PyObject *tmp_eval_call_7__globals = NULL;
    PyObject *tmp_eval_call_7__locals = NULL;
    PyObject *tmp_eval_call_7__source = NULL;
    PyObject *tmp_exec_call_1__globals = NULL;
    PyObject *tmp_exec_call_1__locals = NULL;
    struct Nuitka_FrameObject *frame_5f320125ed280f901d4051c6ddd2fed6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_3898c2c082a386d2be6ad501a13b48cd;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_5f320125ed280f901d4051c6ddd2fed6 = MAKE_MODULE_FRAME(codeobj_5f320125ed280f901d4051c6ddd2fed6, module_gi$_compat);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_5f320125ed280f901d4051c6ddd2fed6);
    assert(Py_REFCNT(frame_5f320125ed280f901d4051c6ddd2fed6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_3898c2c082a386d2be6ad501a13b48cd;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_assattr_target_1 = tmp_mvar_value_1;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_origin, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_2 = Py_True;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_2);
        tmp_assattr_target_2 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_has_location, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_gi$_compat;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_5f320125ed280f901d4051c6ddd2fed6->m_frame.f_lineno = 14;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_False;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_PY2, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_False;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_PY3, tmp_assign_source_6);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_sys);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
        }

        CHECK_OBJECT(tmp_mvar_value_3);
        tmp_expression_name_2 = tmp_mvar_value_3;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_version_info);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_True;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_PY2, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_StringIO;
        tmp_globals_name_2 = (PyObject *)moduledict_gi$_compat;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_StringIO_tuple;
        tmp_level_name_2 = const_int_0;
        frame_5f320125ed280f901d4051c6ddd2fed6->m_frame.f_lineno = 20;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_gi$_compat,
                const_str_plain_StringIO,
                const_int_0
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_StringIO);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_StringIO, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_UserList;
        tmp_globals_name_3 = (PyObject *)moduledict_gi$_compat;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_UserList_tuple;
        tmp_level_name_3 = const_int_0;
        frame_5f320125ed280f901d4051c6ddd2fed6->m_frame.f_lineno = 23;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_gi$_compat,
                const_str_plain_UserList,
                const_int_0
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_UserList);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_UserList, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = (PyObject *)moduledict_gi$_compat;
            assert(tmp_eval_call_1__locals == NULL);
            Py_INCREF(tmp_assign_source_11);
            tmp_eval_call_1__locals = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = (PyObject *)moduledict_gi$_compat;
            assert(tmp_eval_call_1__globals == NULL);
            Py_INCREF(tmp_assign_source_12);
            tmp_eval_call_1__globals = tmp_assign_source_12;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_instance_1;
            tmp_called_instance_1 = const_str_plain_long;
            frame_5f320125ed280f901d4051c6ddd2fed6->m_frame.f_lineno = 26;
            tmp_assign_source_13 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_strip, &PyTuple_GET_ITEM(const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple, 0));

            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto try_except_handler_1;
            }
            assert(tmp_eval_call_1__source == NULL);
            tmp_eval_call_1__source = tmp_assign_source_13;
        }
        {
            PyObject *tmp_eval_source_1;
            PyObject *tmp_eval_globals_1;
            PyObject *tmp_eval_locals_1;
            PyObject *tmp_eval_compiled_1;
            CHECK_OBJECT(tmp_eval_call_1__source);
            tmp_eval_source_1 = tmp_eval_call_1__source;
            CHECK_OBJECT(tmp_eval_call_1__globals);
            tmp_eval_globals_1 = tmp_eval_call_1__globals;
            CHECK_OBJECT(tmp_eval_call_1__locals);
            tmp_eval_locals_1 = tmp_eval_call_1__locals;
            tmp_eval_compiled_1 = COMPILE_CODE(tmp_eval_source_1, const_str_angle_string, const_str_plain_eval, NULL, NULL, NULL);
            if (tmp_eval_compiled_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto try_except_handler_1;
            }
            tmp_assign_source_10 = EVAL_CODE(tmp_eval_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1);
            Py_DECREF(tmp_eval_compiled_1);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto try_except_handler_1;
            }
            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_eval_call_1__globals);
        Py_DECREF(tmp_eval_call_1__globals);
        tmp_eval_call_1__globals = NULL;

        CHECK_OBJECT(tmp_eval_call_1__locals);
        Py_DECREF(tmp_eval_call_1__locals);
        tmp_eval_call_1__locals = NULL;

        Py_XDECREF(tmp_eval_call_1__source);
        tmp_eval_call_1__source = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_1:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_eval_call_1__globals);
        Py_DECREF(tmp_eval_call_1__globals);
        tmp_eval_call_1__globals = NULL;

        CHECK_OBJECT(tmp_eval_call_1__locals);
        Py_DECREF(tmp_eval_call_1__locals);
        tmp_eval_call_1__locals = NULL;

        Py_XDECREF(tmp_eval_call_1__source);
        tmp_eval_call_1__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_long_, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = (PyObject *)moduledict_gi$_compat;
            assert(tmp_eval_call_2__locals == NULL);
            Py_INCREF(tmp_assign_source_15);
            tmp_eval_call_2__locals = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = (PyObject *)moduledict_gi$_compat;
            assert(tmp_eval_call_2__globals == NULL);
            Py_INCREF(tmp_assign_source_16);
            tmp_eval_call_2__globals = tmp_assign_source_16;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_instance_2;
            tmp_called_instance_2 = const_str_digest_6179944d8bb339d712b456a36789f415;
            frame_5f320125ed280f901d4051c6ddd2fed6->m_frame.f_lineno = 27;
            tmp_assign_source_17 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_strip, &PyTuple_GET_ITEM(const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple, 0));

            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto try_except_handler_2;
            }
            assert(tmp_eval_call_2__source == NULL);
            tmp_eval_call_2__source = tmp_assign_source_17;
        }
        {
            PyObject *tmp_eval_source_2;
            PyObject *tmp_eval_globals_2;
            PyObject *tmp_eval_locals_2;
            PyObject *tmp_eval_compiled_2;
            CHECK_OBJECT(tmp_eval_call_2__source);
            tmp_eval_source_2 = tmp_eval_call_2__source;
            CHECK_OBJECT(tmp_eval_call_2__globals);
            tmp_eval_globals_2 = tmp_eval_call_2__globals;
            CHECK_OBJECT(tmp_eval_call_2__locals);
            tmp_eval_locals_2 = tmp_eval_call_2__locals;
            tmp_eval_compiled_2 = COMPILE_CODE(tmp_eval_source_2, const_str_angle_string, const_str_plain_eval, NULL, NULL, NULL);
            if (tmp_eval_compiled_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto try_except_handler_2;
            }
            tmp_assign_source_14 = EVAL_CODE(tmp_eval_compiled_2, tmp_eval_globals_2, tmp_eval_locals_2);
            Py_DECREF(tmp_eval_compiled_2);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto try_except_handler_2;
            }
            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_eval_call_2__globals);
        Py_DECREF(tmp_eval_call_2__globals);
        tmp_eval_call_2__globals = NULL;

        CHECK_OBJECT(tmp_eval_call_2__locals);
        Py_DECREF(tmp_eval_call_2__locals);
        tmp_eval_call_2__locals = NULL;

        Py_XDECREF(tmp_eval_call_2__source);
        tmp_eval_call_2__source = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_eval_call_2__globals);
        Py_DECREF(tmp_eval_call_2__globals);
        tmp_eval_call_2__globals = NULL;

        CHECK_OBJECT(tmp_eval_call_2__locals);
        Py_DECREF(tmp_eval_call_2__locals);
        tmp_eval_call_2__locals = NULL;

        Py_XDECREF(tmp_eval_call_2__source);
        tmp_eval_call_2__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = (PyObject *)moduledict_gi$_compat;
            assert(tmp_eval_call_3__locals == NULL);
            Py_INCREF(tmp_assign_source_19);
            tmp_eval_call_3__locals = tmp_assign_source_19;
        }
        {
            PyObject *tmp_assign_source_20;
            tmp_assign_source_20 = (PyObject *)moduledict_gi$_compat;
            assert(tmp_eval_call_3__globals == NULL);
            Py_INCREF(tmp_assign_source_20);
            tmp_eval_call_3__globals = tmp_assign_source_20;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_instance_3;
            tmp_called_instance_3 = const_str_digest_1a6288f59e7208b4832970c7a8e4e197;
            frame_5f320125ed280f901d4051c6ddd2fed6->m_frame.f_lineno = 28;
            tmp_assign_source_21 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_strip, &PyTuple_GET_ITEM(const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple, 0));

            if (tmp_assign_source_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            assert(tmp_eval_call_3__source == NULL);
            tmp_eval_call_3__source = tmp_assign_source_21;
        }
        {
            PyObject *tmp_eval_source_3;
            PyObject *tmp_eval_globals_3;
            PyObject *tmp_eval_locals_3;
            PyObject *tmp_eval_compiled_3;
            CHECK_OBJECT(tmp_eval_call_3__source);
            tmp_eval_source_3 = tmp_eval_call_3__source;
            CHECK_OBJECT(tmp_eval_call_3__globals);
            tmp_eval_globals_3 = tmp_eval_call_3__globals;
            CHECK_OBJECT(tmp_eval_call_3__locals);
            tmp_eval_locals_3 = tmp_eval_call_3__locals;
            tmp_eval_compiled_3 = COMPILE_CODE(tmp_eval_source_3, const_str_angle_string, const_str_plain_eval, NULL, NULL, NULL);
            if (tmp_eval_compiled_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            tmp_assign_source_18 = EVAL_CODE(tmp_eval_compiled_3, tmp_eval_globals_3, tmp_eval_locals_3);
            Py_DECREF(tmp_eval_compiled_3);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_eval_call_3__globals);
        Py_DECREF(tmp_eval_call_3__globals);
        tmp_eval_call_3__globals = NULL;

        CHECK_OBJECT(tmp_eval_call_3__locals);
        Py_DECREF(tmp_eval_call_3__locals);
        tmp_eval_call_3__locals = NULL;

        Py_XDECREF(tmp_eval_call_3__source);
        tmp_eval_call_3__source = NULL;

        goto outline_result_3;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_eval_call_3__globals);
        Py_DECREF(tmp_eval_call_3__globals);
        tmp_eval_call_3__globals = NULL;

        CHECK_OBJECT(tmp_eval_call_3__locals);
        Py_DECREF(tmp_eval_call_3__locals);
        tmp_eval_call_3__locals = NULL;

        Py_XDECREF(tmp_eval_call_3__source);
        tmp_eval_call_3__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_string_types, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = (PyObject *)moduledict_gi$_compat;
            assert(tmp_eval_call_4__locals == NULL);
            Py_INCREF(tmp_assign_source_23);
            tmp_eval_call_4__locals = tmp_assign_source_23;
        }
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = (PyObject *)moduledict_gi$_compat;
            assert(tmp_eval_call_4__globals == NULL);
            Py_INCREF(tmp_assign_source_24);
            tmp_eval_call_4__globals = tmp_assign_source_24;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_instance_4;
            tmp_called_instance_4 = const_str_plain_unicode;
            frame_5f320125ed280f901d4051c6ddd2fed6->m_frame.f_lineno = 29;
            tmp_assign_source_25 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_strip, &PyTuple_GET_ITEM(const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple, 0));

            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_4;
            }
            assert(tmp_eval_call_4__source == NULL);
            tmp_eval_call_4__source = tmp_assign_source_25;
        }
        {
            PyObject *tmp_eval_source_4;
            PyObject *tmp_eval_globals_4;
            PyObject *tmp_eval_locals_4;
            PyObject *tmp_eval_compiled_4;
            CHECK_OBJECT(tmp_eval_call_4__source);
            tmp_eval_source_4 = tmp_eval_call_4__source;
            CHECK_OBJECT(tmp_eval_call_4__globals);
            tmp_eval_globals_4 = tmp_eval_call_4__globals;
            CHECK_OBJECT(tmp_eval_call_4__locals);
            tmp_eval_locals_4 = tmp_eval_call_4__locals;
            tmp_eval_compiled_4 = COMPILE_CODE(tmp_eval_source_4, const_str_angle_string, const_str_plain_eval, NULL, NULL, NULL);
            if (tmp_eval_compiled_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_4;
            }
            tmp_assign_source_22 = EVAL_CODE(tmp_eval_compiled_4, tmp_eval_globals_4, tmp_eval_locals_4);
            Py_DECREF(tmp_eval_compiled_4);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_4;
            }
            goto try_return_handler_4;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_eval_call_4__globals);
        Py_DECREF(tmp_eval_call_4__globals);
        tmp_eval_call_4__globals = NULL;

        CHECK_OBJECT(tmp_eval_call_4__locals);
        Py_DECREF(tmp_eval_call_4__locals);
        tmp_eval_call_4__locals = NULL;

        Py_XDECREF(tmp_eval_call_4__source);
        tmp_eval_call_4__source = NULL;

        goto outline_result_4;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_eval_call_4__globals);
        Py_DECREF(tmp_eval_call_4__globals);
        tmp_eval_call_4__globals = NULL;

        CHECK_OBJECT(tmp_eval_call_4__locals);
        Py_DECREF(tmp_eval_call_4__locals);
        tmp_eval_call_4__locals = NULL;

        Py_XDECREF(tmp_eval_call_4__source);
        tmp_eval_call_4__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_text_type, tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_assign_source_27;
            tmp_assign_source_27 = (PyObject *)moduledict_gi$_compat;
            assert(tmp_eval_call_5__locals == NULL);
            Py_INCREF(tmp_assign_source_27);
            tmp_eval_call_5__locals = tmp_assign_source_27;
        }
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = (PyObject *)moduledict_gi$_compat;
            assert(tmp_eval_call_5__globals == NULL);
            Py_INCREF(tmp_assign_source_28);
            tmp_eval_call_5__globals = tmp_assign_source_28;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_instance_5;
            tmp_called_instance_5 = const_str_plain_reload;
            frame_5f320125ed280f901d4051c6ddd2fed6->m_frame.f_lineno = 31;
            tmp_assign_source_29 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_strip, &PyTuple_GET_ITEM(const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple, 0));

            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_5;
            }
            assert(tmp_eval_call_5__source == NULL);
            tmp_eval_call_5__source = tmp_assign_source_29;
        }
        {
            PyObject *tmp_eval_source_5;
            PyObject *tmp_eval_globals_5;
            PyObject *tmp_eval_locals_5;
            PyObject *tmp_eval_compiled_5;
            CHECK_OBJECT(tmp_eval_call_5__source);
            tmp_eval_source_5 = tmp_eval_call_5__source;
            CHECK_OBJECT(tmp_eval_call_5__globals);
            tmp_eval_globals_5 = tmp_eval_call_5__globals;
            CHECK_OBJECT(tmp_eval_call_5__locals);
            tmp_eval_locals_5 = tmp_eval_call_5__locals;
            tmp_eval_compiled_5 = COMPILE_CODE(tmp_eval_source_5, const_str_angle_string, const_str_plain_eval, NULL, NULL, NULL);
            if (tmp_eval_compiled_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_5;
            }
            tmp_assign_source_26 = EVAL_CODE(tmp_eval_compiled_5, tmp_eval_globals_5, tmp_eval_locals_5);
            Py_DECREF(tmp_eval_compiled_5);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_5;
            }
            goto try_return_handler_5;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_eval_call_5__globals);
        Py_DECREF(tmp_eval_call_5__globals);
        tmp_eval_call_5__globals = NULL;

        CHECK_OBJECT(tmp_eval_call_5__locals);
        Py_DECREF(tmp_eval_call_5__locals);
        tmp_eval_call_5__locals = NULL;

        Py_XDECREF(tmp_eval_call_5__source);
        tmp_eval_call_5__source = NULL;

        goto outline_result_5;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_eval_call_5__globals);
        Py_DECREF(tmp_eval_call_5__globals);
        tmp_eval_call_5__globals = NULL;

        CHECK_OBJECT(tmp_eval_call_5__locals);
        Py_DECREF(tmp_eval_call_5__locals);
        tmp_eval_call_5__locals = NULL;

        Py_XDECREF(tmp_eval_call_5__source);
        tmp_eval_call_5__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_reload, tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_assign_source_31;
            tmp_assign_source_31 = (PyObject *)moduledict_gi$_compat;
            assert(tmp_eval_call_6__locals == NULL);
            Py_INCREF(tmp_assign_source_31);
            tmp_eval_call_6__locals = tmp_assign_source_31;
        }
        {
            PyObject *tmp_assign_source_32;
            tmp_assign_source_32 = (PyObject *)moduledict_gi$_compat;
            assert(tmp_eval_call_6__globals == NULL);
            Py_INCREF(tmp_assign_source_32);
            tmp_eval_call_6__globals = tmp_assign_source_32;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_instance_6;
            tmp_called_instance_6 = const_str_plain_xrange;
            frame_5f320125ed280f901d4051c6ddd2fed6->m_frame.f_lineno = 32;
            tmp_assign_source_33 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_strip, &PyTuple_GET_ITEM(const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple, 0));

            if (tmp_assign_source_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_6;
            }
            assert(tmp_eval_call_6__source == NULL);
            tmp_eval_call_6__source = tmp_assign_source_33;
        }
        {
            PyObject *tmp_eval_source_6;
            PyObject *tmp_eval_globals_6;
            PyObject *tmp_eval_locals_6;
            PyObject *tmp_eval_compiled_6;
            CHECK_OBJECT(tmp_eval_call_6__source);
            tmp_eval_source_6 = tmp_eval_call_6__source;
            CHECK_OBJECT(tmp_eval_call_6__globals);
            tmp_eval_globals_6 = tmp_eval_call_6__globals;
            CHECK_OBJECT(tmp_eval_call_6__locals);
            tmp_eval_locals_6 = tmp_eval_call_6__locals;
            tmp_eval_compiled_6 = COMPILE_CODE(tmp_eval_source_6, const_str_angle_string, const_str_plain_eval, NULL, NULL, NULL);
            if (tmp_eval_compiled_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_6;
            }
            tmp_assign_source_30 = EVAL_CODE(tmp_eval_compiled_6, tmp_eval_globals_6, tmp_eval_locals_6);
            Py_DECREF(tmp_eval_compiled_6);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_6;
            }
            goto try_return_handler_6;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(tmp_eval_call_6__globals);
        Py_DECREF(tmp_eval_call_6__globals);
        tmp_eval_call_6__globals = NULL;

        CHECK_OBJECT(tmp_eval_call_6__locals);
        Py_DECREF(tmp_eval_call_6__locals);
        tmp_eval_call_6__locals = NULL;

        Py_XDECREF(tmp_eval_call_6__source);
        tmp_eval_call_6__source = NULL;

        goto outline_result_6;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_eval_call_6__globals);
        Py_DECREF(tmp_eval_call_6__globals);
        tmp_eval_call_6__globals = NULL;

        CHECK_OBJECT(tmp_eval_call_6__locals);
        Py_DECREF(tmp_eval_call_6__locals);
        tmp_eval_call_6__locals = NULL;

        Py_XDECREF(tmp_eval_call_6__source);
        tmp_eval_call_6__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_assign_source_35;
            tmp_assign_source_35 = (PyObject *)moduledict_gi$_compat;
            assert(tmp_eval_call_7__locals == NULL);
            Py_INCREF(tmp_assign_source_35);
            tmp_eval_call_7__locals = tmp_assign_source_35;
        }
        {
            PyObject *tmp_assign_source_36;
            tmp_assign_source_36 = (PyObject *)moduledict_gi$_compat;
            assert(tmp_eval_call_7__globals == NULL);
            Py_INCREF(tmp_assign_source_36);
            tmp_eval_call_7__globals = tmp_assign_source_36;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_instance_7;
            tmp_called_instance_7 = const_str_plain_cmp;
            frame_5f320125ed280f901d4051c6ddd2fed6->m_frame.f_lineno = 33;
            tmp_assign_source_37 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain_strip, &PyTuple_GET_ITEM(const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple, 0));

            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_7;
            }
            assert(tmp_eval_call_7__source == NULL);
            tmp_eval_call_7__source = tmp_assign_source_37;
        }
        {
            PyObject *tmp_eval_source_7;
            PyObject *tmp_eval_globals_7;
            PyObject *tmp_eval_locals_7;
            PyObject *tmp_eval_compiled_7;
            CHECK_OBJECT(tmp_eval_call_7__source);
            tmp_eval_source_7 = tmp_eval_call_7__source;
            CHECK_OBJECT(tmp_eval_call_7__globals);
            tmp_eval_globals_7 = tmp_eval_call_7__globals;
            CHECK_OBJECT(tmp_eval_call_7__locals);
            tmp_eval_locals_7 = tmp_eval_call_7__locals;
            tmp_eval_compiled_7 = COMPILE_CODE(tmp_eval_source_7, const_str_angle_string, const_str_plain_eval, NULL, NULL, NULL);
            if (tmp_eval_compiled_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_7;
            }
            tmp_assign_source_34 = EVAL_CODE(tmp_eval_compiled_7, tmp_eval_globals_7, tmp_eval_locals_7);
            Py_DECREF(tmp_eval_compiled_7);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_7;
            }
            goto try_return_handler_7;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_eval_call_7__globals);
        Py_DECREF(tmp_eval_call_7__globals);
        tmp_eval_call_7__globals = NULL;

        CHECK_OBJECT(tmp_eval_call_7__locals);
        Py_DECREF(tmp_eval_call_7__locals);
        tmp_eval_call_7__locals = NULL;

        Py_XDECREF(tmp_eval_call_7__source);
        tmp_eval_call_7__source = NULL;

        goto outline_result_7;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_eval_call_7__globals);
        Py_DECREF(tmp_eval_call_7__globals);
        tmp_eval_call_7__globals = NULL;

        CHECK_OBJECT(tmp_eval_call_7__locals);
        Py_DECREF(tmp_eval_call_7__locals);
        tmp_eval_call_7__locals = NULL;

        Py_XDECREF(tmp_eval_call_7__source);
        tmp_eval_call_7__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_cmp, tmp_assign_source_34);
    }
    {
        PyObject *tmp_outline_return_value_1;
        {
            PyObject *tmp_assign_source_38;
            tmp_assign_source_38 = (PyObject *)moduledict_gi$_compat;
            assert(tmp_exec_call_1__locals == NULL);
            Py_INCREF(tmp_assign_source_38);
            tmp_exec_call_1__locals = tmp_assign_source_38;
        }
        {
            PyObject *tmp_assign_source_39;
            tmp_assign_source_39 = (PyObject *)moduledict_gi$_compat;
            assert(tmp_exec_call_1__globals == NULL);
            Py_INCREF(tmp_assign_source_39);
            tmp_exec_call_1__globals = tmp_assign_source_39;
        }
        // Tried code:
        {
            PyObject *tmp_eval_source_8;
            PyObject *tmp_eval_globals_8;
            PyObject *tmp_eval_locals_8;
            PyObject *tmp_eval_compiled_8;
            tmp_eval_source_8 = const_str_digest_58ff6ccfc11c8774c9d298b85af436df;
            CHECK_OBJECT(tmp_exec_call_1__globals);
            tmp_eval_globals_8 = tmp_exec_call_1__globals;
            CHECK_OBJECT(tmp_exec_call_1__locals);
            tmp_eval_locals_8 = tmp_exec_call_1__locals;
            tmp_eval_compiled_8 = COMPILE_CODE(tmp_eval_source_8, const_str_angle_string, const_str_plain_exec, NULL, NULL, NULL);
            if (tmp_eval_compiled_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto try_except_handler_8;
            }
            tmp_outline_return_value_1 = EVAL_CODE(tmp_eval_compiled_8, tmp_eval_globals_8, tmp_eval_locals_8);
            Py_DECREF(tmp_eval_compiled_8);
            if (tmp_outline_return_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto try_except_handler_8;
            }
            goto try_return_handler_8;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_exec_call_1__globals);
        Py_DECREF(tmp_exec_call_1__globals);
        tmp_exec_call_1__globals = NULL;

        CHECK_OBJECT(tmp_exec_call_1__locals);
        Py_DECREF(tmp_exec_call_1__locals);
        tmp_exec_call_1__locals = NULL;

        goto outline_result_8;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_exec_call_1__globals);
        Py_DECREF(tmp_exec_call_1__globals);
        tmp_exec_call_1__globals = NULL;

        CHECK_OBJECT(tmp_exec_call_1__locals);
        Py_DECREF(tmp_exec_call_1__locals);
        tmp_exec_call_1__locals = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_8:;
        Py_DECREF(tmp_outline_return_value_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = Py_True;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_PY3, tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_io;
        tmp_globals_name_4 = (PyObject *)moduledict_gi$_compat;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_StringIO_tuple;
        tmp_level_name_4 = const_int_0;
        frame_5f320125ed280f901d4051c6ddd2fed6->m_frame.f_lineno = 39;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_gi$_compat,
                const_str_plain_StringIO,
                const_int_0
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_StringIO);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_StringIO, tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_collections;
        tmp_globals_name_5 = (PyObject *)moduledict_gi$_compat;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_UserList_tuple;
        tmp_level_name_5 = const_int_0;
        frame_5f320125ed280f901d4051c6ddd2fed6->m_frame.f_lineno = 42;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_gi$_compat,
                const_str_plain_UserList,
                const_int_0
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_UserList);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_UserList, tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = (PyObject *)&PyLong_Type;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_long_, tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = const_tuple_type_int_tuple;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = const_tuple_type_str_tuple;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_string_types, tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = (PyObject *)&PyUnicode_Type;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_text_type, tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_importlib;
        tmp_globals_name_6 = (PyObject *)moduledict_gi$_compat;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_reload_tuple;
        tmp_level_name_6 = const_int_0;
        frame_5f320125ed280f901d4051c6ddd2fed6->m_frame.f_lineno = 50;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_gi$_compat,
                const_str_plain_reload,
                const_int_0
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_reload);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_reload, tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = (PyObject *)&PyRange_Type;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;


        tmp_assign_source_49 = MAKE_FUNCTION_gi$_compat$$$function_1_lambda();

        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_cmp, tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;


        tmp_assign_source_50 = MAKE_FUNCTION_gi$_compat$$$function_2_reraise();

        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_reraise, tmp_assign_source_50);
    }
    branch_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f320125ed280f901d4051c6ddd2fed6);
#endif
    popFrameStack();

    assertFrameObject(frame_5f320125ed280f901d4051c6ddd2fed6);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f320125ed280f901d4051c6ddd2fed6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5f320125ed280f901d4051c6ddd2fed6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f320125ed280f901d4051c6ddd2fed6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f320125ed280f901d4051c6ddd2fed6, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_gi$_compat;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
