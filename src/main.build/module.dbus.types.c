/* Generated code for Python module 'dbus.types'
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

/* The "module_dbus$types" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dbus$types;
PyDictObject *moduledict_dbus$types;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_Signature;
extern PyObject *const_str_plain_Struct;
static PyObject *const_str_digest_bee3442881305db322ec1ee71f49c522;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain_UTF8String_tuple;
extern PyObject *const_str_plain_Int16;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_Byte;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain__dbus_bindings;
extern PyObject *const_str_plain_UInt32;
static PyObject *const_str_plain_UnixFd;
extern PyObject *const_str_digest_3aa5bee4de9b0149ae46ffed8a38c6b4;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ByteArray;
extern PyObject *const_str_plain_UInt16;
static PyObject *const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple;
extern PyObject *const_str_plain_String;
static PyObject *const_list_63dc2697da2db86ddf6a017a29605028_list;
extern PyObject *const_str_plain_Int32;
extern PyObject *const_tuple_str_plain_is_py2_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_Array;
extern PyObject *const_str_plain_Boolean;
extern PyObject *const_str_plain_UInt64;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_5fd3871d41b205ced72dcdbe362d3f11;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_ObjectPath;
extern PyObject *const_str_plain_UTF8String;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_Dictionary;
extern PyObject *const_str_plain_Int64;
extern PyObject *const_str_plain_is_py2;
extern PyObject *const_str_plain_Double;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_bee3442881305db322ec1ee71f49c522 = UNSTREAM_STRING_ASCII(&constant_bin[ 57665 ], 19, 0);
    const_str_plain_UnixFd = UNSTREAM_STRING_ASCII(&constant_bin[ 57684 ], 6, 1);
    const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple = PyTuple_New(17);
    PyTuple_SET_ITEM(const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple, 0, const_str_plain_Array); Py_INCREF(const_str_plain_Array);
    PyTuple_SET_ITEM(const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple, 1, const_str_plain_Boolean); Py_INCREF(const_str_plain_Boolean);
    PyTuple_SET_ITEM(const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple, 2, const_str_plain_Byte); Py_INCREF(const_str_plain_Byte);
    PyTuple_SET_ITEM(const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple, 3, const_str_plain_ByteArray); Py_INCREF(const_str_plain_ByteArray);
    PyTuple_SET_ITEM(const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple, 4, const_str_plain_Dictionary); Py_INCREF(const_str_plain_Dictionary);
    PyTuple_SET_ITEM(const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple, 5, const_str_plain_Double); Py_INCREF(const_str_plain_Double);
    PyTuple_SET_ITEM(const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple, 6, const_str_plain_Int16); Py_INCREF(const_str_plain_Int16);
    PyTuple_SET_ITEM(const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple, 7, const_str_plain_Int32); Py_INCREF(const_str_plain_Int32);
    PyTuple_SET_ITEM(const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple, 8, const_str_plain_Int64); Py_INCREF(const_str_plain_Int64);
    PyTuple_SET_ITEM(const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple, 9, const_str_plain_ObjectPath); Py_INCREF(const_str_plain_ObjectPath);
    PyTuple_SET_ITEM(const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple, 10, const_str_plain_Signature); Py_INCREF(const_str_plain_Signature);
    PyTuple_SET_ITEM(const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple, 11, const_str_plain_String); Py_INCREF(const_str_plain_String);
    PyTuple_SET_ITEM(const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple, 12, const_str_plain_Struct); Py_INCREF(const_str_plain_Struct);
    PyTuple_SET_ITEM(const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple, 13, const_str_plain_UInt16); Py_INCREF(const_str_plain_UInt16);
    PyTuple_SET_ITEM(const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple, 14, const_str_plain_UInt32); Py_INCREF(const_str_plain_UInt32);
    PyTuple_SET_ITEM(const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple, 15, const_str_plain_UInt64); Py_INCREF(const_str_plain_UInt64);
    PyTuple_SET_ITEM(const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple, 16, const_str_plain_UnixFd); Py_INCREF(const_str_plain_UnixFd);
    const_list_63dc2697da2db86ddf6a017a29605028_list = PyList_New(17);
    PyList_SET_ITEM(const_list_63dc2697da2db86ddf6a017a29605028_list, 0, const_str_plain_ObjectPath); Py_INCREF(const_str_plain_ObjectPath);
    PyList_SET_ITEM(const_list_63dc2697da2db86ddf6a017a29605028_list, 1, const_str_plain_ByteArray); Py_INCREF(const_str_plain_ByteArray);
    PyList_SET_ITEM(const_list_63dc2697da2db86ddf6a017a29605028_list, 2, const_str_plain_Signature); Py_INCREF(const_str_plain_Signature);
    PyList_SET_ITEM(const_list_63dc2697da2db86ddf6a017a29605028_list, 3, const_str_plain_Byte); Py_INCREF(const_str_plain_Byte);
    PyList_SET_ITEM(const_list_63dc2697da2db86ddf6a017a29605028_list, 4, const_str_plain_Boolean); Py_INCREF(const_str_plain_Boolean);
    PyList_SET_ITEM(const_list_63dc2697da2db86ddf6a017a29605028_list, 5, const_str_plain_Int16); Py_INCREF(const_str_plain_Int16);
    PyList_SET_ITEM(const_list_63dc2697da2db86ddf6a017a29605028_list, 6, const_str_plain_UInt16); Py_INCREF(const_str_plain_UInt16);
    PyList_SET_ITEM(const_list_63dc2697da2db86ddf6a017a29605028_list, 7, const_str_plain_Int32); Py_INCREF(const_str_plain_Int32);
    PyList_SET_ITEM(const_list_63dc2697da2db86ddf6a017a29605028_list, 8, const_str_plain_UInt32); Py_INCREF(const_str_plain_UInt32);
    PyList_SET_ITEM(const_list_63dc2697da2db86ddf6a017a29605028_list, 9, const_str_plain_Int64); Py_INCREF(const_str_plain_Int64);
    PyList_SET_ITEM(const_list_63dc2697da2db86ddf6a017a29605028_list, 10, const_str_plain_UInt64); Py_INCREF(const_str_plain_UInt64);
    PyList_SET_ITEM(const_list_63dc2697da2db86ddf6a017a29605028_list, 11, const_str_plain_Double); Py_INCREF(const_str_plain_Double);
    PyList_SET_ITEM(const_list_63dc2697da2db86ddf6a017a29605028_list, 12, const_str_plain_String); Py_INCREF(const_str_plain_String);
    PyList_SET_ITEM(const_list_63dc2697da2db86ddf6a017a29605028_list, 13, const_str_plain_Array); Py_INCREF(const_str_plain_Array);
    PyList_SET_ITEM(const_list_63dc2697da2db86ddf6a017a29605028_list, 14, const_str_plain_Struct); Py_INCREF(const_str_plain_Struct);
    PyList_SET_ITEM(const_list_63dc2697da2db86ddf6a017a29605028_list, 15, const_str_plain_Dictionary); Py_INCREF(const_str_plain_Dictionary);
    PyList_SET_ITEM(const_list_63dc2697da2db86ddf6a017a29605028_list, 16, const_str_plain_UnixFd); Py_INCREF(const_str_plain_UnixFd);
    const_str_digest_5fd3871d41b205ced72dcdbe362d3f11 = UNSTREAM_STRING_ASCII(&constant_bin[ 57690 ], 48, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dbus$types(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_153cae433dcc4fe9130f3cd71b424baa;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_5fd3871d41b205ced72dcdbe362d3f11;
    codeobj_153cae433dcc4fe9130f3cd71b424baa = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_bee3442881305db322ec1ee71f49c522, const_tuple_empty, 0, 0, 0);
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

function_impl_code functable_dbus$types[] = {

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

    function_impl_code *current = functable_dbus$types;
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

    if (offset > sizeof(functable_dbus$types) || offset < 0) {
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
        functable_dbus$types[offset],
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
        module_dbus$types,
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
PyObject *modulecode_dbus$types(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_dbus$types = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_dbus$types;
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
    PRINT_STRING("dbus.types: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("dbus.types: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("dbus.types: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initdbus$types\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_dbus$types = MODULE_DICT(module_dbus$types);

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
        moduledict_dbus$types,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_dbus$types,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_dbus$types,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_dbus$types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_dbus$types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_dbus$types);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_dbus$types);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_153cae433dcc4fe9130f3cd71b424baa;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_5fd3871d41b205ced72dcdbe362d3f11;
        UPDATE_STRING_DICT0(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_153cae433dcc4fe9130f3cd71b424baa = MAKE_MODULE_FRAME(codeobj_153cae433dcc4fe9130f3cd71b424baa, module_dbus$types);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_153cae433dcc4fe9130f3cd71b424baa);
    assert(Py_REFCNT(frame_153cae433dcc4fe9130f3cd71b424baa) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_5fd3871d41b205ced72dcdbe362d3f11;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY(const_list_63dc2697da2db86ddf6a017a29605028_list);
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain__dbus_bindings;
        tmp_globals_name_1 = (PyObject *)moduledict_dbus$types;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_cde4d3ca5dc75371f7c0953ed8a8aecd_tuple;
        tmp_level_name_1 = const_int_0;
        frame_153cae433dcc4fe9130f3cd71b424baa->m_frame.f_lineno = 8;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_Array,
                const_int_0
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_Array);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_Array, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_Boolean,
                const_int_0
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_Boolean);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_Boolean, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_Byte,
                const_int_0
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_Byte);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_Byte, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_ByteArray,
                const_int_0
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_ByteArray);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_ByteArray, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_Dictionary,
                const_int_0
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_Dictionary);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_Dictionary, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_Double,
                const_int_0
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_Double);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_Double, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_Int16,
                const_int_0
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_Int16);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_Int16, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_Int32,
                const_int_0
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_Int32);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_Int32, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_Int64,
                const_int_0
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_Int64);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_Int64, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_ObjectPath,
                const_int_0
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_ObjectPath);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_ObjectPath, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_Signature,
                const_int_0
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain_Signature);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_Signature, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_12 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_String,
                const_int_0
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_12, const_str_plain_String);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_String, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_13 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_Struct,
                const_int_0
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_13, const_str_plain_Struct);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_Struct, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_14 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_UInt16,
                const_int_0
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_14, const_str_plain_UInt16);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_UInt16, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_15 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_UInt32,
                const_int_0
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_15, const_str_plain_UInt32);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_UInt32, tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_16 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_UInt64,
                const_int_0
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_16, const_str_plain_UInt64);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_UInt64, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_17 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_UnixFd,
                const_int_0
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_17, const_str_plain_UnixFd);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_UnixFd, tmp_assign_source_22);
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
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_3aa5bee4de9b0149ae46ffed8a38c6b4;
        tmp_globals_name_2 = (PyObject *)moduledict_dbus$types;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_is_py2_tuple;
        tmp_level_name_2 = const_int_0;
        frame_153cae433dcc4fe9130f3cd71b424baa->m_frame.f_lineno = 13;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_is_py2,
                const_int_0
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_18, const_str_plain_is_py2);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_is_py2, tmp_assign_source_23);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_3;
        int tmp_truth_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_is_py2);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py2);
        }

        CHECK_OBJECT(tmp_mvar_value_3);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_3);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain__dbus_bindings;
        tmp_globals_name_3 = (PyObject *)moduledict_dbus$types;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_UTF8String_tuple;
        tmp_level_name_3 = const_int_0;
        frame_153cae433dcc4fe9130f3cd71b424baa->m_frame.f_lineno = 15;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_dbus$types,
                const_str_plain_UTF8String,
                const_int_0
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_19, const_str_plain_UTF8String);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain_UTF8String, tmp_assign_source_24);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_dbus$types, (Nuitka_StringObject *)const_str_plain___all__);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___all__);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1034 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_4;
        frame_153cae433dcc4fe9130f3cd71b424baa->m_frame.f_lineno = 16;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_append, &PyTuple_GET_ITEM(const_tuple_str_plain_UTF8String_tuple, 0));

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_153cae433dcc4fe9130f3cd71b424baa);
#endif
    popFrameStack();

    assertFrameObject(frame_153cae433dcc4fe9130f3cd71b424baa);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_153cae433dcc4fe9130f3cd71b424baa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_153cae433dcc4fe9130f3cd71b424baa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_153cae433dcc4fe9130f3cd71b424baa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_153cae433dcc4fe9130f3cd71b424baa, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_dbus$types;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
