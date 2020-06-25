/* Generated code for Python module 'dbus'
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

/* The "module_dbus" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dbus;
PyDictObject *moduledict_dbus;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_digest_62223e4c0fc7bcb5885146e43f1fb665;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_PEER_IFACE;
static PyObject *const_str_plain_get_default_main_loop;
extern PyObject *const_str_plain_Bus;
extern PyObject *const_str_plain_Array;
extern PyObject *const_str_plain_UInt64;
static PyObject *const_tuple_2c9d1c6863fdd586bfca32d97434ea23_tuple;
extern PyObject *const_str_plain_Dictionary;
static PyObject *const_tuple_str_plain_Interface_tuple;
extern PyObject *const_str_plain___docformat__;
extern PyObject *const_str_plain_Interface;
static PyObject *const_str_digest_984a814ffe01453f3c0bfa87da4d7872;
extern PyObject *const_str_plain_Double;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_MissingReplyHandlerException;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain_validate_error_name;
extern PyObject *const_tuple_str_plain_UTF8String_tuple;
extern PyObject *const_str_plain_BUS_DAEMON_PATH;
extern PyObject *const_str_plain__dbus_bindings;
extern PyObject *const_str_plain_UInt32;
extern PyObject *const_str_digest_3aa5bee4de9b0149ae46ffed8a38c6b4;
extern PyObject *const_str_plain_int;
static PyObject *const_list_str_digest_b895d74556fdad88c8ff3ce253d38a09_list;
extern PyObject *const_str_plain_INTROSPECTABLE_IFACE;
extern PyObject *const_str_plain_String;
extern PyObject *const_str_plain_UnknownMethodException;
extern PyObject *const_str_plain_NameExistsException;
extern PyObject *const_tuple_str_dot_tuple;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_str_plain___version___tuple;
extern PyObject *const_str_plain_validate_interface_name;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain_Struct;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_restructuredtext;
static PyObject *const_tuple_11fa090efaf7d01dd8418473997afcd0_tuple;
static PyObject *const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple;
static PyObject *const_str_digest_b895d74556fdad88c8ff3ce253d38a09;
extern PyObject *const_str_plain_Int16;
extern PyObject *const_str_plain_map;
static PyObject *const_tuple_a42d09975d91c391fbb7668332a8328b_tuple;
static PyObject *const_str_digest_d28ba98cdd0dea211f5951fcb5d3e7b2;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_IntrospectionParserException;
extern PyObject *const_str_plain_Byte;
extern PyObject *const_str_plain___version__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_DBusException;
extern PyObject *const_str_plain_BUS_DAEMON_NAME;
extern PyObject *const_str_plain_Int32;
extern PyObject *const_tuple_str_plain_is_py2_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_StarterBus;
extern PyObject *const_tuple_76ee81f3638eaf5a352e7276367934cb_tuple;
extern PyObject *const_str_plain_validate_member_name;
extern PyObject *const_str_plain_Boolean;
extern PyObject *const_str_plain_validate_object_path;
static PyObject *const_str_plain_set_default_main_loop;
static PyObject *const_str_digest_582c471f1acfae87654a91ed0da75e86;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_Signature;
extern PyObject *const_str_digest_8e2db9d493d0360a27a3bf19583a3201;
extern PyObject *const_str_plain_MissingErrorHandlerException;
extern PyObject *const_str_plain_validate_bus_name;
extern PyObject *const_str_plain_submodule_search_locations;
extern PyObject *const_str_plain_LOCAL_IFACE;
extern PyObject *const_str_plain_ByteArray;
extern PyObject *const_str_plain_UInt16;
static PyObject *const_list_c00e43f6c89f1bff4b3c8c15fedd441c_list;
extern PyObject *const_str_plain_types;
extern PyObject *const_str_plain_ValidationException;
static PyObject *const_str_digest_1abd3647207b34d013514bc0c6956d0b;
extern PyObject *const_str_plain_SessionBus;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_ObjectPath;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain_BUS_DAEMON_IFACE;
extern PyObject *const_str_plain_UTF8String;
extern PyObject *const_str_digest_e48610c30fffad33f2054d9dca0792b3;
extern PyObject *const_str_plain_Int64;
extern PyObject *const_str_plain_SystemBus;
static PyObject *const_str_plain_PROPERTIES_IFACE;
extern PyObject *const_str_plain_is_py2;
extern PyObject *const_str_plain_LOCAL_PATH;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_PEER_IFACE = UNSTREAM_STRING_ASCII(&constant_bin[ 25474 ], 10, 1);
    const_str_plain_get_default_main_loop = UNSTREAM_STRING_ASCII(&constant_bin[ 25484 ], 21, 1);
    const_tuple_2c9d1c6863fdd586bfca32d97434ea23_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_2c9d1c6863fdd586bfca32d97434ea23_tuple, 0, const_str_plain_get_default_main_loop); Py_INCREF(const_str_plain_get_default_main_loop);
    const_str_plain_set_default_main_loop = UNSTREAM_STRING_ASCII(&constant_bin[ 25505 ], 21, 1);
    PyTuple_SET_ITEM(const_tuple_2c9d1c6863fdd586bfca32d97434ea23_tuple, 1, const_str_plain_set_default_main_loop); Py_INCREF(const_str_plain_set_default_main_loop);
    PyTuple_SET_ITEM(const_tuple_2c9d1c6863fdd586bfca32d97434ea23_tuple, 2, const_str_plain_validate_bus_name); Py_INCREF(const_str_plain_validate_bus_name);
    PyTuple_SET_ITEM(const_tuple_2c9d1c6863fdd586bfca32d97434ea23_tuple, 3, const_str_plain_validate_error_name); Py_INCREF(const_str_plain_validate_error_name);
    PyTuple_SET_ITEM(const_tuple_2c9d1c6863fdd586bfca32d97434ea23_tuple, 4, const_str_plain_validate_interface_name); Py_INCREF(const_str_plain_validate_interface_name);
    PyTuple_SET_ITEM(const_tuple_2c9d1c6863fdd586bfca32d97434ea23_tuple, 5, const_str_plain_validate_member_name); Py_INCREF(const_str_plain_validate_member_name);
    PyTuple_SET_ITEM(const_tuple_2c9d1c6863fdd586bfca32d97434ea23_tuple, 6, const_str_plain_validate_object_path); Py_INCREF(const_str_plain_validate_object_path);
    const_tuple_str_plain_Interface_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_Interface_tuple, 0, const_str_plain_Interface); Py_INCREF(const_str_plain_Interface);
    const_str_digest_984a814ffe01453f3c0bfa87da4d7872 = UNSTREAM_STRING_ASCII(&constant_bin[ 25526 ], 13, 0);
    const_list_str_digest_b895d74556fdad88c8ff3ce253d38a09_list = PyList_New(1);
    const_str_digest_b895d74556fdad88c8ff3ce253d38a09 = UNSTREAM_STRING_ASCII(&constant_bin[ 25539 ], 39, 0);
    PyList_SET_ITEM(const_list_str_digest_b895d74556fdad88c8ff3ce253d38a09_list, 0, const_str_digest_b895d74556fdad88c8ff3ce253d38a09); Py_INCREF(const_str_digest_b895d74556fdad88c8ff3ce253d38a09);
    const_tuple_str_plain___version___tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain___version___tuple, 0, const_str_plain___version__); Py_INCREF(const_str_plain___version__);
    const_tuple_11fa090efaf7d01dd8418473997afcd0_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_11fa090efaf7d01dd8418473997afcd0_tuple, 0, const_str_plain_DBusException); Py_INCREF(const_str_plain_DBusException);
    PyTuple_SET_ITEM(const_tuple_11fa090efaf7d01dd8418473997afcd0_tuple, 1, const_str_plain_IntrospectionParserException); Py_INCREF(const_str_plain_IntrospectionParserException);
    PyTuple_SET_ITEM(const_tuple_11fa090efaf7d01dd8418473997afcd0_tuple, 2, const_str_plain_MissingErrorHandlerException); Py_INCREF(const_str_plain_MissingErrorHandlerException);
    PyTuple_SET_ITEM(const_tuple_11fa090efaf7d01dd8418473997afcd0_tuple, 3, const_str_plain_MissingReplyHandlerException); Py_INCREF(const_str_plain_MissingReplyHandlerException);
    PyTuple_SET_ITEM(const_tuple_11fa090efaf7d01dd8418473997afcd0_tuple, 4, const_str_plain_NameExistsException); Py_INCREF(const_str_plain_NameExistsException);
    PyTuple_SET_ITEM(const_tuple_11fa090efaf7d01dd8418473997afcd0_tuple, 5, const_str_plain_UnknownMethodException); Py_INCREF(const_str_plain_UnknownMethodException);
    PyTuple_SET_ITEM(const_tuple_11fa090efaf7d01dd8418473997afcd0_tuple, 6, const_str_plain_ValidationException); Py_INCREF(const_str_plain_ValidationException);
    const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple = PyTuple_New(16);
    PyTuple_SET_ITEM(const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple, 0, const_str_plain_Array); Py_INCREF(const_str_plain_Array);
    PyTuple_SET_ITEM(const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple, 1, const_str_plain_Boolean); Py_INCREF(const_str_plain_Boolean);
    PyTuple_SET_ITEM(const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple, 2, const_str_plain_Byte); Py_INCREF(const_str_plain_Byte);
    PyTuple_SET_ITEM(const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple, 3, const_str_plain_ByteArray); Py_INCREF(const_str_plain_ByteArray);
    PyTuple_SET_ITEM(const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple, 4, const_str_plain_Dictionary); Py_INCREF(const_str_plain_Dictionary);
    PyTuple_SET_ITEM(const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple, 5, const_str_plain_Double); Py_INCREF(const_str_plain_Double);
    PyTuple_SET_ITEM(const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple, 6, const_str_plain_Int16); Py_INCREF(const_str_plain_Int16);
    PyTuple_SET_ITEM(const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple, 7, const_str_plain_Int32); Py_INCREF(const_str_plain_Int32);
    PyTuple_SET_ITEM(const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple, 8, const_str_plain_Int64); Py_INCREF(const_str_plain_Int64);
    PyTuple_SET_ITEM(const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple, 9, const_str_plain_ObjectPath); Py_INCREF(const_str_plain_ObjectPath);
    PyTuple_SET_ITEM(const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple, 10, const_str_plain_Signature); Py_INCREF(const_str_plain_Signature);
    PyTuple_SET_ITEM(const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple, 11, const_str_plain_String); Py_INCREF(const_str_plain_String);
    PyTuple_SET_ITEM(const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple, 12, const_str_plain_Struct); Py_INCREF(const_str_plain_Struct);
    PyTuple_SET_ITEM(const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple, 13, const_str_plain_UInt16); Py_INCREF(const_str_plain_UInt16);
    PyTuple_SET_ITEM(const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple, 14, const_str_plain_UInt32); Py_INCREF(const_str_plain_UInt32);
    PyTuple_SET_ITEM(const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple, 15, const_str_plain_UInt64); Py_INCREF(const_str_plain_UInt64);
    const_tuple_a42d09975d91c391fbb7668332a8328b_tuple = PyTuple_New(8);
    PyTuple_SET_ITEM(const_tuple_a42d09975d91c391fbb7668332a8328b_tuple, 0, const_str_plain_BUS_DAEMON_IFACE); Py_INCREF(const_str_plain_BUS_DAEMON_IFACE);
    PyTuple_SET_ITEM(const_tuple_a42d09975d91c391fbb7668332a8328b_tuple, 1, const_str_plain_BUS_DAEMON_NAME); Py_INCREF(const_str_plain_BUS_DAEMON_NAME);
    PyTuple_SET_ITEM(const_tuple_a42d09975d91c391fbb7668332a8328b_tuple, 2, const_str_plain_BUS_DAEMON_PATH); Py_INCREF(const_str_plain_BUS_DAEMON_PATH);
    PyTuple_SET_ITEM(const_tuple_a42d09975d91c391fbb7668332a8328b_tuple, 3, const_str_plain_INTROSPECTABLE_IFACE); Py_INCREF(const_str_plain_INTROSPECTABLE_IFACE);
    PyTuple_SET_ITEM(const_tuple_a42d09975d91c391fbb7668332a8328b_tuple, 4, const_str_plain_LOCAL_IFACE); Py_INCREF(const_str_plain_LOCAL_IFACE);
    PyTuple_SET_ITEM(const_tuple_a42d09975d91c391fbb7668332a8328b_tuple, 5, const_str_plain_LOCAL_PATH); Py_INCREF(const_str_plain_LOCAL_PATH);
    PyTuple_SET_ITEM(const_tuple_a42d09975d91c391fbb7668332a8328b_tuple, 6, const_str_plain_PEER_IFACE); Py_INCREF(const_str_plain_PEER_IFACE);
    const_str_plain_PROPERTIES_IFACE = UNSTREAM_STRING_ASCII(&constant_bin[ 25578 ], 16, 1);
    PyTuple_SET_ITEM(const_tuple_a42d09975d91c391fbb7668332a8328b_tuple, 7, const_str_plain_PROPERTIES_IFACE); Py_INCREF(const_str_plain_PROPERTIES_IFACE);
    const_str_digest_d28ba98cdd0dea211f5951fcb5d3e7b2 = UNSTREAM_STRING_ASCII(&constant_bin[ 25594 ], 119, 0);
    const_str_digest_582c471f1acfae87654a91ed0da75e86 = UNSTREAM_STRING_ASCII(&constant_bin[ 25713 ], 51, 0);
    const_list_c00e43f6c89f1bff4b3c8c15fedd441c_list = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 25764 ], 677);
    const_str_digest_1abd3647207b34d013514bc0c6956d0b = UNSTREAM_STRING_ASCII(&constant_bin[ 26441 ], 10, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dbus(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_77ac8958c21b16ea7fff03c3c7f6e802;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_582c471f1acfae87654a91ed0da75e86;
    codeobj_77ac8958c21b16ea7fff03c3c7f6e802 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_984a814ffe01453f3c0bfa87da4d7872, const_tuple_empty, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


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

function_impl_code functable_dbus[] = {

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

    function_impl_code *current = functable_dbus;
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

    if (offset > sizeof(functable_dbus) || offset < 0) {
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
        functable_dbus[offset],
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
        module_dbus,
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
PyObject *modulecode_dbus(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_dbus = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_dbus;
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
    PRINT_STRING("dbus: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("dbus: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("dbus: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initdbus\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_dbus = MODULE_DICT(module_dbus);

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
        moduledict_dbus,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_dbus,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_dbus,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_dbus,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_dbus,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_dbus);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_dbus);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    struct Nuitka_FrameObject *frame_77ac8958c21b16ea7fff03c3c7f6e802;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_key;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_d28ba98cdd0dea211f5951fcb5d3e7b2;
        UPDATE_STRING_DICT0(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_582c471f1acfae87654a91ed0da75e86;
        UPDATE_STRING_DICT0(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY(const_list_str_digest_b895d74556fdad88c8ff3ce253d38a09_list);
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
    }
    // Frame without reuse.
    frame_77ac8958c21b16ea7fff03c3c7f6e802 = MAKE_MODULE_FRAME(codeobj_77ac8958c21b16ea7fff03c3c7f6e802, module_dbus);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_77ac8958c21b16ea7fff03c3c7f6e802);
    assert(Py_REFCNT(frame_77ac8958c21b16ea7fff03c3c7f6e802) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_dictset_value = Nuitka_Loader_New(module_entry);
        tmp_dictset_dict = PySys_GetObject((char *)"path_importer_cache");
        if (tmp_dictset_dict == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___path__);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_expression_name_1 = tmp_mvar_value_1;
        tmp_subscript_name_1 = const_int_0;
        tmp_dictset_key = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_1 = const_str_digest_582c471f1acfae87654a91ed0da75e86;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_2);
        tmp_assattr_target_1 = tmp_mvar_value_2;
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
        PyObject *tmp_mvar_value_3;
        tmp_assattr_name_2 = Py_True;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_3);
        tmp_assattr_target_2 = tmp_mvar_value_3;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_has_location, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___path__);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 827 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_3 = tmp_mvar_value_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_5);
        tmp_assattr_target_3 = tmp_mvar_value_5;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_submodule_search_locations, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = LIST_COPY(const_list_c00e43f6c89f1bff4b3c8c15fedd441c_list);
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_3aa5bee4de9b0149ae46ffed8a38c6b4;
        tmp_globals_name_1 = (PyObject *)moduledict_dbus;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_is_py2_tuple;
        tmp_level_name_1 = const_int_0;
        frame_77ac8958c21b16ea7fff03c3c7f6e802->m_frame.f_lineno = 65;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_dbus,
                const_str_plain_is_py2,
                const_int_0
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_is_py2);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_is_py2, tmp_assign_source_6);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_6;
        int tmp_truth_name_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_is_py2);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py2);
        }

        CHECK_OBJECT(tmp_mvar_value_6);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_6);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___all__);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___all__);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 857 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_7;
        frame_77ac8958c21b16ea7fff03c3c7f6e802->m_frame.f_lineno = 67;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_append, &PyTuple_GET_ITEM(const_tuple_str_plain_UTF8String_tuple, 0));

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_str_plain_restructuredtext;
        UPDATE_STRING_DICT0(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___docformat__, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_e48610c30fffad33f2054d9dca0792b3;
        tmp_globals_name_2 = (PyObject *)moduledict_dbus;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_77ac8958c21b16ea7fff03c3c7f6e802->m_frame.f_lineno = 72;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_dbus,
                const_str_plain_exceptions,
                Py_None
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_exceptions);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_exceptions, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_1abd3647207b34d013514bc0c6956d0b;
        tmp_globals_name_3 = (PyObject *)moduledict_dbus;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_77ac8958c21b16ea7fff03c3c7f6e802->m_frame.f_lineno = 73;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_dbus,
                const_str_plain_types,
                Py_None
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_types);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain__dbus_bindings;
        tmp_globals_name_4 = (PyObject *)moduledict_dbus;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain___version___tuple;
        tmp_level_name_4 = const_int_0;
        frame_77ac8958c21b16ea7fff03c3c7f6e802->m_frame.f_lineno = 75;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_dbus,
                const_str_plain___version__,
                const_int_0
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain___version__);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_8;
        tmp_called_name_1 = (PyObject *)&PyMap_Type;
        tmp_args_element_name_1 = (PyObject *)&PyLong_Type;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_dbus, (Nuitka_StringObject *)const_str_plain___version__);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___version__);
        }

        CHECK_OBJECT(tmp_mvar_value_8);
        tmp_called_instance_2 = tmp_mvar_value_8;
        frame_77ac8958c21b16ea7fff03c3c7f6e802->m_frame.f_lineno = 76;
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_split, &PyTuple_GET_ITEM(const_tuple_str_dot_tuple, 0));

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        frame_77ac8958c21b16ea7fff03c3c7f6e802->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_tuple_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        if (tmp_tuple_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_version, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain__dbus_bindings;
        tmp_globals_name_5 = (PyObject *)moduledict_dbus;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_2c9d1c6863fdd586bfca32d97434ea23_tuple;
        tmp_level_name_5 = const_int_0;
        frame_77ac8958c21b16ea7fff03c3c7f6e802->m_frame.f_lineno = 78;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_dbus,
                const_str_plain_get_default_main_loop,
                const_int_0
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_get_default_main_loop);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_get_default_main_loop, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_dbus,
                const_str_plain_set_default_main_loop,
                const_int_0
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_set_default_main_loop);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_set_default_main_loop, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_dbus,
                const_str_plain_validate_bus_name,
                const_int_0
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_validate_bus_name);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_validate_bus_name, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_dbus,
                const_str_plain_validate_error_name,
                const_int_0
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_validate_error_name);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_validate_error_name, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_dbus,
                const_str_plain_validate_interface_name,
                const_int_0
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_validate_interface_name);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_validate_interface_name, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_dbus,
                const_str_plain_validate_member_name,
                const_int_0
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_validate_member_name);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_validate_member_name, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_dbus,
                const_str_plain_validate_object_path,
                const_int_0
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain_validate_object_path);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_validate_object_path, tmp_assign_source_19);
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain__dbus_bindings;
        tmp_globals_name_6 = (PyObject *)moduledict_dbus;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_a42d09975d91c391fbb7668332a8328b_tuple;
        tmp_level_name_6 = const_int_0;
        frame_77ac8958c21b16ea7fff03c3c7f6e802->m_frame.f_lineno = 82;
        tmp_assign_source_20 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_dbus,
                const_str_plain_BUS_DAEMON_IFACE,
                const_int_0
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_12, const_str_plain_BUS_DAEMON_IFACE);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_dbus,
                const_str_plain_BUS_DAEMON_NAME,
                const_int_0
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_13, const_str_plain_BUS_DAEMON_NAME);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME, tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_dbus,
                const_str_plain_BUS_DAEMON_PATH,
                const_int_0
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_14, const_str_plain_BUS_DAEMON_PATH);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH, tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_dbus,
                const_str_plain_INTROSPECTABLE_IFACE,
                const_int_0
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_15, const_str_plain_INTROSPECTABLE_IFACE);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_INTROSPECTABLE_IFACE, tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_dbus,
                const_str_plain_LOCAL_IFACE,
                const_int_0
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_16, const_str_plain_LOCAL_IFACE);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_LOCAL_IFACE, tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_17 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_dbus,
                const_str_plain_LOCAL_PATH,
                const_int_0
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_17, const_str_plain_LOCAL_PATH);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_LOCAL_PATH, tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_18 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_dbus,
                const_str_plain_PEER_IFACE,
                const_int_0
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_18, const_str_plain_PEER_IFACE);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_PEER_IFACE, tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_19 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_dbus,
                const_str_plain_PROPERTIES_IFACE,
                const_int_0
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_19, const_str_plain_PROPERTIES_IFACE);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_PROPERTIES_IFACE, tmp_assign_source_28);
    }
    goto try_end_2;
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_e48610c30fffad33f2054d9dca0792b3;
        tmp_globals_name_7 = (PyObject *)moduledict_dbus;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_11fa090efaf7d01dd8418473997afcd0_tuple;
        tmp_level_name_7 = const_int_0;
        frame_77ac8958c21b16ea7fff03c3c7f6e802->m_frame.f_lineno = 86;
        tmp_assign_source_29 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_20 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_dbus,
                const_str_plain_DBusException,
                const_int_0
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_20, const_str_plain_DBusException);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_DBusException, tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_21 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_dbus,
                const_str_plain_IntrospectionParserException,
                const_int_0
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_21, const_str_plain_IntrospectionParserException);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_IntrospectionParserException, tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_22 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_dbus,
                const_str_plain_MissingErrorHandlerException,
                const_int_0
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_22, const_str_plain_MissingErrorHandlerException);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_MissingErrorHandlerException, tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_23 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_dbus,
                const_str_plain_MissingReplyHandlerException,
                const_int_0
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_23, const_str_plain_MissingReplyHandlerException);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_MissingReplyHandlerException, tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_24 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_dbus,
                const_str_plain_NameExistsException,
                const_int_0
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_24, const_str_plain_NameExistsException);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_NameExistsException, tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_25 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_dbus,
                const_str_plain_UnknownMethodException,
                const_int_0
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_25, const_str_plain_UnknownMethodException);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_UnknownMethodException, tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_26 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_dbus,
                const_str_plain_ValidationException,
                const_int_0
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_26, const_str_plain_ValidationException);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_ValidationException, tmp_assign_source_36);
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;

    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain__dbus_bindings;
        tmp_globals_name_8 = (PyObject *)moduledict_dbus;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_e5a705a12efe2e8a6f33d44dc7ceea11_tuple;
        tmp_level_name_8 = const_int_0;
        frame_77ac8958c21b16ea7fff03c3c7f6e802->m_frame.f_lineno = 90;
        tmp_assign_source_37 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_37;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_27 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_dbus,
                const_str_plain_Array,
                const_int_0
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME(tmp_import_name_from_27, const_str_plain_Array);
        }

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_Array, tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_28 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_dbus,
                const_str_plain_Boolean,
                const_int_0
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME(tmp_import_name_from_28, const_str_plain_Boolean);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_Boolean, tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_29 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_dbus,
                const_str_plain_Byte,
                const_int_0
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_29, const_str_plain_Byte);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_Byte, tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_30 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_dbus,
                const_str_plain_ByteArray,
                const_int_0
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME(tmp_import_name_from_30, const_str_plain_ByteArray);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_ByteArray, tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_31 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_dbus,
                const_str_plain_Dictionary,
                const_int_0
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME(tmp_import_name_from_31, const_str_plain_Dictionary);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_Dictionary, tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_32 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_dbus,
                const_str_plain_Double,
                const_int_0
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME(tmp_import_name_from_32, const_str_plain_Double);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_Double, tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_33 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_dbus,
                const_str_plain_Int16,
                const_int_0
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME(tmp_import_name_from_33, const_str_plain_Int16);
        }

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_Int16, tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_34 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_dbus,
                const_str_plain_Int32,
                const_int_0
            );
        } else {
            tmp_assign_source_45 = IMPORT_NAME(tmp_import_name_from_34, const_str_plain_Int32);
        }

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_Int32, tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_35;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_35 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_dbus,
                const_str_plain_Int64,
                const_int_0
            );
        } else {
            tmp_assign_source_46 = IMPORT_NAME(tmp_import_name_from_35, const_str_plain_Int64);
        }

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_Int64, tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_36;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_36 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_dbus,
                const_str_plain_ObjectPath,
                const_int_0
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME(tmp_import_name_from_36, const_str_plain_ObjectPath);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_ObjectPath, tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_37;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_37 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_37,
                (PyObject *)moduledict_dbus,
                const_str_plain_Signature,
                const_int_0
            );
        } else {
            tmp_assign_source_48 = IMPORT_NAME(tmp_import_name_from_37, const_str_plain_Signature);
        }

        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_Signature, tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_38;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_38 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_38,
                (PyObject *)moduledict_dbus,
                const_str_plain_String,
                const_int_0
            );
        } else {
            tmp_assign_source_49 = IMPORT_NAME(tmp_import_name_from_38, const_str_plain_String);
        }

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_String, tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_39;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_39 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_39,
                (PyObject *)moduledict_dbus,
                const_str_plain_Struct,
                const_int_0
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME(tmp_import_name_from_39, const_str_plain_Struct);
        }

        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_Struct, tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_40;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_40 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_40,
                (PyObject *)moduledict_dbus,
                const_str_plain_UInt16,
                const_int_0
            );
        } else {
            tmp_assign_source_51 = IMPORT_NAME(tmp_import_name_from_40, const_str_plain_UInt16);
        }

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_UInt16, tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_41;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_41 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_41,
                (PyObject *)moduledict_dbus,
                const_str_plain_UInt32,
                const_int_0
            );
        } else {
            tmp_assign_source_52 = IMPORT_NAME(tmp_import_name_from_41, const_str_plain_UInt32);
        }

        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_UInt32, tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_42;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_42 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_42)) {
            tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_42,
                (PyObject *)moduledict_dbus,
                const_str_plain_UInt64,
                const_int_0
            );
        } else {
            tmp_assign_source_53 = IMPORT_NAME(tmp_import_name_from_42, const_str_plain_UInt64);
        }

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_UInt64, tmp_assign_source_53);
    }
    goto try_end_4;
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

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_mvar_value_9;
        int tmp_truth_name_2;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_is_py2);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py2);
        }

        if (tmp_mvar_value_9 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 886 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_9);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_43;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain__dbus_bindings;
        tmp_globals_name_9 = (PyObject *)moduledict_dbus;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_UTF8String_tuple;
        tmp_level_name_9 = const_int_0;
        frame_77ac8958c21b16ea7fff03c3c7f6e802->m_frame.f_lineno = 95;
        tmp_import_name_from_43 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_import_name_from_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_43)) {
            tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_43,
                (PyObject *)moduledict_dbus,
                const_str_plain_UTF8String,
                const_int_0
            );
        } else {
            tmp_assign_source_54 = IMPORT_NAME(tmp_import_name_from_43, const_str_plain_UTF8String);
        }

        Py_DECREF(tmp_import_name_from_43);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_UTF8String, tmp_assign_source_54);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_digest_62223e4c0fc7bcb5885146e43f1fb665;
        tmp_globals_name_10 = (PyObject *)moduledict_dbus;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_76ee81f3638eaf5a352e7276367934cb_tuple;
        tmp_level_name_10 = const_int_0;
        frame_77ac8958c21b16ea7fff03c3c7f6e802->m_frame.f_lineno = 97;
        tmp_assign_source_55 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_55;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_44;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_44 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_44)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_44,
                (PyObject *)moduledict_dbus,
                const_str_plain_Bus,
                const_int_0
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME(tmp_import_name_from_44, const_str_plain_Bus);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_Bus, tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_45;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_45 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_45)) {
            tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_45,
                (PyObject *)moduledict_dbus,
                const_str_plain_SystemBus,
                const_int_0
            );
        } else {
            tmp_assign_source_57 = IMPORT_NAME(tmp_import_name_from_45, const_str_plain_SystemBus);
        }

        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_SystemBus, tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_46;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_46 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_46)) {
            tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_46,
                (PyObject *)moduledict_dbus,
                const_str_plain_SessionBus,
                const_int_0
            );
        } else {
            tmp_assign_source_58 = IMPORT_NAME(tmp_import_name_from_46, const_str_plain_SessionBus);
        }

        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_SessionBus, tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_47;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_47 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_47)) {
            tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_47,
                (PyObject *)moduledict_dbus,
                const_str_plain_StarterBus,
                const_int_0
            );
        } else {
            tmp_assign_source_59 = IMPORT_NAME(tmp_import_name_from_47, const_str_plain_StarterBus);
        }

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_StarterBus, tmp_assign_source_59);
    }
    goto try_end_5;
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

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;

    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_48;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_digest_8e2db9d493d0360a27a3bf19583a3201;
        tmp_globals_name_11 = (PyObject *)moduledict_dbus;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_str_plain_Interface_tuple;
        tmp_level_name_11 = const_int_0;
        frame_77ac8958c21b16ea7fff03c3c7f6e802->m_frame.f_lineno = 98;
        tmp_import_name_from_48 = IMPORT_MODULE5(tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11);
        if (tmp_import_name_from_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_48)) {
            tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_48,
                (PyObject *)moduledict_dbus,
                const_str_plain_Interface,
                const_int_0
            );
        } else {
            tmp_assign_source_60 = IMPORT_NAME(tmp_import_name_from_48, const_str_plain_Interface);
        }

        Py_DECREF(tmp_import_name_from_48);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus, (Nuitka_StringObject *)const_str_plain_Interface, tmp_assign_source_60);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_77ac8958c21b16ea7fff03c3c7f6e802);
#endif
    popFrameStack();

    assertFrameObject(frame_77ac8958c21b16ea7fff03c3c7f6e802);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_77ac8958c21b16ea7fff03c3c7f6e802);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_77ac8958c21b16ea7fff03c3c7f6e802, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_77ac8958c21b16ea7fff03c3c7f6e802->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_77ac8958c21b16ea7fff03c3c7f6e802, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_dbus;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
