/* Generated code for Python module 'dbus.mainloop'
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

/* The "module_dbus$mainloop" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dbus$mainloop;
PyDictObject *moduledict_dbus$mainloop;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_NULL_MAIN_LOOP;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_submodule_search_locations;
extern PyObject *const_str_plain_glib;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_NativeMainLoop;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain__dbus_bindings;
extern PyObject *const_int_0;
static PyObject *const_tuple_e491f74580763f43a808aa077c589175_tuple;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_c59796eb34d0f09dd9599f3c4578166b;
static PyObject *const_str_plain_WATCH_WRITABLE;
static PyObject *const_str_digest_ca885d114683883351fa5ece16bd8151;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_WATCH_HANGUP;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_WATCH_READABLE;
static PyObject *const_str_digest_ae83678fcc640e41b011732561bab8a1;
static PyObject *const_str_digest_2f41de8910a532e6dd306f7ed285a991;
static PyObject *const_list_str_digest_ae83678fcc640e41b011732561bab8a1_list;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_WATCH_ERROR;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_NULL_MAIN_LOOP = UNSTREAM_STRING_ASCII(&constant_bin[ 47852 ], 14, 1);
    const_str_plain_NativeMainLoop = UNSTREAM_STRING_ASCII(&constant_bin[ 28120 ], 14, 1);
    const_tuple_e491f74580763f43a808aa077c589175_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_e491f74580763f43a808aa077c589175_tuple, 0, const_str_plain_NativeMainLoop); Py_INCREF(const_str_plain_NativeMainLoop);
    const_str_plain_WATCH_READABLE = UNSTREAM_STRING_ASCII(&constant_bin[ 47866 ], 14, 1);
    PyTuple_SET_ITEM(const_tuple_e491f74580763f43a808aa077c589175_tuple, 1, const_str_plain_WATCH_READABLE); Py_INCREF(const_str_plain_WATCH_READABLE);
    const_str_plain_WATCH_WRITABLE = UNSTREAM_STRING_ASCII(&constant_bin[ 47880 ], 14, 1);
    PyTuple_SET_ITEM(const_tuple_e491f74580763f43a808aa077c589175_tuple, 2, const_str_plain_WATCH_WRITABLE); Py_INCREF(const_str_plain_WATCH_WRITABLE);
    const_str_plain_WATCH_HANGUP = UNSTREAM_STRING_ASCII(&constant_bin[ 47894 ], 12, 1);
    PyTuple_SET_ITEM(const_tuple_e491f74580763f43a808aa077c589175_tuple, 3, const_str_plain_WATCH_HANGUP); Py_INCREF(const_str_plain_WATCH_HANGUP);
    const_str_plain_WATCH_ERROR = UNSTREAM_STRING_ASCII(&constant_bin[ 47906 ], 11, 1);
    PyTuple_SET_ITEM(const_tuple_e491f74580763f43a808aa077c589175_tuple, 4, const_str_plain_WATCH_ERROR); Py_INCREF(const_str_plain_WATCH_ERROR);
    PyTuple_SET_ITEM(const_tuple_e491f74580763f43a808aa077c589175_tuple, 5, const_str_plain_NULL_MAIN_LOOP); Py_INCREF(const_str_plain_NULL_MAIN_LOOP);
    PyTuple_SET_ITEM(const_tuple_e491f74580763f43a808aa077c589175_tuple, 6, const_str_plain_glib); Py_INCREF(const_str_plain_glib);
    const_str_digest_c59796eb34d0f09dd9599f3c4578166b = UNSTREAM_STRING_ASCII(&constant_bin[ 47917 ], 60, 0);
    const_str_digest_ca885d114683883351fa5ece16bd8151 = UNSTREAM_STRING_ASCII(&constant_bin[ 47977 ], 51, 0);
    const_str_digest_ae83678fcc640e41b011732561bab8a1 = UNSTREAM_STRING_ASCII(&constant_bin[ 47917 ], 48, 0);
    const_str_digest_2f41de8910a532e6dd306f7ed285a991 = UNSTREAM_STRING_ASCII(&constant_bin[ 48028 ], 22, 0);
    const_list_str_digest_ae83678fcc640e41b011732561bab8a1_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_digest_ae83678fcc640e41b011732561bab8a1_list, 0, const_str_digest_ae83678fcc640e41b011732561bab8a1); Py_INCREF(const_str_digest_ae83678fcc640e41b011732561bab8a1);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dbus$mainloop(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_5fe4a2c00aaabcff4298b30c0c4284c4;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_c59796eb34d0f09dd9599f3c4578166b;
    codeobj_5fe4a2c00aaabcff4298b30c0c4284c4 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_2f41de8910a532e6dd306f7ed285a991, const_tuple_empty, 0, 0, 0);
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

function_impl_code functable_dbus$mainloop[] = {

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

    function_impl_code *current = functable_dbus$mainloop;
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

    if (offset > sizeof(functable_dbus$mainloop) || offset < 0) {
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
        functable_dbus$mainloop[offset],
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
        module_dbus$mainloop,
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
PyObject *modulecode_dbus$mainloop(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_dbus$mainloop = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_dbus$mainloop;
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
    PRINT_STRING("dbus.mainloop: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("dbus.mainloop: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("dbus.mainloop: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initdbus$mainloop\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_dbus$mainloop = MODULE_DICT(module_dbus$mainloop);

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
        moduledict_dbus$mainloop,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_dbus$mainloop,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_dbus$mainloop,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_dbus$mainloop,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_dbus$mainloop,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_dbus$mainloop);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_dbus$mainloop);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_5fe4a2c00aaabcff4298b30c0c4284c4;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_ca885d114683883351fa5ece16bd8151;
        UPDATE_STRING_DICT0(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_c59796eb34d0f09dd9599f3c4578166b;
        UPDATE_STRING_DICT0(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY(const_list_str_digest_ae83678fcc640e41b011732561bab8a1_list);
        UPDATE_STRING_DICT1(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
    }
    // Frame without reuse.
    frame_5fe4a2c00aaabcff4298b30c0c4284c4 = MAKE_MODULE_FRAME(codeobj_5fe4a2c00aaabcff4298b30c0c4284c4, module_dbus$mainloop);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_5fe4a2c00aaabcff4298b30c0c4284c4);
    assert(Py_REFCNT(frame_5fe4a2c00aaabcff4298b30c0c4284c4) == 2);

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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain___path__);

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
        tmp_assattr_name_1 = const_str_digest_c59796eb34d0f09dd9599f3c4578166b;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain___path__);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1004 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_3 = tmp_mvar_value_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain__dbus_bindings;
        tmp_globals_name_1 = (PyObject *)moduledict_dbus$mainloop;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_5fe4a2c00aaabcff4298b30c0c4284c4->m_frame.f_lineno = 29;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain__dbus_bindings, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain__dbus_bindings);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__dbus_bindings);
        }

        CHECK_OBJECT(tmp_mvar_value_6);
        tmp_expression_name_2 = tmp_mvar_value_6;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_NativeMainLoop);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain_NativeMainLoop, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain__dbus_bindings);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__dbus_bindings);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2964 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = tmp_mvar_value_7;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_NULL_MAIN_LOOP);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain_NULL_MAIN_LOOP, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain__dbus_bindings);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__dbus_bindings);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2964 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = tmp_mvar_value_8;
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain_WATCH_READABLE);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain_WATCH_READABLE, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain__dbus_bindings);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__dbus_bindings);
        }

        if (tmp_mvar_value_9 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2964 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = tmp_mvar_value_9;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain_WATCH_WRITABLE);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain_WATCH_WRITABLE, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain__dbus_bindings);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__dbus_bindings);
        }

        if (tmp_mvar_value_10 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2964 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = tmp_mvar_value_10;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain_WATCH_HANGUP);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain_WATCH_HANGUP, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain__dbus_bindings);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__dbus_bindings);
        }

        if (tmp_mvar_value_11 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2964 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = tmp_mvar_value_11;
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain_WATCH_ERROR);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain_WATCH_ERROR, tmp_assign_source_11);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5fe4a2c00aaabcff4298b30c0c4284c4);
#endif
    popFrameStack();

    assertFrameObject(frame_5fe4a2c00aaabcff4298b30c0c4284c4);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5fe4a2c00aaabcff4298b30c0c4284c4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5fe4a2c00aaabcff4298b30c0c4284c4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5fe4a2c00aaabcff4298b30c0c4284c4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5fe4a2c00aaabcff4298b30c0c4284c4, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = const_tuple_e491f74580763f43a808aa077c589175_tuple;
        UPDATE_STRING_DICT0(moduledict_dbus$mainloop, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_12);
    }

    return module_dbus$mainloop;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
