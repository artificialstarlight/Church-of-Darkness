/* Generated code for Python module 'dbus.connection'
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

/* The "module_dbus$connection" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dbus$connection;
PyDictObject *moduledict_dbus$connection;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_cb;
extern PyObject *const_str_plain_named_service;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_b33fe442635e40c9a18b9f06913c7a8a;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_plain_SignalMatch;
extern PyObject *const_float_minus_1_0;
extern PyObject *const_str_plain_object;
static PyObject *const_str_plain_get_destination;
extern PyObject *const_str_plain_ProxyObjectClass;
static PyObject *const_tuple_false_none_none_none_none_none_none_tuple;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_signature;
static PyObject *const_str_plain__path_keyword;
extern PyObject *const_str_plain_callable;
static PyObject *const_str_plain__int_args_match;
static PyObject *const_str_plain_path_keyword;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_is_py3;
static PyObject *const_str_digest_d9a5ce35dbca00931f07f4dfc504dcc3;
extern PyObject *const_tuple_str_plain_UTF8String_tuple;
extern PyObject *const_str_digest_6090a95f7b926ecd6061b143b7cad52f;
static PyObject *const_str_plain___ne__;
extern PyObject *const_tuple_none_none_none_none_tuple;
static PyObject *const_int_pos_63;
static PyObject *const_str_digest_f75b9b4f6d2a8dde4fed9858fe31aec3;
extern PyObject *const_str_plain__dbus_bindings;
extern PyObject *const_str_digest_3aa5bee4de9b0149ae46ffed8a38c6b4;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
extern PyObject *const_str_digest_b45a3c6f685a3991de51197626bab5ca;
extern PyObject *const_str_plain_reply_handler;
static PyObject *const_str_digest_3327acca66f81f34042ac5c9bb3587db;
static PyObject *const_str_plain__dbus_Connection_initialized;
extern PyObject *const_str_plain_get_object;
static PyObject *const_str_digest_ee63cf22393c9e4d2db480dd3294e538;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain__conn_weakref;
extern PyObject *const_str_plain_SignalMessage;
static PyObject *const_str_digest_a91bb9ffa08867931472582c8927c265;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain__args_match;
static PyObject *const_dict_6b01ff05994e5b5fdab9ae8957bfc16c;
static PyObject *const_str_plain__signal_recipients_by_object_path;
static PyObject *const_list_str_digest_c2813bae0d65e83b922b794002512c0b_list;
static PyObject *const_str_plain__member_keyword;
extern PyObject *const_str_plain_pop;
extern PyObject *const_int_0;
static PyObject *const_str_digest_f02aa1d7ebd3773a34b2181bc71910bd;
extern PyObject *const_str_plain_DBusException;
static PyObject *const_str_plain__interface;
extern PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
static PyObject *const_str_plain__rule;
static PyObject *const_str_digest_6b2b5af1315bca5fde04d93771dac361;
static PyObject *const_str_plain__signal_func;
extern PyObject *const_str_plain_setdefault;
static PyObject *const_str_digest_c38e35ad7ba970f51ad8b3db87727737;
extern PyObject *const_str_plain_validate_object_path;
extern PyObject *const_str_plain_type;
static PyObject *const_tuple_str_plain_Connection_str_plain_SignalMatch_tuple;
extern PyObject *const_str_plain_matches;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_ee9d17511b4a14fad520631622655609;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain___hash__;
static PyObject *const_str_digest_2dbb7e749db4c4c0e353c297fe1b2ff8;
extern PyObject *const_str_plain_rule;
extern PyObject *const_str_plain_validate_bus_name;
static PyObject *const_str_plain_kwarg;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_0b385b2a67f6700b8faf677cdd479207;
static PyObject *const_str_digest_74c74a4f3914076d159ac780d9ae7eb5;
static PyObject *const_str_plain_add_message_filter;
static PyObject *const_str_plain_other;
extern PyObject *const_str_digest_fcf040720b88d60da4ce975010c44a3a;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_tuple_str_plain_self_str_plain_match_tuple;
static PyObject *const_str_digest_00d0372aad4b5779c95b3c5861040192;
static PyObject *const_tuple_str_plain_self_str_plain_callable_tuple;
extern PyObject *const_str_plain___repr__;
static PyObject *const_str_digest_68a30b075f4e0a75628bcaf031f07aa7;
extern PyObject *const_str_plain_dbus_interface;
static PyObject *const_tuple_3435f55fa404ee8740aae1f2dc9af6c4_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_new_name_tuple;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_digest_3cc8fcb05b60f7b9437930cdc441ce30;
extern PyObject *const_str_plain_UTF8String;
extern PyObject *const_str_digest_e48610c30fffad33f2054d9dca0792b3;
extern PyObject *const_str_plain_property;
static PyObject *const_str_digest_04b1ff123cad6f73888c606ac96d4d82;
extern PyObject *const_str_plain_startswith;
static PyObject *const_str_plain__member;
static PyObject *const_tuple_cdb3a5972de45ca32aa7d890f52d2d03_tuple;
static PyObject *const_str_digest_92c87af39d8e4a7d9ab2f36abe4ecb94;
static PyObject *const_str_plain__noop;
extern PyObject *const_str_plain_LOCAL_PATH;
extern PyObject *const_str_plain_threading;
static PyObject *const_str_plain_index;
static PyObject *const_str_plain_sender;
static PyObject *const_tuple_61b14c2923c0e816385890a647facfdb_tuple;
static PyObject *const_str_plain_message_keyword;
extern PyObject *const_str_plain_call_async;
static PyObject *const_str_plain_get_args_list;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain__clean_up_signal_match;
static PyObject *const_str_digest_5413777759007d05db00f15b9e70199d;
static PyObject *const_str_plain__signals_lock;
extern PyObject *const_str_plain_add_signal_receiver;
static PyObject *const_str_digest_ac3201d50833e8ded685786b7767c7ee;
static PyObject *const_str_plain__utf8_strings;
extern PyObject *const_str_plain___docformat__;
extern PyObject *const_str_plain_keywords;
extern PyObject *const_str_plain_interface;
static PyObject *const_str_digest_c5f0090694aad5409ed9ef5de7e7084f;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_tuple_str_plain_DBusException_tuple;
static PyObject *const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_2143f45c4f0c460040bdb80e94cf9997;
static PyObject *const_str_plain_byte_arrays;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_conn;
extern PyObject *const_str_plain_e;
static PyObject *const_str_plain__Connection__call_on_disconnection;
static PyObject *const_str_plain_message;
extern PyObject *const_str_plain_MethodReturnMessage;
static PyObject *const_str_plain_by_interface;
static PyObject *const_tuple_c01835c49136a2d4e4f6c91ef6a073dd_tuple;
extern PyObject *const_str_plain_weakref;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_plain_validate_interface_name;
static PyObject *const_str_plain_send_message_with_reply;
static PyObject *const_str_plain_member_keys;
static PyObject *const_str_digest_dbe052503d544dea7790a33dbb66417a;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_stacklevel;
extern PyObject *const_str_plain_call_blocking;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_1da03696927a1f87040eb7cff2283c9c;
static PyObject *const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple;
static PyObject *const_tuple_e1e86e8f5fdae08190635d0bc6872745_tuple;
extern PyObject *const_str_plain_object_path;
static PyObject *const_str_digest_d4399ea92558e8bd8e7eab45a845507e;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_ProxyObject;
extern PyObject *const_str_plain_member;
static PyObject *const_str_digest_e6f6db1e1554b164f4c266b895b42a01;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_plain_Disconnected;
extern PyObject *const_str_plain_acquire;
static PyObject *const_tuple_d03c807aba646c52cfd9516daf17b016_tuple;
extern PyObject *const_str_plain_signal_name;
extern PyObject *const_str_digest_8e2db9d493d0360a27a3bf19583a3201;
static PyObject *const_str_plain_send_message;
static PyObject *const_str_digest_c312c1fd970460aff1adb590a8df01b9;
extern PyObject *const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED;
static PyObject *const_tuple_str_digest_92c87af39d8e4a7d9ab2f36abe4ecb94_tuple;
extern PyObject *const_str_plain_tuple;
static PyObject *const_str_plain__sender_keyword;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_method;
static PyObject *const_str_plain_interface_keyword;
extern PyObject *const_str_plain_has_location;
static PyObject *const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list;
extern PyObject *const_str_plain_bus_name;
static PyObject *const_tuple_aecbb8384e4a55dbabbaa364df51df39_tuple;
static PyObject *const_str_plain__slots;
static PyObject *const_str_plain__handler;
static PyObject *const_str_plain__Connection;
extern PyObject *const_tuple_str_plain_named_service_none_tuple;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain_handler_function;
static PyObject *const_str_digest_131bf54f9d136fafca15377302d118a7;
static PyObject *const_str_plain_deletions;
extern PyObject *const_str_plain_basicConfig;
static PyObject *const_str_plain__destination_keyword;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_reStructuredText;
static PyObject *const_str_plain_new_name;
extern PyObject *const_str_plain_activate_name_owner;
extern PyObject *const_str_plain_warnings;
static PyObject *const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple;
static PyObject *const_tuple_float_minus_1_0_false_tuple;
static PyObject *const_str_plain_msg_reply_handler;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_String;
static PyObject *const_str_plain_get_sender;
static PyObject *const_str_digest_f5767631bc95611231d441939c67d7d1;
extern PyObject *const_str_digest_18c67c412066bef703396d613a159b4d;
static PyObject *const_str_plain__interface_keyword;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_38b05459305f0c4a6d3d430cd11ee6fd_tuple;
extern PyObject *const_str_plain_remove;
extern PyObject *const_str_plain_get_interface;
static PyObject *const_str_digest_1f49e58c7fcf708010bb49332c34a06e;
static PyObject *const_str_digest_22c55462d9849f9debc8e24f1dd1ee36;
static PyObject *const_str_plain_get_args_opts;
static PyObject *const_str_digest_c2813bae0d65e83b922b794002512c0b;
extern PyObject *const_str_plain_ErrorMessage;
static PyObject *const_str_plain_get_path;
extern PyObject *const_str_plain___slots__;
extern PyObject *const_str_digest_1b131d6ac44490cf7b663211212d8dfa;
static PyObject *const_str_digest_644b332e25c4adcb993444ee8a8734c8;
static PyObject *const_dict_fa39376a70aae82cbbe318011f99e72b;
static PyObject *const_str_plain__message_keyword;
static PyObject *const_str_plain_destination_keyword;
static PyObject *const_str_digest_990e7924c862ae9c7b8a06ae44880838;
extern PyObject *const_str_plain___class__;
static PyObject *const_tuple_str_digest_7ffb9ab03afd03351abea8dd52c5f3b0_tuple;
static PyObject *const_tuple_str_plain_arg_tuple;
static PyObject *const_str_plain_send_message_with_reply_and_block;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___str__;
static PyObject *const_str_plain_Lock;
extern PyObject *const_str_plain_LOCAL_IFACE;
static PyObject *const_str_digest_6e166361f0f2210b2fa06bad0b2ee4ff;
extern PyObject *const_str_plain_utf8_strings;
extern PyObject *const_str_plain_MethodCallMessage;
extern PyObject *const_tuple_str_plain_warn_tuple;
static PyObject *const_str_plain_arg_type;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain_reply_message;
static PyObject *const_str_plain_by_member;
static PyObject *const_str_plain_get_member;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_Connection;
extern PyObject *const_tuple_str_plain_self_str_plain_bus_name_tuple;
static PyObject *const_str_plain_interface_keys;
static PyObject *const_str_digest_5039c5d6f11e98c474ba03bba31f5603;
static PyObject *const_str_plain_destination;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_digest_40b5de9f7bade852fc63482a83615549;
static PyObject *const_str_plain_handler_or_match;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_d5e31bc95a80dfad7a888c1d848d14c9;
extern PyObject *const_str_plain_introspect;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_arg;
extern PyObject *const_str_plain_args;
static PyObject *const_str_digest_eb26132551385f1349bb9090948fc44f;
extern PyObject *const_str_plain_items;
extern PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
static PyObject *const_tuple_str_plain_String_tuple;
extern PyObject *const_slice_int_pos_3_none_none;
static PyObject *const_str_plain_matches_removal_spec;
extern PyObject *const_str_plain__require_main_loop;
static PyObject *const_tuple_str_plain_is_py2_str_plain_is_py3_tuple;
extern PyObject *const_str_plain_join;
static PyObject *const_tuple_a302f73bbf4e109503c9fcc6bf1cec22_tuple;
extern PyObject *const_str_plain__logger;
static PyObject *const_str_digest_16e165df4d31d3e2e090145850dd908e;
static PyObject *const_str_digest_ff49df7389f60a431d8c23ca5bf6edc1;
static PyObject *const_str_digest_4eaa951297de8a1bf1145439deb02376;
static PyObject *const_str_digest_307bae81fd754079a49cf675f10e1993;
extern PyObject *const_str_plain_require_main_loop;
static PyObject *const_str_digest_72ce1f4c98907301c1ceaeddd26c6b2c;
static PyObject *const_str_chr_44;
extern PyObject *const_str_plain_release;
static PyObject *const_tuple_str_digest_0b385b2a67f6700b8faf677cdd479207_tuple;
static PyObject *const_str_plain__path;
static PyObject *const_str_plain_sender_keyword;
static PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
static PyObject *const_str_digest_954ade24ee8cd0ad248e9565302ef1ee;
static PyObject *const_str_plain__byte_arrays;
extern PyObject *const_str_plain_DeprecationWarning;
static PyObject *const_tuple_str_plain__utf8_strings_tuple;
extern PyObject *const_str_plain_keys;
static PyObject *const_tuple_str_plain_self_str_plain_conn_tuple;
static PyObject *const_str_plain_args_list;
static PyObject *const_tuple_str_plain_utf8_strings_false_tuple;
static PyObject *const_str_plain__sender_name_owner;
static PyObject *const_str_plain_call_on_disconnection;
extern PyObject *const_str_plain_match;
static PyObject *const_str_plain_remove_signal_receiver;
static PyObject *const_tuple_str_plain_ProxyObject_tuple;
static PyObject *const_str_plain_maybe_handle_message;
static PyObject *const_str_plain__sender;
static PyObject *const_tuple_d416af1fc944cf4bb33429e98e49a1af_tuple;
static PyObject *const_str_plain___eq__;
static PyObject *const_str_plain_get_error_name;
static PyObject *const_str_digest_fa57831f05397508150ab2b9c37396e0;
static PyObject *const_str_digest_7920b839bde551df3cfdb15a43838363;
static PyObject *const_str_plain_ref;
extern PyObject *const_str_digest_4289e46f026bf0dd92edd4764f9ca580;
static PyObject *const_str_digest_f5b4474ebb16be358363b71a6ea51f3c;
extern PyObject *const_str_plain_exc_info;
extern PyObject *const_str_plain_validate_member_name;
static PyObject *const_tuple_float_minus_1_0_false_true_tuple;
extern PyObject *const_str_angle_lambda;
static PyObject *const_tuple_5aba6155a9b31ed44c58c0dbba0e9644_tuple;
static PyObject *const_str_digest_e90ef89bfbc28ba1c9bb66687160421f;
extern PyObject *const_str_plain_set_sender_name_owner;
static PyObject *const_tuple_none_none_true_tuple;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_plain__iter_easy_matches;
static PyObject *const_str_digest_7ffb9ab03afd03351abea8dd52c5f3b0;
static PyObject *const_str_plain_path_keys;
static PyObject *const_str_digest_062b9bbeb5779a728e3f5f602168f47b;
static PyObject *const_str_digest_53da925ba3defe32e6cd456822eb99d6;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_error_handler;
static PyObject *const_str_plain_member_keyword;
static PyObject *const_tuple_fc8897b5d0f2134569d7602f5579584b_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_is_py2;
static PyObject *const_str_plain_handler;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_b33fe442635e40c9a18b9f06913c7a8a = UNSTREAM_STRING_ASCII(&constant_bin[ 38419 ], 42, 0);
    const_str_plain_SignalMatch = UNSTREAM_STRING_ASCII(&constant_bin[ 2317 ], 11, 1);
    const_str_plain_get_destination = UNSTREAM_STRING_ASCII(&constant_bin[ 38461 ], 15, 1);
    const_tuple_false_none_none_none_none_none_none_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_false_none_none_none_none_none_none_tuple, 0, Py_False); Py_INCREF(Py_False);
    PyTuple_SET_ITEM(const_tuple_false_none_none_none_none_none_none_tuple, 1, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_false_none_none_none_none_none_none_tuple, 2, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_false_none_none_none_none_none_none_tuple, 3, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_false_none_none_none_none_none_none_tuple, 4, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_false_none_none_none_none_none_none_tuple, 5, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_false_none_none_none_none_none_none_tuple, 6, Py_None); Py_INCREF(Py_None);
    const_str_plain__path_keyword = UNSTREAM_STRING_ASCII(&constant_bin[ 38476 ], 13, 1);
    const_str_plain__int_args_match = UNSTREAM_STRING_ASCII(&constant_bin[ 38489 ], 15, 1);
    const_str_plain_path_keyword = UNSTREAM_STRING_ASCII(&constant_bin[ 38477 ], 12, 1);
    const_str_digest_d9a5ce35dbca00931f07f4dfc504dcc3 = UNSTREAM_STRING_ASCII(&constant_bin[ 31557 ], 11, 0);
    const_str_plain___ne__ = UNSTREAM_STRING_ASCII(&constant_bin[ 38504 ], 6, 1);
    const_int_pos_63 = PyLong_FromUnsignedLong(63ul);
    const_str_digest_f75b9b4f6d2a8dde4fed9858fe31aec3 = UNSTREAM_STRING_ASCII(&constant_bin[ 38510 ], 33, 0);
    const_str_digest_3327acca66f81f34042ac5c9bb3587db = UNSTREAM_STRING_ASCII(&constant_bin[ 38543 ], 3586, 0);
    const_str_plain__dbus_Connection_initialized = UNSTREAM_STRING_ASCII(&constant_bin[ 42129 ], 28, 1);
    const_str_digest_ee63cf22393c9e4d2db480dd3294e538 = UNSTREAM_STRING_ASCII(&constant_bin[ 42157 ], 26, 0);
    const_str_plain__conn_weakref = UNSTREAM_STRING_ASCII(&constant_bin[ 42183 ], 13, 1);
    const_str_digest_a91bb9ffa08867931472582c8927c265 = UNSTREAM_STRING_ASCII(&constant_bin[ 31610 ], 9, 0);
    const_str_plain__args_match = UNSTREAM_STRING_ASCII(&constant_bin[ 38493 ], 11, 1);
    const_dict_6b01ff05994e5b5fdab9ae8957bfc16c = _PyDict_NewPresized( 1 );
    const_str_plain_byte_arrays = UNSTREAM_STRING_ASCII(&constant_bin[ 40008 ], 11, 1);
    PyDict_SetItem(const_dict_6b01ff05994e5b5fdab9ae8957bfc16c, const_str_plain_byte_arrays, Py_True);
    assert(PyDict_Size(const_dict_6b01ff05994e5b5fdab9ae8957bfc16c) == 1);
    const_str_plain__signal_recipients_by_object_path = UNSTREAM_STRING_ASCII(&constant_bin[ 42196 ], 33, 1);
    const_list_str_digest_c2813bae0d65e83b922b794002512c0b_list = PyList_New(1);
    const_str_digest_c2813bae0d65e83b922b794002512c0b = UNSTREAM_STRING_ASCII(&constant_bin[ 31543 ], 13, 0);
    PyList_SET_ITEM(const_list_str_digest_c2813bae0d65e83b922b794002512c0b_list, 0, const_str_digest_c2813bae0d65e83b922b794002512c0b); Py_INCREF(const_str_digest_c2813bae0d65e83b922b794002512c0b);
    const_str_plain__member_keyword = UNSTREAM_STRING_ASCII(&constant_bin[ 42229 ], 15, 1);
    const_str_digest_f02aa1d7ebd3773a34b2181bc71910bd = UNSTREAM_STRING_ASCII(&constant_bin[ 42244 ], 60, 0);
    const_str_plain__interface = UNSTREAM_STRING_ASCII(&constant_bin[ 2119 ], 10, 1);
    const_str_plain__rule = UNSTREAM_STRING_ASCII(&constant_bin[ 42304 ], 5, 1);
    const_str_digest_6b2b5af1315bca5fde04d93771dac361 = UNSTREAM_STRING_ASCII(&constant_bin[ 42309 ], 24, 0);
    const_str_plain__signal_func = UNSTREAM_STRING_ASCII(&constant_bin[ 42333 ], 12, 1);
    const_str_digest_c38e35ad7ba970f51ad8b3db87727737 = UNSTREAM_STRING_ASCII(&constant_bin[ 42345 ], 33, 0);
    const_tuple_str_plain_Connection_str_plain_SignalMatch_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_Connection_str_plain_SignalMatch_tuple, 0, const_str_plain_Connection); Py_INCREF(const_str_plain_Connection);
    PyTuple_SET_ITEM(const_tuple_str_plain_Connection_str_plain_SignalMatch_tuple, 1, const_str_plain_SignalMatch); Py_INCREF(const_str_plain_SignalMatch);
    const_str_digest_ee9d17511b4a14fad520631622655609 = UNSTREAM_STRING_ASCII(&constant_bin[ 31761 ], 30, 0);
    const_str_plain___hash__ = UNSTREAM_STRING_ASCII(&constant_bin[ 42378 ], 8, 1);
    const_str_digest_2dbb7e749db4c4c0e353c297fe1b2ff8 = UNSTREAM_STRING_ASCII(&constant_bin[ 42386 ], 57, 0);
    const_str_plain_kwarg = UNSTREAM_STRING_ASCII(&constant_bin[ 42443 ], 5, 1);
    const_str_digest_74c74a4f3914076d159ac780d9ae7eb5 = UNSTREAM_STRING_ASCII(&constant_bin[ 31374 ], 33, 0);
    const_str_plain_add_message_filter = UNSTREAM_STRING_ASCII(&constant_bin[ 42448 ], 18, 1);
    const_str_plain_other = UNSTREAM_STRING_ASCII(&constant_bin[ 16127 ], 5, 1);
    const_tuple_str_plain_self_str_plain_match_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_match_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_match_tuple, 1, const_str_plain_match); Py_INCREF(const_str_plain_match);
    const_str_digest_00d0372aad4b5779c95b3c5861040192 = UNSTREAM_STRING_ASCII(&constant_bin[ 38371 ], 21, 0);
    const_tuple_str_plain_self_str_plain_callable_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_callable_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_callable_tuple, 1, const_str_plain_callable); Py_INCREF(const_str_plain_callable);
    const_str_digest_68a30b075f4e0a75628bcaf031f07aa7 = UNSTREAM_STRING_ASCII(&constant_bin[ 42466 ], 122, 0);
    const_tuple_3435f55fa404ee8740aae1f2dc9af6c4_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_3435f55fa404ee8740aae1f2dc9af6c4_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_3435f55fa404ee8740aae1f2dc9af6c4_tuple, 1, const_str_plain_rule); Py_INCREF(const_str_plain_rule);
    const_str_plain_index = UNSTREAM_STRING_ASCII(&constant_bin[ 42409 ], 5, 1);
    PyTuple_SET_ITEM(const_tuple_3435f55fa404ee8740aae1f2dc9af6c4_tuple, 2, const_str_plain_index); Py_INCREF(const_str_plain_index);
    PyTuple_SET_ITEM(const_tuple_3435f55fa404ee8740aae1f2dc9af6c4_tuple, 3, const_str_plain_value); Py_INCREF(const_str_plain_value);
    const_tuple_str_plain_self_str_plain_new_name_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_new_name_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_new_name = UNSTREAM_STRING_ASCII(&constant_bin[ 42588 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_new_name_tuple, 1, const_str_plain_new_name); Py_INCREF(const_str_plain_new_name);
    const_str_digest_04b1ff123cad6f73888c606ac96d4d82 = UNSTREAM_STRING_ASCII(&constant_bin[ 42596 ], 11, 0);
    const_str_plain__member = UNSTREAM_STRING_ASCII(&constant_bin[ 2077 ], 7, 1);
    const_tuple_cdb3a5972de45ca32aa7d890f52d2d03_tuple = PyTuple_New(11);
    PyTuple_SET_ITEM(const_tuple_cdb3a5972de45ca32aa7d890f52d2d03_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_cdb3a5972de45ca32aa7d890f52d2d03_tuple, 1, const_str_plain_path); Py_INCREF(const_str_plain_path);
    PyTuple_SET_ITEM(const_tuple_cdb3a5972de45ca32aa7d890f52d2d03_tuple, 2, const_str_plain_dbus_interface); Py_INCREF(const_str_plain_dbus_interface);
    PyTuple_SET_ITEM(const_tuple_cdb3a5972de45ca32aa7d890f52d2d03_tuple, 3, const_str_plain_member); Py_INCREF(const_str_plain_member);
    const_str_plain_path_keys = UNSTREAM_STRING_ASCII(&constant_bin[ 42607 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_cdb3a5972de45ca32aa7d890f52d2d03_tuple, 4, const_str_plain_path_keys); Py_INCREF(const_str_plain_path_keys);
    const_str_plain_interface_keys = UNSTREAM_STRING_ASCII(&constant_bin[ 42616 ], 14, 1);
    PyTuple_SET_ITEM(const_tuple_cdb3a5972de45ca32aa7d890f52d2d03_tuple, 5, const_str_plain_interface_keys); Py_INCREF(const_str_plain_interface_keys);
    const_str_plain_member_keys = UNSTREAM_STRING_ASCII(&constant_bin[ 42630 ], 11, 1);
    PyTuple_SET_ITEM(const_tuple_cdb3a5972de45ca32aa7d890f52d2d03_tuple, 6, const_str_plain_member_keys); Py_INCREF(const_str_plain_member_keys);
    const_str_plain_by_interface = UNSTREAM_STRING_ASCII(&constant_bin[ 42641 ], 12, 1);
    PyTuple_SET_ITEM(const_tuple_cdb3a5972de45ca32aa7d890f52d2d03_tuple, 7, const_str_plain_by_interface); Py_INCREF(const_str_plain_by_interface);
    const_str_plain_by_member = UNSTREAM_STRING_ASCII(&constant_bin[ 42653 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_cdb3a5972de45ca32aa7d890f52d2d03_tuple, 8, const_str_plain_by_member); Py_INCREF(const_str_plain_by_member);
    PyTuple_SET_ITEM(const_tuple_cdb3a5972de45ca32aa7d890f52d2d03_tuple, 9, const_str_plain_matches); Py_INCREF(const_str_plain_matches);
    PyTuple_SET_ITEM(const_tuple_cdb3a5972de45ca32aa7d890f52d2d03_tuple, 10, const_str_plain_m); Py_INCREF(const_str_plain_m);
    const_str_digest_92c87af39d8e4a7d9ab2f36abe4ecb94 = UNSTREAM_STRING_ASCII(&constant_bin[ 42662 ], 38, 0);
    const_str_plain__noop = UNSTREAM_STRING_ASCII(&constant_bin[ 2541 ], 5, 1);
    const_str_plain_sender = UNSTREAM_STRING_ASCII(&constant_bin[ 31557 ], 6, 1);
    const_tuple_61b14c2923c0e816385890a647facfdb_tuple = PyTuple_New(8);
    PyTuple_SET_ITEM(const_tuple_61b14c2923c0e816385890a647facfdb_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_message = UNSTREAM_STRING_ASCII(&constant_bin[ 25300 ], 7, 1);
    PyTuple_SET_ITEM(const_tuple_61b14c2923c0e816385890a647facfdb_tuple, 1, const_str_plain_message); Py_INCREF(const_str_plain_message);
    PyTuple_SET_ITEM(const_tuple_61b14c2923c0e816385890a647facfdb_tuple, 2, const_str_plain_args); Py_INCREF(const_str_plain_args);
    PyTuple_SET_ITEM(const_tuple_61b14c2923c0e816385890a647facfdb_tuple, 3, const_str_plain_kwargs); Py_INCREF(const_str_plain_kwargs);
    const_str_plain_arg_type = UNSTREAM_STRING_ASCII(&constant_bin[ 42700 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_61b14c2923c0e816385890a647facfdb_tuple, 4, const_str_plain_arg_type); Py_INCREF(const_str_plain_arg_type);
    PyTuple_SET_ITEM(const_tuple_61b14c2923c0e816385890a647facfdb_tuple, 5, const_str_plain_index); Py_INCREF(const_str_plain_index);
    PyTuple_SET_ITEM(const_tuple_61b14c2923c0e816385890a647facfdb_tuple, 6, const_str_plain_value); Py_INCREF(const_str_plain_value);
    PyTuple_SET_ITEM(const_tuple_61b14c2923c0e816385890a647facfdb_tuple, 7, const_str_plain_utf8_strings); Py_INCREF(const_str_plain_utf8_strings);
    const_str_plain_message_keyword = UNSTREAM_STRING_ASCII(&constant_bin[ 41441 ], 15, 1);
    const_str_plain_get_args_list = UNSTREAM_STRING_ASCII(&constant_bin[ 42708 ], 13, 1);
    const_str_digest_5413777759007d05db00f15b9e70199d = UNSTREAM_STRING_ASCII(&constant_bin[ 42721 ], 169, 0);
    const_str_plain__signals_lock = UNSTREAM_STRING_ASCII(&constant_bin[ 42890 ], 13, 1);
    const_str_digest_ac3201d50833e8ded685786b7767c7ee = UNSTREAM_STRING_ASCII(&constant_bin[ 42903 ], 40, 0);
    const_str_plain__utf8_strings = UNSTREAM_STRING_ASCII(&constant_bin[ 42943 ], 13, 1);
    const_str_digest_c5f0090694aad5409ed9ef5de7e7084f = UNSTREAM_STRING_ASCII(&constant_bin[ 42956 ], 20, 0);
    const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple = PyTuple_New(17);
    PyTuple_SET_ITEM(const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple, 1, const_str_plain_conn); Py_INCREF(const_str_plain_conn);
    PyTuple_SET_ITEM(const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple, 2, const_str_plain_sender); Py_INCREF(const_str_plain_sender);
    PyTuple_SET_ITEM(const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple, 3, const_str_plain_object_path); Py_INCREF(const_str_plain_object_path);
    PyTuple_SET_ITEM(const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple, 4, const_str_plain_dbus_interface); Py_INCREF(const_str_plain_dbus_interface);
    PyTuple_SET_ITEM(const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple, 5, const_str_plain_member); Py_INCREF(const_str_plain_member);
    const_str_plain_handler = UNSTREAM_STRING_ASCII(&constant_bin[ 22776 ], 7, 1);
    PyTuple_SET_ITEM(const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple, 6, const_str_plain_handler); Py_INCREF(const_str_plain_handler);
    PyTuple_SET_ITEM(const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple, 7, const_str_plain_byte_arrays); Py_INCREF(const_str_plain_byte_arrays);
    const_str_plain_sender_keyword = UNSTREAM_STRING_ASCII(&constant_bin[ 40358 ], 14, 1);
    PyTuple_SET_ITEM(const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple, 8, const_str_plain_sender_keyword); Py_INCREF(const_str_plain_sender_keyword);
    PyTuple_SET_ITEM(const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple, 9, const_str_plain_path_keyword); Py_INCREF(const_str_plain_path_keyword);
    const_str_plain_interface_keyword = UNSTREAM_STRING_ASCII(&constant_bin[ 40851 ], 17, 1);
    PyTuple_SET_ITEM(const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple, 10, const_str_plain_interface_keyword); Py_INCREF(const_str_plain_interface_keyword);
    const_str_plain_member_keyword = UNSTREAM_STRING_ASCII(&constant_bin[ 41041 ], 14, 1);
    PyTuple_SET_ITEM(const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple, 11, const_str_plain_member_keyword); Py_INCREF(const_str_plain_member_keyword);
    PyTuple_SET_ITEM(const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple, 12, const_str_plain_message_keyword); Py_INCREF(const_str_plain_message_keyword);
    const_str_plain_destination_keyword = UNSTREAM_STRING_ASCII(&constant_bin[ 40580 ], 19, 1);
    PyTuple_SET_ITEM(const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple, 13, const_str_plain_destination_keyword); Py_INCREF(const_str_plain_destination_keyword);
    PyTuple_SET_ITEM(const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple, 14, const_str_plain_kwargs); Py_INCREF(const_str_plain_kwargs);
    PyTuple_SET_ITEM(const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple, 15, const_str_plain_kwarg); Py_INCREF(const_str_plain_kwarg);
    PyTuple_SET_ITEM(const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple, 16, const_str_plain_index); Py_INCREF(const_str_plain_index);
    const_str_digest_2143f45c4f0c460040bdb80e94cf9997 = UNSTREAM_STRING_ASCII(&constant_bin[ 42976 ], 18, 0);
    const_str_plain__Connection__call_on_disconnection = UNSTREAM_STRING_ASCII(&constant_bin[ 42994 ], 34, 1);
    const_tuple_c01835c49136a2d4e4f6c91ef6a073dd_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_c01835c49136a2d4e4f6c91ef6a073dd_tuple, 0, const_str_plain_ErrorMessage); Py_INCREF(const_str_plain_ErrorMessage);
    PyTuple_SET_ITEM(const_tuple_c01835c49136a2d4e4f6c91ef6a073dd_tuple, 1, const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED); Py_INCREF(const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED);
    PyTuple_SET_ITEM(const_tuple_c01835c49136a2d4e4f6c91ef6a073dd_tuple, 2, const_str_plain_MethodCallMessage); Py_INCREF(const_str_plain_MethodCallMessage);
    PyTuple_SET_ITEM(const_tuple_c01835c49136a2d4e4f6c91ef6a073dd_tuple, 3, const_str_plain_MethodReturnMessage); Py_INCREF(const_str_plain_MethodReturnMessage);
    PyTuple_SET_ITEM(const_tuple_c01835c49136a2d4e4f6c91ef6a073dd_tuple, 4, const_str_plain_SignalMessage); Py_INCREF(const_str_plain_SignalMessage);
    const_str_plain_send_message_with_reply = UNSTREAM_STRING_ASCII(&constant_bin[ 43028 ], 23, 1);
    const_str_digest_dbe052503d544dea7790a33dbb66417a = UNSTREAM_STRING_ASCII(&constant_bin[ 37020 ], 30, 0);
    const_str_digest_1da03696927a1f87040eb7cff2283c9c = UNSTREAM_STRING_ASCII(&constant_bin[ 43051 ], 20, 0);
    const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, 1, const_str_plain_args); Py_INCREF(const_str_plain_args);
    PyTuple_SET_ITEM(const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, 2, const_str_plain_kwargs); Py_INCREF(const_str_plain_kwargs);
    PyTuple_SET_ITEM(const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, 3, const_str_plain___class__); Py_INCREF(const_str_plain___class__);
    const_tuple_e1e86e8f5fdae08190635d0bc6872745_tuple = PyTuple_New(15);
    PyTuple_SET_ITEM(const_tuple_e1e86e8f5fdae08190635d0bc6872745_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_handler_or_match = UNSTREAM_STRING_ASCII(&constant_bin[ 43071 ], 16, 1);
    PyTuple_SET_ITEM(const_tuple_e1e86e8f5fdae08190635d0bc6872745_tuple, 1, const_str_plain_handler_or_match); Py_INCREF(const_str_plain_handler_or_match);
    PyTuple_SET_ITEM(const_tuple_e1e86e8f5fdae08190635d0bc6872745_tuple, 2, const_str_plain_signal_name); Py_INCREF(const_str_plain_signal_name);
    PyTuple_SET_ITEM(const_tuple_e1e86e8f5fdae08190635d0bc6872745_tuple, 3, const_str_plain_dbus_interface); Py_INCREF(const_str_plain_dbus_interface);
    PyTuple_SET_ITEM(const_tuple_e1e86e8f5fdae08190635d0bc6872745_tuple, 4, const_str_plain_bus_name); Py_INCREF(const_str_plain_bus_name);
    PyTuple_SET_ITEM(const_tuple_e1e86e8f5fdae08190635d0bc6872745_tuple, 5, const_str_plain_path); Py_INCREF(const_str_plain_path);
    PyTuple_SET_ITEM(const_tuple_e1e86e8f5fdae08190635d0bc6872745_tuple, 6, const_str_plain_keywords); Py_INCREF(const_str_plain_keywords);
    PyTuple_SET_ITEM(const_tuple_e1e86e8f5fdae08190635d0bc6872745_tuple, 7, const_str_plain_named_service); Py_INCREF(const_str_plain_named_service);
    PyTuple_SET_ITEM(const_tuple_e1e86e8f5fdae08190635d0bc6872745_tuple, 8, const_str_plain_warn); Py_INCREF(const_str_plain_warn);
    PyTuple_SET_ITEM(const_tuple_e1e86e8f5fdae08190635d0bc6872745_tuple, 9, const_str_plain_new); Py_INCREF(const_str_plain_new);
    const_str_plain_deletions = UNSTREAM_STRING_ASCII(&constant_bin[ 43087 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_e1e86e8f5fdae08190635d0bc6872745_tuple, 10, const_str_plain_deletions); Py_INCREF(const_str_plain_deletions);
    PyTuple_SET_ITEM(const_tuple_e1e86e8f5fdae08190635d0bc6872745_tuple, 11, const_str_plain_by_interface); Py_INCREF(const_str_plain_by_interface);
    PyTuple_SET_ITEM(const_tuple_e1e86e8f5fdae08190635d0bc6872745_tuple, 12, const_str_plain_by_member); Py_INCREF(const_str_plain_by_member);
    PyTuple_SET_ITEM(const_tuple_e1e86e8f5fdae08190635d0bc6872745_tuple, 13, const_str_plain_matches); Py_INCREF(const_str_plain_matches);
    PyTuple_SET_ITEM(const_tuple_e1e86e8f5fdae08190635d0bc6872745_tuple, 14, const_str_plain_match); Py_INCREF(const_str_plain_match);
    const_str_digest_d4399ea92558e8bd8e7eab45a845507e = UNSTREAM_STRING_ASCII(&constant_bin[ 43096 ], 69, 0);
    const_str_digest_e6f6db1e1554b164f4c266b895b42a01 = UNSTREAM_STRING_ASCII(&constant_bin[ 43165 ], 32, 0);
    const_str_plain_Disconnected = UNSTREAM_STRING_ASCII(&constant_bin[ 43197 ], 12, 1);
    const_tuple_d03c807aba646c52cfd9516daf17b016_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_d03c807aba646c52cfd9516daf17b016_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_d03c807aba646c52cfd9516daf17b016_tuple, 1, const_str_plain_sender); Py_INCREF(const_str_plain_sender);
    PyTuple_SET_ITEM(const_tuple_d03c807aba646c52cfd9516daf17b016_tuple, 2, const_str_plain_object_path); Py_INCREF(const_str_plain_object_path);
    PyTuple_SET_ITEM(const_tuple_d03c807aba646c52cfd9516daf17b016_tuple, 3, const_str_plain_dbus_interface); Py_INCREF(const_str_plain_dbus_interface);
    PyTuple_SET_ITEM(const_tuple_d03c807aba646c52cfd9516daf17b016_tuple, 4, const_str_plain_member); Py_INCREF(const_str_plain_member);
    PyTuple_SET_ITEM(const_tuple_d03c807aba646c52cfd9516daf17b016_tuple, 5, const_str_plain_handler); Py_INCREF(const_str_plain_handler);
    PyTuple_SET_ITEM(const_tuple_d03c807aba646c52cfd9516daf17b016_tuple, 6, const_str_plain_kwargs); Py_INCREF(const_str_plain_kwargs);
    const_str_plain_send_message = UNSTREAM_STRING_ASCII(&constant_bin[ 43028 ], 12, 1);
    const_str_digest_c312c1fd970460aff1adb590a8df01b9 = UNSTREAM_STRING_ASCII(&constant_bin[ 43209 ], 118, 0);
    const_tuple_str_digest_92c87af39d8e4a7d9ab2f36abe4ecb94_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_92c87af39d8e4a7d9ab2f36abe4ecb94_tuple, 0, const_str_digest_92c87af39d8e4a7d9ab2f36abe4ecb94); Py_INCREF(const_str_digest_92c87af39d8e4a7d9ab2f36abe4ecb94);
    const_str_plain__sender_keyword = UNSTREAM_STRING_ASCII(&constant_bin[ 43327 ], 15, 1);
    const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list = PyList_New(17);
    const_str_plain__sender_name_owner = UNSTREAM_STRING_ASCII(&constant_bin[ 38525 ], 18, 1);
    PyList_SET_ITEM(const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list, 0, const_str_plain__sender_name_owner); Py_INCREF(const_str_plain__sender_name_owner);
    PyList_SET_ITEM(const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list, 1, const_str_plain__member); Py_INCREF(const_str_plain__member);
    PyList_SET_ITEM(const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list, 2, const_str_plain__interface); Py_INCREF(const_str_plain__interface);
    const_str_plain__sender = UNSTREAM_STRING_ASCII(&constant_bin[ 35401 ], 7, 1);
    PyList_SET_ITEM(const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list, 3, const_str_plain__sender); Py_INCREF(const_str_plain__sender);
    const_str_plain__path = UNSTREAM_STRING_ASCII(&constant_bin[ 736 ], 5, 1);
    PyList_SET_ITEM(const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list, 4, const_str_plain__path); Py_INCREF(const_str_plain__path);
    const_str_plain__handler = UNSTREAM_STRING_ASCII(&constant_bin[ 22775 ], 8, 1);
    PyList_SET_ITEM(const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list, 5, const_str_plain__handler); Py_INCREF(const_str_plain__handler);
    PyList_SET_ITEM(const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list, 6, const_str_plain__args_match); Py_INCREF(const_str_plain__args_match);
    PyList_SET_ITEM(const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list, 7, const_str_plain__rule); Py_INCREF(const_str_plain__rule);
    const_str_plain__byte_arrays = UNSTREAM_STRING_ASCII(&constant_bin[ 43342 ], 12, 1);
    PyList_SET_ITEM(const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list, 8, const_str_plain__byte_arrays); Py_INCREF(const_str_plain__byte_arrays);
    PyList_SET_ITEM(const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list, 9, const_str_plain__conn_weakref); Py_INCREF(const_str_plain__conn_weakref);
    const_str_plain__destination_keyword = UNSTREAM_STRING_ASCII(&constant_bin[ 43354 ], 20, 1);
    PyList_SET_ITEM(const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list, 10, const_str_plain__destination_keyword); Py_INCREF(const_str_plain__destination_keyword);
    const_str_plain__interface_keyword = UNSTREAM_STRING_ASCII(&constant_bin[ 43374 ], 18, 1);
    PyList_SET_ITEM(const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list, 11, const_str_plain__interface_keyword); Py_INCREF(const_str_plain__interface_keyword);
    const_str_plain__message_keyword = UNSTREAM_STRING_ASCII(&constant_bin[ 43392 ], 16, 1);
    PyList_SET_ITEM(const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list, 12, const_str_plain__message_keyword); Py_INCREF(const_str_plain__message_keyword);
    PyList_SET_ITEM(const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list, 13, const_str_plain__member_keyword); Py_INCREF(const_str_plain__member_keyword);
    PyList_SET_ITEM(const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list, 14, const_str_plain__sender_keyword); Py_INCREF(const_str_plain__sender_keyword);
    PyList_SET_ITEM(const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list, 15, const_str_plain__path_keyword); Py_INCREF(const_str_plain__path_keyword);
    PyList_SET_ITEM(const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list, 16, const_str_plain__int_args_match); Py_INCREF(const_str_plain__int_args_match);
    const_tuple_aecbb8384e4a55dbabbaa364df51df39_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_aecbb8384e4a55dbabbaa364df51df39_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_aecbb8384e4a55dbabbaa364df51df39_tuple, 1, const_str_plain_bus_name); Py_INCREF(const_str_plain_bus_name);
    PyTuple_SET_ITEM(const_tuple_aecbb8384e4a55dbabbaa364df51df39_tuple, 2, const_str_plain_object_path); Py_INCREF(const_str_plain_object_path);
    PyTuple_SET_ITEM(const_tuple_aecbb8384e4a55dbabbaa364df51df39_tuple, 3, const_str_plain_introspect); Py_INCREF(const_str_plain_introspect);
    PyTuple_SET_ITEM(const_tuple_aecbb8384e4a55dbabbaa364df51df39_tuple, 4, const_str_plain_kwargs); Py_INCREF(const_str_plain_kwargs);
    PyTuple_SET_ITEM(const_tuple_aecbb8384e4a55dbabbaa364df51df39_tuple, 5, const_str_plain_named_service); Py_INCREF(const_str_plain_named_service);
    PyTuple_SET_ITEM(const_tuple_aecbb8384e4a55dbabbaa364df51df39_tuple, 6, const_str_plain_warn); Py_INCREF(const_str_plain_warn);
    const_str_plain__slots = UNSTREAM_STRING_ASCII(&constant_bin[ 2643 ], 6, 1);
    const_str_plain__Connection = UNSTREAM_STRING_ASCII(&constant_bin[ 2698 ], 11, 1);
    const_str_digest_131bf54f9d136fafca15377302d118a7 = UNSTREAM_STRING_ASCII(&constant_bin[ 43408 ], 23, 0);
    const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple = PyTuple_New(17);
    PyTuple_SET_ITEM(const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple, 1, const_str_plain_bus_name); Py_INCREF(const_str_plain_bus_name);
    PyTuple_SET_ITEM(const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple, 2, const_str_plain_object_path); Py_INCREF(const_str_plain_object_path);
    PyTuple_SET_ITEM(const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple, 3, const_str_plain_dbus_interface); Py_INCREF(const_str_plain_dbus_interface);
    PyTuple_SET_ITEM(const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple, 4, const_str_plain_method); Py_INCREF(const_str_plain_method);
    PyTuple_SET_ITEM(const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple, 5, const_str_plain_signature); Py_INCREF(const_str_plain_signature);
    PyTuple_SET_ITEM(const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple, 6, const_str_plain_args); Py_INCREF(const_str_plain_args);
    PyTuple_SET_ITEM(const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple, 7, const_str_plain_reply_handler); Py_INCREF(const_str_plain_reply_handler);
    PyTuple_SET_ITEM(const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple, 8, const_str_plain_error_handler); Py_INCREF(const_str_plain_error_handler);
    PyTuple_SET_ITEM(const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple, 9, const_str_plain_timeout); Py_INCREF(const_str_plain_timeout);
    PyTuple_SET_ITEM(const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple, 10, const_str_plain_byte_arrays); Py_INCREF(const_str_plain_byte_arrays);
    PyTuple_SET_ITEM(const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple, 11, const_str_plain_require_main_loop); Py_INCREF(const_str_plain_require_main_loop);
    PyTuple_SET_ITEM(const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple, 12, const_str_plain_kwargs); Py_INCREF(const_str_plain_kwargs);
    const_str_plain_get_args_opts = UNSTREAM_STRING_ASCII(&constant_bin[ 43431 ], 13, 1);
    PyTuple_SET_ITEM(const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple, 13, const_str_plain_get_args_opts); Py_INCREF(const_str_plain_get_args_opts);
    PyTuple_SET_ITEM(const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple, 14, const_str_plain_message); Py_INCREF(const_str_plain_message);
    PyTuple_SET_ITEM(const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple, 15, const_str_plain_e); Py_INCREF(const_str_plain_e);
    const_str_plain_msg_reply_handler = UNSTREAM_STRING_ASCII(&constant_bin[ 43444 ], 17, 1);
    PyTuple_SET_ITEM(const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple, 16, const_str_plain_msg_reply_handler); Py_INCREF(const_str_plain_msg_reply_handler);
    const_tuple_float_minus_1_0_false_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_float_minus_1_0_false_tuple, 0, const_float_minus_1_0); Py_INCREF(const_float_minus_1_0);
    PyTuple_SET_ITEM(const_tuple_float_minus_1_0_false_tuple, 1, Py_False); Py_INCREF(Py_False);
    const_str_plain_get_sender = UNSTREAM_STRING_ASCII(&constant_bin[ 43461 ], 10, 1);
    const_str_digest_f5767631bc95611231d441939c67d7d1 = UNSTREAM_STRING_ASCII(&constant_bin[ 43471 ], 18, 0);
    const_tuple_38b05459305f0c4a6d3d430cd11ee6fd_tuple = PyTuple_New(13);
    PyTuple_SET_ITEM(const_tuple_38b05459305f0c4a6d3d430cd11ee6fd_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_38b05459305f0c4a6d3d430cd11ee6fd_tuple, 1, const_str_plain_handler_function); Py_INCREF(const_str_plain_handler_function);
    PyTuple_SET_ITEM(const_tuple_38b05459305f0c4a6d3d430cd11ee6fd_tuple, 2, const_str_plain_signal_name); Py_INCREF(const_str_plain_signal_name);
    PyTuple_SET_ITEM(const_tuple_38b05459305f0c4a6d3d430cd11ee6fd_tuple, 3, const_str_plain_dbus_interface); Py_INCREF(const_str_plain_dbus_interface);
    PyTuple_SET_ITEM(const_tuple_38b05459305f0c4a6d3d430cd11ee6fd_tuple, 4, const_str_plain_bus_name); Py_INCREF(const_str_plain_bus_name);
    PyTuple_SET_ITEM(const_tuple_38b05459305f0c4a6d3d430cd11ee6fd_tuple, 5, const_str_plain_path); Py_INCREF(const_str_plain_path);
    PyTuple_SET_ITEM(const_tuple_38b05459305f0c4a6d3d430cd11ee6fd_tuple, 6, const_str_plain_keywords); Py_INCREF(const_str_plain_keywords);
    PyTuple_SET_ITEM(const_tuple_38b05459305f0c4a6d3d430cd11ee6fd_tuple, 7, const_str_plain_named_service); Py_INCREF(const_str_plain_named_service);
    PyTuple_SET_ITEM(const_tuple_38b05459305f0c4a6d3d430cd11ee6fd_tuple, 8, const_str_plain_warn); Py_INCREF(const_str_plain_warn);
    PyTuple_SET_ITEM(const_tuple_38b05459305f0c4a6d3d430cd11ee6fd_tuple, 9, const_str_plain_match); Py_INCREF(const_str_plain_match);
    PyTuple_SET_ITEM(const_tuple_38b05459305f0c4a6d3d430cd11ee6fd_tuple, 10, const_str_plain_by_interface); Py_INCREF(const_str_plain_by_interface);
    PyTuple_SET_ITEM(const_tuple_38b05459305f0c4a6d3d430cd11ee6fd_tuple, 11, const_str_plain_by_member); Py_INCREF(const_str_plain_by_member);
    PyTuple_SET_ITEM(const_tuple_38b05459305f0c4a6d3d430cd11ee6fd_tuple, 12, const_str_plain_matches); Py_INCREF(const_str_plain_matches);
    const_str_digest_1f49e58c7fcf708010bb49332c34a06e = UNSTREAM_STRING_ASCII(&constant_bin[ 43489 ], 32, 0);
    const_str_digest_22c55462d9849f9debc8e24f1dd1ee36 = UNSTREAM_STRING_ASCII(&constant_bin[ 43521 ], 54, 0);
    const_str_plain_get_path = UNSTREAM_STRING_ASCII(&constant_bin[ 43575 ], 8, 1);
    const_str_digest_644b332e25c4adcb993444ee8a8734c8 = UNSTREAM_STRING_ASCII(&constant_bin[ 43583 ], 18, 0);
    const_dict_fa39376a70aae82cbbe318011f99e72b = _PyDict_NewPresized( 1 );
    PyDict_SetItem(const_dict_fa39376a70aae82cbbe318011f99e72b, const_str_plain_exc_info, const_int_pos_1);
    assert(PyDict_Size(const_dict_fa39376a70aae82cbbe318011f99e72b) == 1);
    const_str_digest_990e7924c862ae9c7b8a06ae44880838 = UNSTREAM_STRING_ASCII(&constant_bin[ 43601 ], 29, 0);
    const_tuple_str_digest_7ffb9ab03afd03351abea8dd52c5f3b0_tuple = PyTuple_New(1);
    const_str_digest_7ffb9ab03afd03351abea8dd52c5f3b0 = UNSTREAM_STRING_ASCII(&constant_bin[ 43630 ], 45, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_7ffb9ab03afd03351abea8dd52c5f3b0_tuple, 0, const_str_digest_7ffb9ab03afd03351abea8dd52c5f3b0); Py_INCREF(const_str_digest_7ffb9ab03afd03351abea8dd52c5f3b0);
    const_tuple_str_plain_arg_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_arg_tuple, 0, const_str_plain_arg); Py_INCREF(const_str_plain_arg);
    const_str_plain_send_message_with_reply_and_block = UNSTREAM_STRING_ASCII(&constant_bin[ 43675 ], 33, 1);
    const_str_plain_Lock = UNSTREAM_STRING_ASCII(&constant_bin[ 3013 ], 4, 1);
    const_str_digest_6e166361f0f2210b2fa06bad0b2ee4ff = UNSTREAM_STRING_ASCII(&constant_bin[ 43708 ], 45, 0);
    const_str_plain_reply_message = UNSTREAM_STRING_ASCII(&constant_bin[ 43753 ], 13, 1);
    const_str_plain_get_member = UNSTREAM_STRING_ASCII(&constant_bin[ 43766 ], 10, 1);
    const_str_digest_5039c5d6f11e98c474ba03bba31f5603 = UNSTREAM_STRING_ASCII(&constant_bin[ 43776 ], 48, 0);
    const_str_plain_destination = UNSTREAM_STRING_ASCII(&constant_bin[ 38465 ], 11, 1);
    const_str_digest_40b5de9f7bade852fc63482a83615549 = UNSTREAM_STRING_ASCII(&constant_bin[ 43824 ], 520, 0);
    const_str_digest_d5e31bc95a80dfad7a888c1d848d14c9 = UNSTREAM_STRING_ASCII(&constant_bin[ 43776 ], 21, 0);
    const_str_digest_eb26132551385f1349bb9090948fc44f = UNSTREAM_STRING_ASCII(&constant_bin[ 44344 ], 725, 0);
    const_tuple_str_plain_String_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_String_tuple, 0, const_str_plain_String); Py_INCREF(const_str_plain_String);
    const_str_plain_matches_removal_spec = UNSTREAM_STRING_ASCII(&constant_bin[ 45069 ], 20, 1);
    const_tuple_str_plain_is_py2_str_plain_is_py3_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_is_py2_str_plain_is_py3_tuple, 0, const_str_plain_is_py2); Py_INCREF(const_str_plain_is_py2);
    PyTuple_SET_ITEM(const_tuple_str_plain_is_py2_str_plain_is_py3_tuple, 1, const_str_plain_is_py3); Py_INCREF(const_str_plain_is_py3);
    const_tuple_a302f73bbf4e109503c9fcc6bf1cec22_tuple = PyTuple_New(15);
    PyTuple_SET_ITEM(const_tuple_a302f73bbf4e109503c9fcc6bf1cec22_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_a302f73bbf4e109503c9fcc6bf1cec22_tuple, 1, const_str_plain_bus_name); Py_INCREF(const_str_plain_bus_name);
    PyTuple_SET_ITEM(const_tuple_a302f73bbf4e109503c9fcc6bf1cec22_tuple, 2, const_str_plain_object_path); Py_INCREF(const_str_plain_object_path);
    PyTuple_SET_ITEM(const_tuple_a302f73bbf4e109503c9fcc6bf1cec22_tuple, 3, const_str_plain_dbus_interface); Py_INCREF(const_str_plain_dbus_interface);
    PyTuple_SET_ITEM(const_tuple_a302f73bbf4e109503c9fcc6bf1cec22_tuple, 4, const_str_plain_method); Py_INCREF(const_str_plain_method);
    PyTuple_SET_ITEM(const_tuple_a302f73bbf4e109503c9fcc6bf1cec22_tuple, 5, const_str_plain_signature); Py_INCREF(const_str_plain_signature);
    PyTuple_SET_ITEM(const_tuple_a302f73bbf4e109503c9fcc6bf1cec22_tuple, 6, const_str_plain_args); Py_INCREF(const_str_plain_args);
    PyTuple_SET_ITEM(const_tuple_a302f73bbf4e109503c9fcc6bf1cec22_tuple, 7, const_str_plain_timeout); Py_INCREF(const_str_plain_timeout);
    PyTuple_SET_ITEM(const_tuple_a302f73bbf4e109503c9fcc6bf1cec22_tuple, 8, const_str_plain_byte_arrays); Py_INCREF(const_str_plain_byte_arrays);
    PyTuple_SET_ITEM(const_tuple_a302f73bbf4e109503c9fcc6bf1cec22_tuple, 9, const_str_plain_kwargs); Py_INCREF(const_str_plain_kwargs);
    PyTuple_SET_ITEM(const_tuple_a302f73bbf4e109503c9fcc6bf1cec22_tuple, 10, const_str_plain_get_args_opts); Py_INCREF(const_str_plain_get_args_opts);
    PyTuple_SET_ITEM(const_tuple_a302f73bbf4e109503c9fcc6bf1cec22_tuple, 11, const_str_plain_message); Py_INCREF(const_str_plain_message);
    PyTuple_SET_ITEM(const_tuple_a302f73bbf4e109503c9fcc6bf1cec22_tuple, 12, const_str_plain_e); Py_INCREF(const_str_plain_e);
    PyTuple_SET_ITEM(const_tuple_a302f73bbf4e109503c9fcc6bf1cec22_tuple, 13, const_str_plain_reply_message); Py_INCREF(const_str_plain_reply_message);
    const_str_plain_args_list = UNSTREAM_STRING_ASCII(&constant_bin[ 42712 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_a302f73bbf4e109503c9fcc6bf1cec22_tuple, 14, const_str_plain_args_list); Py_INCREF(const_str_plain_args_list);
    const_str_digest_16e165df4d31d3e2e090145850dd908e = UNSTREAM_STRING_ASCII(&constant_bin[ 45089 ], 20, 0);
    const_str_digest_ff49df7389f60a431d8c23ca5bf6edc1 = UNSTREAM_STRING_ASCII(&constant_bin[ 45109 ], 24, 0);
    const_str_digest_4eaa951297de8a1bf1145439deb02376 = UNSTREAM_STRING_ASCII(&constant_bin[ 45133 ], 19, 0);
    const_str_digest_307bae81fd754079a49cf675f10e1993 = UNSTREAM_STRING_ASCII(&constant_bin[ 31569 ], 14, 0);
    const_str_digest_72ce1f4c98907301c1ceaeddd26c6b2c = UNSTREAM_STRING_ASCII(&constant_bin[ 45152 ], 10, 0);
    const_str_chr_44 = UNSTREAM_STRING_ASCII(&constant_bin[ 11094 ], 1, 0);
    const_tuple_str_digest_0b385b2a67f6700b8faf677cdd479207_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_0b385b2a67f6700b8faf677cdd479207_tuple, 0, const_str_digest_0b385b2a67f6700b8faf677cdd479207); Py_INCREF(const_str_digest_0b385b2a67f6700b8faf677cdd479207);
    const_tuple_str_plain_self_str_plain_other_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_other_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_other_tuple, 1, const_str_plain_other); Py_INCREF(const_str_plain_other);
    const_str_digest_954ade24ee8cd0ad248e9565302ef1ee = UNSTREAM_STRING_ASCII(&constant_bin[ 45162 ], 339, 0);
    const_tuple_str_plain__utf8_strings_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain__utf8_strings_tuple, 0, const_str_plain__utf8_strings); Py_INCREF(const_str_plain__utf8_strings);
    const_tuple_str_plain_self_str_plain_conn_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_conn_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_conn_tuple, 1, const_str_plain_conn); Py_INCREF(const_str_plain_conn);
    const_tuple_str_plain_utf8_strings_false_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_utf8_strings_false_tuple, 0, const_str_plain_utf8_strings); Py_INCREF(const_str_plain_utf8_strings);
    PyTuple_SET_ITEM(const_tuple_str_plain_utf8_strings_false_tuple, 1, Py_False); Py_INCREF(Py_False);
    const_str_plain_call_on_disconnection = UNSTREAM_STRING_ASCII(&constant_bin[ 43007 ], 21, 1);
    const_str_plain_remove_signal_receiver = UNSTREAM_STRING_ASCII(&constant_bin[ 42356 ], 22, 1);
    const_tuple_str_plain_ProxyObject_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_ProxyObject_tuple, 0, const_str_plain_ProxyObject); Py_INCREF(const_str_plain_ProxyObject);
    const_str_plain_maybe_handle_message = UNSTREAM_STRING_ASCII(&constant_bin[ 43501 ], 20, 1);
    const_tuple_d416af1fc944cf4bb33429e98e49a1af_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_d416af1fc944cf4bb33429e98e49a1af_tuple, 0, const_str_plain_Connection); Py_INCREF(const_str_plain_Connection);
    PyTuple_SET_ITEM(const_tuple_d416af1fc944cf4bb33429e98e49a1af_tuple, 1, const_str_plain_LOCAL_IFACE); Py_INCREF(const_str_plain_LOCAL_IFACE);
    PyTuple_SET_ITEM(const_tuple_d416af1fc944cf4bb33429e98e49a1af_tuple, 2, const_str_plain_LOCAL_PATH); Py_INCREF(const_str_plain_LOCAL_PATH);
    PyTuple_SET_ITEM(const_tuple_d416af1fc944cf4bb33429e98e49a1af_tuple, 3, const_str_plain_validate_bus_name); Py_INCREF(const_str_plain_validate_bus_name);
    PyTuple_SET_ITEM(const_tuple_d416af1fc944cf4bb33429e98e49a1af_tuple, 4, const_str_plain_validate_interface_name); Py_INCREF(const_str_plain_validate_interface_name);
    PyTuple_SET_ITEM(const_tuple_d416af1fc944cf4bb33429e98e49a1af_tuple, 5, const_str_plain_validate_member_name); Py_INCREF(const_str_plain_validate_member_name);
    PyTuple_SET_ITEM(const_tuple_d416af1fc944cf4bb33429e98e49a1af_tuple, 6, const_str_plain_validate_object_path); Py_INCREF(const_str_plain_validate_object_path);
    const_str_plain___eq__ = UNSTREAM_STRING_ASCII(&constant_bin[ 43483 ], 6, 1);
    const_str_plain_get_error_name = UNSTREAM_STRING_ASCII(&constant_bin[ 45501 ], 14, 1);
    const_str_digest_fa57831f05397508150ab2b9c37396e0 = UNSTREAM_STRING_ASCII(&constant_bin[ 45515 ], 53, 0);
    const_str_digest_7920b839bde551df3cfdb15a43838363 = UNSTREAM_STRING_ASCII(&constant_bin[ 45568 ], 32, 0);
    const_str_plain_ref = UNSTREAM_STRING_ASCII(&constant_bin[ 1767 ], 3, 1);
    const_str_digest_f5b4474ebb16be358363b71a6ea51f3c = UNSTREAM_STRING_ASCII(&constant_bin[ 45600 ], 37, 0);
    const_tuple_float_minus_1_0_false_true_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_float_minus_1_0_false_true_tuple, 0, const_float_minus_1_0); Py_INCREF(const_float_minus_1_0);
    PyTuple_SET_ITEM(const_tuple_float_minus_1_0_false_true_tuple, 1, Py_False); Py_INCREF(Py_False);
    PyTuple_SET_ITEM(const_tuple_float_minus_1_0_false_true_tuple, 2, Py_True); Py_INCREF(Py_True);
    const_tuple_5aba6155a9b31ed44c58c0dbba0e9644_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_5aba6155a9b31ed44c58c0dbba0e9644_tuple, 0, const_str_plain_message); Py_INCREF(const_str_plain_message);
    PyTuple_SET_ITEM(const_tuple_5aba6155a9b31ed44c58c0dbba0e9644_tuple, 1, const_str_plain_reply_handler); Py_INCREF(const_str_plain_reply_handler);
    PyTuple_SET_ITEM(const_tuple_5aba6155a9b31ed44c58c0dbba0e9644_tuple, 2, const_str_plain_get_args_opts); Py_INCREF(const_str_plain_get_args_opts);
    PyTuple_SET_ITEM(const_tuple_5aba6155a9b31ed44c58c0dbba0e9644_tuple, 3, const_str_plain_error_handler); Py_INCREF(const_str_plain_error_handler);
    const_str_digest_e90ef89bfbc28ba1c9bb66687160421f = UNSTREAM_STRING_ASCII(&constant_bin[ 45637 ], 20, 0);
    const_tuple_none_none_true_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_none_none_true_tuple, 0, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_none_none_true_tuple, 1, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_none_none_true_tuple, 2, Py_True); Py_INCREF(Py_True);
    const_str_plain__iter_easy_matches = UNSTREAM_STRING_ASCII(&constant_bin[ 43612 ], 18, 1);
    const_str_digest_062b9bbeb5779a728e3f5f602168f47b = UNSTREAM_STRING_ASCII(&constant_bin[ 45657 ], 19, 0);
    const_str_digest_53da925ba3defe32e6cd456822eb99d6 = UNSTREAM_STRING_ASCII(&constant_bin[ 45676 ], 117, 0);
    const_tuple_fc8897b5d0f2134569d7602f5579584b_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_fc8897b5d0f2134569d7602f5579584b_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_fc8897b5d0f2134569d7602f5579584b_tuple, 1, const_str_plain_message); Py_INCREF(const_str_plain_message);
    PyTuple_SET_ITEM(const_tuple_fc8897b5d0f2134569d7602f5579584b_tuple, 2, const_str_plain_dbus_interface); Py_INCREF(const_str_plain_dbus_interface);
    PyTuple_SET_ITEM(const_tuple_fc8897b5d0f2134569d7602f5579584b_tuple, 3, const_str_plain_path); Py_INCREF(const_str_plain_path);
    PyTuple_SET_ITEM(const_tuple_fc8897b5d0f2134569d7602f5579584b_tuple, 4, const_str_plain_signal_name); Py_INCREF(const_str_plain_signal_name);
    PyTuple_SET_ITEM(const_tuple_fc8897b5d0f2134569d7602f5579584b_tuple, 5, const_str_plain_match); Py_INCREF(const_str_plain_match);
    PyTuple_SET_ITEM(const_tuple_fc8897b5d0f2134569d7602f5579584b_tuple, 6, const_str_plain_cb); Py_INCREF(const_str_plain_cb);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dbus$connection(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_cda428083581ee5b8c30a169e930e589;
static PyCodeObject *codeobj_376c79685225b99b38d09389dcb44bac;
static PyCodeObject *codeobj_7a89301d6439cc9e6566842d02b1f1c4;
static PyCodeObject *codeobj_85f5fa26313b795a2ba0bae42676b298;
static PyCodeObject *codeobj_7bc6bf7f9cf38028fb04b1b8e5f618a6;
static PyCodeObject *codeobj_8ea34ed8c9e1290ec72c8cd29bb53fc8;
static PyCodeObject *codeobj_37e37f504aa86d187e5d96d54e35a712;
static PyCodeObject *codeobj_c898d5560a288b4adf9aa5b1feae4c3f;
static PyCodeObject *codeobj_2ab7159b0e31ec029895fe65f79da4a3;
static PyCodeObject *codeobj_da12f10289dd2eeb0ab3553a1f60d5fa;
static PyCodeObject *codeobj_0e5c46f17ccc82b5ffb80194a317e951;
static PyCodeObject *codeobj_ed9599c212a2988c857bece92bfba7b6;
static PyCodeObject *codeobj_7af7fde5304c2145e914f9c2ea1d918d;
static PyCodeObject *codeobj_4d932a93aae442bed3f757ccda9f2e02;
static PyCodeObject *codeobj_826a485ba3c74a1bf4bd3b209729047b;
static PyCodeObject *codeobj_64db21804276df5d3760e9a9ec7eb247;
static PyCodeObject *codeobj_ce825c7f59298df340a60da106b7952a;
static PyCodeObject *codeobj_0be60a15d8f8f81494ee5f7eb63e26c4;
static PyCodeObject *codeobj_40e205e91014c06f56a6a0b1cd7e7d12;
static PyCodeObject *codeobj_9b36703e83bf3859b102ba7bfd018540;
static PyCodeObject *codeobj_75adc9e672425825ca0bef11e2c1ce90;
static PyCodeObject *codeobj_c1c49a5d7c5750b24daeda81197116fd;
static PyCodeObject *codeobj_b4c3f10847f8692def70a08653dd09f0;
static PyCodeObject *codeobj_296840a3f85410d5df3a8627237686ea;
static PyCodeObject *codeobj_bdb308e31fd3165ea921ee20e54ad4b4;
static PyCodeObject *codeobj_dd6b94a191afb736f3a09d001196f04c;
static PyCodeObject *codeobj_f1d12664db29e81d36b687bb97892dce;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_fa57831f05397508150ab2b9c37396e0;
    codeobj_cda428083581ee5b8c30a169e930e589 = MAKE_CODEOBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_angle_lambda, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_376c79685225b99b38d09389dcb44bac = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_6b2b5af1315bca5fde04d93771dac361, const_tuple_empty, 0, 0, 0);
    codeobj_7a89301d6439cc9e6566842d02b1f1c4 = MAKE_CODEOBJECT(module_filename_obj, 250, CO_NOFREE, const_str_plain_Connection, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_85f5fa26313b795a2ba0bae42676b298 = MAKE_CODEOBJECT(module_filename_obj, 55, CO_NOFREE, const_str_plain_SignalMatch, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_7bc6bf7f9cf38028fb04b1b8e5f618a6 = MAKE_CODEOBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___eq__, const_tuple_str_plain_self_str_plain_other_tuple, 2, 0, 0);
    codeobj_8ea34ed8c9e1290ec72c8cd29bb53fc8 = MAKE_CODEOBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___hash__, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_37e37f504aa86d187e5d96d54e35a712 = MAKE_CODEOBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, const_str_plain___init__, const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, 1, 0, 0);
    codeobj_c898d5560a288b4adf9aa5b1feae4c3f = MAKE_CODEOBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain___init__, const_tuple_e9e082cb161d4827f352d03b5f98da0d_tuple, 14, 0, 0);
    codeobj_2ab7159b0e31ec029895fe65f79da4a3 = MAKE_CODEOBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___ne__, const_tuple_str_plain_self_str_plain_other_tuple, 2, 0, 0);
    codeobj_da12f10289dd2eeb0ab3553a1f60d5fa = MAKE_CODEOBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___repr__, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_0e5c46f17ccc82b5ffb80194a317e951 = MAKE_CODEOBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___str__, const_tuple_3435f55fa404ee8740aae1f2dc9af6c4_tuple, 1, 0, 0);
    codeobj_ed9599c212a2988c857bece92bfba7b6 = MAKE_CODEOBJECT(module_filename_obj, 519, CO_NOFREE, const_str_plain__clean_up_signal_match, const_tuple_str_plain_self_str_plain_match_tuple, 2, 0, 0);
    codeobj_7af7fde5304c2145e914f9c2ea1d918d = MAKE_CODEOBJECT(module_filename_obj, 431, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__iter_easy_matches, const_tuple_cdb3a5972de45ca32aa7d890f52d2d03_tuple, 4, 0, 0);
    codeobj_4d932a93aae442bed3f757ccda9f2e02 = MAKE_CODEOBJECT(module_filename_obj, 51, CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain__noop, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, 0, 0);
    codeobj_826a485ba3c74a1bf4bd3b209729047b = MAKE_CODEOBJECT(module_filename_obj, 523, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__signal_func, const_tuple_fc8897b5d0f2134569d7602f5579584b_tuple, 2, 0, 0);
    codeobj_64db21804276df5d3760e9a9ec7eb247 = MAKE_CODEOBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_activate_name_owner, const_tuple_str_plain_self_str_plain_bus_name_tuple, 2, 0, 0);
    codeobj_ce825c7f59298df340a60da106b7952a = MAKE_CODEOBJECT(module_filename_obj, 331, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_add_signal_receiver, const_tuple_38b05459305f0c4a6d3d430cd11ee6fd_tuple, 6, 0, 0);
    codeobj_0be60a15d8f8f81494ee5f7eb63e26c4 = MAKE_CODEOBJECT(module_filename_obj, 553, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_call_async, const_tuple_9ee6cb8d6a5e0716fedc5c80655ffdfa_tuple, 12, 0, 0);
    codeobj_40e205e91014c06f56a6a0b1cd7e7d12 = MAKE_CODEOBJECT(module_filename_obj, 617, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_call_blocking, const_tuple_a302f73bbf4e109503c9fcc6bf1cec22_tuple, 9, 0, 0);
    codeobj_9b36703e83bf3859b102ba7bfd018540 = MAKE_CODEOBJECT(module_filename_obj, 662, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_call_on_disconnection, const_tuple_str_plain_self_str_plain_callable_tuple, 2, 0, 0);
    codeobj_75adc9e672425825ca0bef11e2c1ce90 = MAKE_CODEOBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_get_object, const_tuple_aecbb8384e4a55dbabbaa364df51df39_tuple, 4, 0, 0);
    codeobj_c1c49a5d7c5750b24daeda81197116fd = MAKE_CODEOBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_matches_removal_spec, const_tuple_d03c807aba646c52cfd9516daf17b016_tuple, 6, 0, 0);
    codeobj_b4c3f10847f8692def70a08653dd09f0 = MAKE_CODEOBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_maybe_handle_message, const_tuple_61b14c2923c0e816385890a647facfdb_tuple, 2, 0, 0);
    codeobj_296840a3f85410d5df3a8627237686ea = MAKE_CODEOBJECT(module_filename_obj, 604, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_msg_reply_handler, const_tuple_5aba6155a9b31ed44c58c0dbba0e9644_tuple, 1, 0, 0);
    codeobj_bdb308e31fd3165ea921ee20e54ad4b4 = MAKE_CODEOBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_remove, const_tuple_str_plain_self_str_plain_conn_tuple, 1, 0, 0);
    codeobj_dd6b94a191afb736f3a09d001196f04c = MAKE_CODEOBJECT(module_filename_obj, 460, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_remove_signal_receiver, const_tuple_e1e86e8f5fdae08190635d0bc6872745_tuple, 6, 0, 0);
    codeobj_f1d12664db29e81d36b687bb97892dce = MAKE_CODEOBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_set_sender_name_owner, const_tuple_str_plain_self_str_plain_new_name_tuple, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_dbus$connection$$$function_17__iter_easy_matches$$$genobj_1__iter_easy_matches(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_9_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_10_complex_call_helper_keywords_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_2_complex_call_helper_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_10_matches_removal_spec();


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_11_maybe_handle_message();


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_12_remove();


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_13___init__();


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_14_activate_name_owner();


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_15_get_object(PyObject *defaults);


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_16_add_signal_receiver(PyObject *defaults);


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_17__iter_easy_matches();


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_18_remove_signal_receiver(PyObject *defaults);


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_19__clean_up_signal_match();


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_1__noop();


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_20__signal_func();


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_21_call_async(PyObject *defaults);


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_21_call_async$$$function_1_msg_reply_handler(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_22_call_blocking(PyObject *defaults);


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_23_call_on_disconnection();


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_2___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_3___hash__();


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_4___eq__();


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_5___ne__();


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_6_lambda();


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_7___str__();


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_8___repr__();


static PyObject *MAKE_FUNCTION_dbus$connection$$$function_9_set_sender_name_owner();


// The module function definitions.
static PyObject *impl_dbus$connection$$$function_2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_conn = python_pars[1];
    PyObject *par_sender = python_pars[2];
    PyObject *par_object_path = python_pars[3];
    PyObject *par_dbus_interface = python_pars[4];
    PyObject *par_member = python_pars[5];
    PyObject *par_handler = python_pars[6];
    PyObject *par_byte_arrays = python_pars[7];
    PyObject *par_sender_keyword = python_pars[8];
    PyObject *par_path_keyword = python_pars[9];
    PyObject *par_interface_keyword = python_pars[10];
    PyObject *par_member_keyword = python_pars[11];
    PyObject *par_message_keyword = python_pars[12];
    PyObject *par_destination_keyword = python_pars[13];
    PyObject *par_kwargs = python_pars[14];
    PyObject *var_kwarg = NULL;
    PyObject *var_index = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_c898d5560a288b4adf9aa5b1feae4c3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_c898d5560a288b4adf9aa5b1feae4c3f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c898d5560a288b4adf9aa5b1feae4c3f)) {
        Py_XDECREF(cache_frame_c898d5560a288b4adf9aa5b1feae4c3f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c898d5560a288b4adf9aa5b1feae4c3f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c898d5560a288b4adf9aa5b1feae4c3f = MAKE_FUNCTION_FRAME(codeobj_c898d5560a288b4adf9aa5b1feae4c3f, module_dbus$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c898d5560a288b4adf9aa5b1feae4c3f->m_type_description == NULL);
    frame_c898d5560a288b4adf9aa5b1feae4c3f = cache_frame_c898d5560a288b4adf9aa5b1feae4c3f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c898d5560a288b4adf9aa5b1feae4c3f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c898d5560a288b4adf9aa5b1feae4c3f) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_member);
        tmp_compexpr_left_1 = par_member;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_validate_member_name);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_validate_member_name);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2063 ], 42, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_member);
        tmp_args_element_name_1 = par_member;
        frame_c898d5560a288b4adf9aa5b1feae4c3f->m_frame.f_lineno = 74;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_dbus_interface);
        tmp_compexpr_left_2 = par_dbus_interface;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_validate_interface_name);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_validate_interface_name);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2105 ], 45, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT(par_dbus_interface);
        tmp_args_element_name_2 = par_dbus_interface;
        frame_c898d5560a288b4adf9aa5b1feae4c3f->m_frame.f_lineno = 76;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(par_sender);
        tmp_compexpr_left_3 = par_sender;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_validate_bus_name);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_validate_bus_name);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1508 ], 39, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT(par_sender);
        tmp_args_element_name_3 = par_sender;
        frame_c898d5560a288b4adf9aa5b1feae4c3f->m_frame.f_lineno = 78;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(par_object_path);
        tmp_compexpr_left_4 = par_object_path;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_compexpr_left_4 != tmp_compexpr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_validate_object_path);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_validate_object_path);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2150 ], 42, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT(par_object_path);
        tmp_args_element_name_4 = par_object_path;
        frame_c898d5560a288b4adf9aa5b1feae4c3f->m_frame.f_lineno = 80;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_4:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__rule, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_weakref);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_weakref);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1757 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_5;
        CHECK_OBJECT(par_conn);
        tmp_args_element_name_5 = par_conn;
        frame_c898d5560a288b4adf9aa5b1feae4c3f->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_name_5};
            tmp_assattr_name_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_ref, call_args);
        }

        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__conn_weakref, tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_sender);
        tmp_assattr_name_3 = par_sender;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__sender, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_dbus_interface);
        tmp_assattr_name_4 = par_dbus_interface;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__interface, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_member);
        tmp_assattr_name_5 = par_member;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain__member, tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_object_path);
        tmp_assattr_name_6 = par_object_path;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain__path, tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_handler);
        tmp_assattr_name_7 = par_handler;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, const_str_plain__handler, tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_sender);
        tmp_assattr_name_8 = par_sender;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, const_str_plain__sender_name_owner, tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_mvar_value_6;
        int tmp_truth_name_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_is_py2);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py2);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 886 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_6);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_kwargs);
        tmp_called_instance_2 = par_kwargs;
        frame_c898d5560a288b4adf9aa5b1feae4c3f->m_frame.f_lineno = 95;
        tmp_assattr_name_9 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM(const_tuple_str_plain_utf8_strings_false_tuple, 0));

        if (tmp_assattr_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, const_str_plain__utf8_strings, tmp_assattr_name_9);
        Py_DECREF(tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        tmp_compexpr_left_5 = const_str_plain_utf8_strings;
        CHECK_OBJECT(par_kwargs);
        tmp_compexpr_right_5 = par_kwargs;
        tmp_res = PySequence_Contains(tmp_compexpr_right_5, tmp_compexpr_left_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_b33fe442635e40c9a18b9f06913c7a8a;
        frame_c898d5560a288b4adf9aa5b1feae4c3f->m_frame.f_lineno = 97;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 97;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    branch_end_5:;
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_byte_arrays);
        tmp_assattr_name_10 = par_byte_arrays;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, const_str_plain__byte_arrays, tmp_assattr_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_sender_keyword);
        tmp_assattr_name_11 = par_sender_keyword;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, const_str_plain__sender_keyword, tmp_assattr_name_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_path_keyword);
        tmp_assattr_name_12 = par_path_keyword;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, const_str_plain__path_keyword, tmp_assattr_name_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(par_member_keyword);
        tmp_assattr_name_13 = par_member_keyword;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, const_str_plain__member_keyword, tmp_assattr_name_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT(par_interface_keyword);
        tmp_assattr_name_14 = par_interface_keyword;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, const_str_plain__interface_keyword, tmp_assattr_name_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_15;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT(par_message_keyword);
        tmp_assattr_name_15 = par_message_keyword;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, const_str_plain__message_keyword, tmp_assattr_name_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_16;
        PyObject *tmp_assattr_target_16;
        CHECK_OBJECT(par_destination_keyword);
        tmp_assattr_name_16 = par_destination_keyword;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, const_str_plain__destination_keyword, tmp_assattr_name_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_17;
        PyObject *tmp_assattr_target_17;
        CHECK_OBJECT(par_kwargs);
        tmp_assattr_name_17 = par_kwargs;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, const_str_plain__args_match, tmp_assattr_name_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_kwargs);
        tmp_operand_name_1 = par_kwargs;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assattr_name_18;
        PyObject *tmp_assattr_target_18;
        tmp_assattr_name_18 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, const_str_plain__int_args_match, tmp_assattr_name_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assattr_name_19;
        PyObject *tmp_assattr_target_19;
        tmp_assattr_name_19 = PyDict_New();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_19 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, const_str_plain__int_args_match, tmp_assattr_name_19);
        Py_DECREF(tmp_assattr_name_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_kwargs);
        tmp_iter_arg_1 = par_kwargs;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooo";
                exception_lineno = 112;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_kwarg;
            var_kwarg = tmp_assign_source_3;
            Py_INCREF(var_kwarg);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_kwarg);
        tmp_called_instance_3 = var_kwarg;
        frame_c898d5560a288b4adf9aa5b1feae4c3f->m_frame.f_lineno = 113;
        tmp_operand_name_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_startswith, &PyTuple_GET_ITEM(const_tuple_str_plain_arg_tuple, 0));

        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_str_digest_ac3201d50833e8ded685786b7767c7ee;
        CHECK_OBJECT(var_kwarg);
        tmp_right_name_1 = var_kwarg;
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_c898d5560a288b4adf9aa5b1feae4c3f->m_frame.f_lineno = 114;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 114;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto try_except_handler_2;
    }
    branch_no_8:;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(var_kwarg);
        tmp_expression_name_1 = var_kwarg;
        tmp_subscript_name_1 = const_slice_int_pos_3_none_none;
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_4 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_c898d5560a288b4adf9aa5b1feae4c3f, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_c898d5560a288b4adf9aa5b1feae4c3f, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_6 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_6, tmp_compexpr_right_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_left_name_2 = const_str_digest_ac3201d50833e8ded685786b7767c7ee;
        CHECK_OBJECT(var_kwarg);
        tmp_right_name_2 = var_kwarg;
        tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_c898d5560a288b4adf9aa5b1feae4c3f->m_frame.f_lineno = 119;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 119;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto branch_end_9;
    branch_no_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 116;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c898d5560a288b4adf9aa5b1feae4c3f->m_frame) frame_c898d5560a288b4adf9aa5b1feae4c3f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_4;
    branch_end_9:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_tmp_or_left_value_1_object_1;
        int tmp_truth_name_2;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_tmp_or_right_value_1_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_index);
        tmp_compexpr_left_7 = var_index;
        tmp_compexpr_right_7 = const_int_0;
        tmp_tmp_or_left_value_1_object_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
        if (tmp_tmp_or_left_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_or_left_value_1_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_left_value_1_object_1);

            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_or_left_value_1_object_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_index);
        tmp_compexpr_left_8 = var_index;
        tmp_compexpr_right_8 = const_int_pos_63;
        tmp_tmp_or_right_value_1_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        if (tmp_tmp_or_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_or_right_value_1_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_right_value_1_object_1);

            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_or_right_value_1_object_1);
        tmp_condition_result_10 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_10 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        tmp_left_name_3 = const_str_digest_2dbb7e749db4c4c0e353c297fe1b2ff8;
        CHECK_OBJECT(var_index);
        tmp_right_name_3 = var_index;
        tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_3);
        if (tmp_make_exception_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_c898d5560a288b4adf9aa5b1feae4c3f->m_frame.f_lineno = 122;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_4);
        Py_DECREF(tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 122;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto try_except_handler_2;
    }
    branch_no_10:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_name_2 = par_kwargs;
        CHECK_OBJECT(var_kwarg);
        tmp_subscript_name_2 = var_kwarg;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain__int_args_match);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_ass_subscript_1 = var_index;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 112;
        type_description_1 = "ooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    branch_end_7:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c898d5560a288b4adf9aa5b1feae4c3f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c898d5560a288b4adf9aa5b1feae4c3f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c898d5560a288b4adf9aa5b1feae4c3f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c898d5560a288b4adf9aa5b1feae4c3f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c898d5560a288b4adf9aa5b1feae4c3f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c898d5560a288b4adf9aa5b1feae4c3f,
        type_description_1,
        par_self,
        par_conn,
        par_sender,
        par_object_path,
        par_dbus_interface,
        par_member,
        par_handler,
        par_byte_arrays,
        par_sender_keyword,
        par_path_keyword,
        par_interface_keyword,
        par_member_keyword,
        par_message_keyword,
        par_destination_keyword,
        par_kwargs,
        var_kwarg,
        var_index
    );


    // Release cached frame.
    if (frame_c898d5560a288b4adf9aa5b1feae4c3f == cache_frame_c898d5560a288b4adf9aa5b1feae4c3f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_c898d5560a288b4adf9aa5b1feae4c3f);
    }
    cache_frame_c898d5560a288b4adf9aa5b1feae4c3f = NULL;

    assertFrameObject(frame_c898d5560a288b4adf9aa5b1feae4c3f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_kwarg);
    var_kwarg = NULL;

    Py_XDECREF(var_index);
    var_index = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_kwarg);
    var_kwarg = NULL;

    Py_XDECREF(var_index);
    var_index = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_conn);
    Py_DECREF(par_conn);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    CHECK_OBJECT(par_object_path);
    Py_DECREF(par_object_path);
    CHECK_OBJECT(par_dbus_interface);
    Py_DECREF(par_dbus_interface);
    CHECK_OBJECT(par_member);
    Py_DECREF(par_member);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);
    CHECK_OBJECT(par_byte_arrays);
    Py_DECREF(par_byte_arrays);
    CHECK_OBJECT(par_sender_keyword);
    Py_DECREF(par_sender_keyword);
    CHECK_OBJECT(par_path_keyword);
    Py_DECREF(par_path_keyword);
    CHECK_OBJECT(par_interface_keyword);
    Py_DECREF(par_interface_keyword);
    CHECK_OBJECT(par_member_keyword);
    Py_DECREF(par_member_keyword);
    CHECK_OBJECT(par_message_keyword);
    Py_DECREF(par_message_keyword);
    CHECK_OBJECT(par_destination_keyword);
    Py_DECREF(par_destination_keyword);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_conn);
    Py_DECREF(par_conn);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    CHECK_OBJECT(par_object_path);
    Py_DECREF(par_object_path);
    CHECK_OBJECT(par_dbus_interface);
    Py_DECREF(par_dbus_interface);
    CHECK_OBJECT(par_member);
    Py_DECREF(par_member);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);
    CHECK_OBJECT(par_byte_arrays);
    Py_DECREF(par_byte_arrays);
    CHECK_OBJECT(par_sender_keyword);
    Py_DECREF(par_sender_keyword);
    CHECK_OBJECT(par_path_keyword);
    Py_DECREF(par_path_keyword);
    CHECK_OBJECT(par_interface_keyword);
    Py_DECREF(par_interface_keyword);
    CHECK_OBJECT(par_member_keyword);
    Py_DECREF(par_member_keyword);
    CHECK_OBJECT(par_message_keyword);
    Py_DECREF(par_message_keyword);
    CHECK_OBJECT(par_destination_keyword);
    Py_DECREF(par_destination_keyword);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_3___hash__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8ea34ed8c9e1290ec72c8cd29bb53fc8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8ea34ed8c9e1290ec72c8cd29bb53fc8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8ea34ed8c9e1290ec72c8cd29bb53fc8)) {
        Py_XDECREF(cache_frame_8ea34ed8c9e1290ec72c8cd29bb53fc8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8ea34ed8c9e1290ec72c8cd29bb53fc8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8ea34ed8c9e1290ec72c8cd29bb53fc8 = MAKE_FUNCTION_FRAME(codeobj_8ea34ed8c9e1290ec72c8cd29bb53fc8, module_dbus$connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8ea34ed8c9e1290ec72c8cd29bb53fc8->m_type_description == NULL);
    frame_8ea34ed8c9e1290ec72c8cd29bb53fc8 = cache_frame_8ea34ed8c9e1290ec72c8cd29bb53fc8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8ea34ed8c9e1290ec72c8cd29bb53fc8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8ea34ed8c9e1290ec72c8cd29bb53fc8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_hash_arg_1;
        PyObject *tmp_id_arg_1;
        CHECK_OBJECT(par_self);
        tmp_id_arg_1 = par_self;
        tmp_hash_arg_1 = PyLong_FromVoidPtr(tmp_id_arg_1);
        assert(!(tmp_hash_arg_1 == NULL));
        tmp_return_value = BUILTIN_HASH(tmp_hash_arg_1);
        Py_DECREF(tmp_hash_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8ea34ed8c9e1290ec72c8cd29bb53fc8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8ea34ed8c9e1290ec72c8cd29bb53fc8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8ea34ed8c9e1290ec72c8cd29bb53fc8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8ea34ed8c9e1290ec72c8cd29bb53fc8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8ea34ed8c9e1290ec72c8cd29bb53fc8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8ea34ed8c9e1290ec72c8cd29bb53fc8, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8ea34ed8c9e1290ec72c8cd29bb53fc8,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_8ea34ed8c9e1290ec72c8cd29bb53fc8 == cache_frame_8ea34ed8c9e1290ec72c8cd29bb53fc8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_8ea34ed8c9e1290ec72c8cd29bb53fc8);
    }
    cache_frame_8ea34ed8c9e1290ec72c8cd29bb53fc8 = NULL;

    assertFrameObject(frame_8ea34ed8c9e1290ec72c8cd29bb53fc8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_4___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_self);
        tmp_compexpr_left_1 = par_self;
        CHECK_OBJECT(par_other);
        tmp_compexpr_right_1 = par_other;
        tmp_return_value = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_5___ne__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_self);
        tmp_compexpr_left_1 = par_self;
        CHECK_OBJECT(par_other);
        tmp_compexpr_right_1 = par_other;
        tmp_return_value = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_6_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_cda428083581ee5b8c30a169e930e589;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cda428083581ee5b8c30a169e930e589 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cda428083581ee5b8c30a169e930e589)) {
        Py_XDECREF(cache_frame_cda428083581ee5b8c30a169e930e589);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cda428083581ee5b8c30a169e930e589 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cda428083581ee5b8c30a169e930e589 = MAKE_FUNCTION_FRAME(codeobj_cda428083581ee5b8c30a169e930e589, module_dbus$connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cda428083581ee5b8c30a169e930e589->m_type_description == NULL);
    frame_cda428083581ee5b8c30a169e930e589 = cache_frame_cda428083581ee5b8c30a169e930e589;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cda428083581ee5b8c30a169e930e589);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cda428083581ee5b8c30a169e930e589) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain__sender);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cda428083581ee5b8c30a169e930e589);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cda428083581ee5b8c30a169e930e589);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cda428083581ee5b8c30a169e930e589);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cda428083581ee5b8c30a169e930e589, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cda428083581ee5b8c30a169e930e589->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cda428083581ee5b8c30a169e930e589, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cda428083581ee5b8c30a169e930e589,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_cda428083581ee5b8c30a169e930e589 == cache_frame_cda428083581ee5b8c30a169e930e589) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_cda428083581ee5b8c30a169e930e589);
    }
    cache_frame_cda428083581ee5b8c30a169e930e589 = NULL;

    assertFrameObject(frame_cda428083581ee5b8c30a169e930e589);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_7___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_rule = NULL;
    PyObject *var_index = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_0e5c46f17ccc82b5ffb80194a317e951;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
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
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0e5c46f17ccc82b5ffb80194a317e951 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0e5c46f17ccc82b5ffb80194a317e951)) {
        Py_XDECREF(cache_frame_0e5c46f17ccc82b5ffb80194a317e951);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0e5c46f17ccc82b5ffb80194a317e951 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0e5c46f17ccc82b5ffb80194a317e951 = MAKE_FUNCTION_FRAME(codeobj_0e5c46f17ccc82b5ffb80194a317e951, module_dbus$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0e5c46f17ccc82b5ffb80194a317e951->m_type_description == NULL);
    frame_0e5c46f17ccc82b5ffb80194a317e951 = cache_frame_0e5c46f17ccc82b5ffb80194a317e951;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0e5c46f17ccc82b5ffb80194a317e951);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0e5c46f17ccc82b5ffb80194a317e951) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain__rule);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = LIST_COPY(const_list_str_digest_c2813bae0d65e83b922b794002512c0b_list);
        assert(var_rule == NULL);
        var_rule = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain__sender);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(var_rule);
        tmp_expression_name_3 = var_rule;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_append);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = const_str_digest_d9a5ce35dbca00931f07f4dfc504dcc3;
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain__sender);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 144;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 144;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_0e5c46f17ccc82b5ffb80194a317e951->m_frame.f_lineno = 144;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_expression_name_5;
        CHECK_OBJECT(par_self);
        tmp_expression_name_5 = par_self;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain__path);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(var_rule);
        tmp_expression_name_6 = var_rule;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain_append);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = const_str_digest_a91bb9ffa08867931472582c8927c265;
        CHECK_OBJECT(par_self);
        tmp_expression_name_7 = par_self;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain__path);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 146;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 146;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_0e5c46f17ccc82b5ffb80194a317e951->m_frame.f_lineno = 146;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_expression_name_8;
        CHECK_OBJECT(par_self);
        tmp_expression_name_8 = par_self;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain__interface);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_compexpr_left_4 != tmp_compexpr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_expression_name_10;
        CHECK_OBJECT(var_rule);
        tmp_expression_name_9 = var_rule;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, const_str_plain_append);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = const_str_digest_307bae81fd754079a49cf675f10e1993;
        CHECK_OBJECT(par_self);
        tmp_expression_name_10 = par_self;
        tmp_right_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, const_str_plain__interface);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 148;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 148;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_0e5c46f17ccc82b5ffb80194a317e951->m_frame.f_lineno = 148;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_expression_name_11;
        CHECK_OBJECT(par_self);
        tmp_expression_name_11 = par_self;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, const_str_plain__member);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_5 = (tmp_compexpr_left_5 != tmp_compexpr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_expression_name_13;
        CHECK_OBJECT(var_rule);
        tmp_expression_name_12 = var_rule;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, const_str_plain_append);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = const_str_digest_04b1ff123cad6f73888c606ac96d4d82;
        CHECK_OBJECT(par_self);
        tmp_expression_name_13 = par_self;
        tmp_right_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, const_str_plain__member);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_0e5c46f17ccc82b5ffb80194a317e951->m_frame.f_lineno = 150;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_expression_name_14;
        CHECK_OBJECT(par_self);
        tmp_expression_name_14 = par_self;
        tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, const_str_plain__int_args_match);
        if (tmp_compexpr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_6 = (tmp_compexpr_left_6 != tmp_compexpr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_15;
        CHECK_OBJECT(par_self);
        tmp_expression_name_15 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, const_str_plain__int_args_match);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_0e5c46f17ccc82b5ffb80194a317e951->m_frame.f_lineno = 152;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_items);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 152;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 152;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 152;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooo";
                    exception_lineno = 152;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = const_str_digest_fcf040720b88d60da4ce975010c44a3a;
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 152;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_7;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_8;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_rule);
        tmp_expression_name_16 = var_rule;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, const_str_plain_append);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_left_name_5 = const_str_digest_72ce1f4c98907301c1ceaeddd26c6b2c;
        CHECK_OBJECT(var_index);
        tmp_tuple_element_1 = var_index;
        tmp_right_name_5 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_right_name_5, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_value);
        tmp_tuple_element_1 = var_value;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_right_name_5, 1, tmp_tuple_element_1);
        tmp_args_element_name_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_right_name_5);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 153;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_0e5c46f17ccc82b5ffb80194a317e951->m_frame.f_lineno = 153;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 152;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    branch_no_6:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_2 = const_str_chr_44;
        CHECK_OBJECT(var_rule);
        tmp_args_element_name_6 = var_rule;
        frame_0e5c46f17ccc82b5ffb80194a317e951->m_frame.f_lineno = 155;
        {
            PyObject *call_args[] = {tmp_args_element_name_6};
            tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_join, call_args);
        }

        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__rule, tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_name_17;
        CHECK_OBJECT(par_self);
        tmp_expression_name_17 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_17, const_str_plain__rule);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0e5c46f17ccc82b5ffb80194a317e951);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0e5c46f17ccc82b5ffb80194a317e951);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0e5c46f17ccc82b5ffb80194a317e951);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0e5c46f17ccc82b5ffb80194a317e951, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0e5c46f17ccc82b5ffb80194a317e951->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0e5c46f17ccc82b5ffb80194a317e951, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0e5c46f17ccc82b5ffb80194a317e951,
        type_description_1,
        par_self,
        var_rule,
        var_index,
        var_value
    );


    // Release cached frame.
    if (frame_0e5c46f17ccc82b5ffb80194a317e951 == cache_frame_0e5c46f17ccc82b5ffb80194a317e951) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_0e5c46f17ccc82b5ffb80194a317e951);
    }
    cache_frame_0e5c46f17ccc82b5ffb80194a317e951 = NULL;

    assertFrameObject(frame_0e5c46f17ccc82b5ffb80194a317e951);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_rule);
    var_rule = NULL;

    Py_XDECREF(var_index);
    var_index = NULL;

    Py_XDECREF(var_value);
    var_value = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_rule);
    var_rule = NULL;

    Py_XDECREF(var_index);
    var_index = NULL;

    Py_XDECREF(var_value);
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_8___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_da12f10289dd2eeb0ab3553a1f60d5fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_da12f10289dd2eeb0ab3553a1f60d5fa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_da12f10289dd2eeb0ab3553a1f60d5fa)) {
        Py_XDECREF(cache_frame_da12f10289dd2eeb0ab3553a1f60d5fa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da12f10289dd2eeb0ab3553a1f60d5fa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da12f10289dd2eeb0ab3553a1f60d5fa = MAKE_FUNCTION_FRAME(codeobj_da12f10289dd2eeb0ab3553a1f60d5fa, module_dbus$connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_da12f10289dd2eeb0ab3553a1f60d5fa->m_type_description == NULL);
    frame_da12f10289dd2eeb0ab3553a1f60d5fa = cache_frame_da12f10289dd2eeb0ab3553a1f60d5fa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_da12f10289dd2eeb0ab3553a1f60d5fa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_da12f10289dd2eeb0ab3553a1f60d5fa) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_id_arg_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_called_instance_1;
        tmp_left_name_1 = const_str_digest_ee63cf22393c9e4d2db480dd3294e538;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = PyTuple_New(4);
        PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_id_arg_1 = par_self;
        tmp_tuple_element_1 = PyLong_FromVoidPtr(tmp_id_arg_1);
        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain__rule);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_1);

            exception_lineno = 161;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_right_name_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_da12f10289dd2eeb0ab3553a1f60d5fa->m_frame.f_lineno = 161;
        tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain__conn_weakref);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_1);

            exception_lineno = 161;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_right_name_1, 3, tmp_tuple_element_1);
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_da12f10289dd2eeb0ab3553a1f60d5fa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_da12f10289dd2eeb0ab3553a1f60d5fa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_da12f10289dd2eeb0ab3553a1f60d5fa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da12f10289dd2eeb0ab3553a1f60d5fa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da12f10289dd2eeb0ab3553a1f60d5fa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da12f10289dd2eeb0ab3553a1f60d5fa, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da12f10289dd2eeb0ab3553a1f60d5fa,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_da12f10289dd2eeb0ab3553a1f60d5fa == cache_frame_da12f10289dd2eeb0ab3553a1f60d5fa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_da12f10289dd2eeb0ab3553a1f60d5fa);
    }
    cache_frame_da12f10289dd2eeb0ab3553a1f60d5fa = NULL;

    assertFrameObject(frame_da12f10289dd2eeb0ab3553a1f60d5fa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_9_set_sender_name_owner(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_new_name = python_pars[1];
    struct Nuitka_FrameObject *frame_f1d12664db29e81d36b687bb97892dce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f1d12664db29e81d36b687bb97892dce = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f1d12664db29e81d36b687bb97892dce)) {
        Py_XDECREF(cache_frame_f1d12664db29e81d36b687bb97892dce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f1d12664db29e81d36b687bb97892dce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f1d12664db29e81d36b687bb97892dce = MAKE_FUNCTION_FRAME(codeobj_f1d12664db29e81d36b687bb97892dce, module_dbus$connection, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f1d12664db29e81d36b687bb97892dce->m_type_description == NULL);
    frame_f1d12664db29e81d36b687bb97892dce = cache_frame_f1d12664db29e81d36b687bb97892dce;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f1d12664db29e81d36b687bb97892dce);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f1d12664db29e81d36b687bb97892dce) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_new_name);
        tmp_assattr_name_1 = par_new_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__sender_name_owner, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f1d12664db29e81d36b687bb97892dce);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f1d12664db29e81d36b687bb97892dce);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f1d12664db29e81d36b687bb97892dce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f1d12664db29e81d36b687bb97892dce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f1d12664db29e81d36b687bb97892dce, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f1d12664db29e81d36b687bb97892dce,
        type_description_1,
        par_self,
        par_new_name
    );


    // Release cached frame.
    if (frame_f1d12664db29e81d36b687bb97892dce == cache_frame_f1d12664db29e81d36b687bb97892dce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_f1d12664db29e81d36b687bb97892dce);
    }
    cache_frame_f1d12664db29e81d36b687bb97892dce = NULL;

    assertFrameObject(frame_f1d12664db29e81d36b687bb97892dce);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_new_name);
    Py_DECREF(par_new_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_new_name);
    Py_DECREF(par_new_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_10_matches_removal_spec(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    PyObject *par_object_path = python_pars[2];
    PyObject *par_dbus_interface = python_pars[3];
    PyObject *par_member = python_pars[4];
    PyObject *par_handler = python_pars[5];
    PyObject *par_kwargs = python_pars[6];
    struct Nuitka_FrameObject *frame_c1c49a5d7c5750b24daeda81197116fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c1c49a5d7c5750b24daeda81197116fd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c1c49a5d7c5750b24daeda81197116fd)) {
        Py_XDECREF(cache_frame_c1c49a5d7c5750b24daeda81197116fd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c1c49a5d7c5750b24daeda81197116fd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c1c49a5d7c5750b24daeda81197116fd = MAKE_FUNCTION_FRAME(codeobj_c1c49a5d7c5750b24daeda81197116fd, module_dbus$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c1c49a5d7c5750b24daeda81197116fd->m_type_description == NULL);
    frame_c1c49a5d7c5750b24daeda81197116fd = cache_frame_c1c49a5d7c5750b24daeda81197116fd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c1c49a5d7c5750b24daeda81197116fd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c1c49a5d7c5750b24daeda81197116fd) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_handler);
        tmp_compexpr_left_1 = par_handler;
        tmp_tuple_element_1 = Py_None;
        tmp_compexpr_right_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_compexpr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain__handler);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_right_1);

            exception_lineno = 168;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_compexpr_right_1, 1, tmp_tuple_element_1);
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_sender);
        tmp_compexpr_left_2 = par_sender;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain__sender);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(par_object_path);
        tmp_compexpr_left_3 = par_object_path;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain__path);
        if (tmp_compexpr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(par_dbus_interface);
        tmp_compexpr_left_4 = par_dbus_interface;
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain__interface);
        if (tmp_compexpr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_expression_name_5;
        CHECK_OBJECT(par_member);
        tmp_compexpr_left_5 = par_member;
        CHECK_OBJECT(par_self);
        tmp_expression_name_5 = par_self;
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain__member);
        if (tmp_compexpr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_expression_name_6;
        CHECK_OBJECT(par_kwargs);
        tmp_compexpr_left_6 = par_kwargs;
        CHECK_OBJECT(par_self);
        tmp_expression_name_6 = par_self;
        tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain__args_match);
        if (tmp_compexpr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        Py_DECREF(tmp_compexpr_right_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_6:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c1c49a5d7c5750b24daeda81197116fd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c1c49a5d7c5750b24daeda81197116fd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c1c49a5d7c5750b24daeda81197116fd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c1c49a5d7c5750b24daeda81197116fd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c1c49a5d7c5750b24daeda81197116fd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c1c49a5d7c5750b24daeda81197116fd, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c1c49a5d7c5750b24daeda81197116fd,
        type_description_1,
        par_self,
        par_sender,
        par_object_path,
        par_dbus_interface,
        par_member,
        par_handler,
        par_kwargs
    );


    // Release cached frame.
    if (frame_c1c49a5d7c5750b24daeda81197116fd == cache_frame_c1c49a5d7c5750b24daeda81197116fd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_c1c49a5d7c5750b24daeda81197116fd);
    }
    cache_frame_c1c49a5d7c5750b24daeda81197116fd = NULL;

    assertFrameObject(frame_c1c49a5d7c5750b24daeda81197116fd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    CHECK_OBJECT(par_object_path);
    Py_DECREF(par_object_path);
    CHECK_OBJECT(par_dbus_interface);
    Py_DECREF(par_dbus_interface);
    CHECK_OBJECT(par_member);
    Py_DECREF(par_member);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    CHECK_OBJECT(par_object_path);
    Py_DECREF(par_object_path);
    CHECK_OBJECT(par_dbus_interface);
    Py_DECREF(par_dbus_interface);
    CHECK_OBJECT(par_member);
    Py_DECREF(par_member);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_11_maybe_handle_message(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_message = python_pars[1];
    PyObject *var_args = NULL;
    PyObject *var_kwargs = NULL;
    PyObject *var_arg_type = NULL;
    PyObject *var_index = NULL;
    PyObject *var_value = NULL;
    PyObject *var_utf8_strings = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b4c3f10847f8692def70a08653dd09f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_iterator_attempt;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_b4c3f10847f8692def70a08653dd09f0 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_args == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_args = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_b4c3f10847f8692def70a08653dd09f0)) {
        Py_XDECREF(cache_frame_b4c3f10847f8692def70a08653dd09f0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b4c3f10847f8692def70a08653dd09f0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b4c3f10847f8692def70a08653dd09f0 = MAKE_FUNCTION_FRAME(codeobj_b4c3f10847f8692def70a08653dd09f0, module_dbus$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b4c3f10847f8692def70a08653dd09f0->m_type_description == NULL);
    frame_b4c3f10847f8692def70a08653dd09f0 = cache_frame_b4c3f10847f8692def70a08653dd09f0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b4c3f10847f8692def70a08653dd09f0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b4c3f10847f8692def70a08653dd09f0) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain__sender_name_owner);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = Py_None;
        tmp_compexpr_right_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_compexpr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_message);
        tmp_called_instance_1 = par_message;
        frame_b4c3f10847f8692def70a08653dd09f0->m_frame.f_lineno = 186;
        tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_get_sender);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);
            Py_DECREF(tmp_compexpr_right_1);

            exception_lineno = 186;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_compexpr_right_1, 1, tmp_tuple_element_1);
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain__int_args_match);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyDict_Copy(const_dict_6b01ff05994e5b5fdab9ae8957bfc16c);
        assert(var_kwargs == NULL);
        var_kwargs = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_is_py3);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py3);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2192 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_String);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_String);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2220 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_3 = tmp_mvar_value_2;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_UTF8String);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_UTF8String);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2248 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_3 = tmp_mvar_value_3;
        condexpr_end_1:;
        assert(var_arg_type == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_arg_type = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_mvar_value_4;
        int tmp_truth_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_is_py2);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py2);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 886 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_4);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_dictset_value = Py_True;
    CHECK_OBJECT(var_kwargs);
    tmp_dictset_dict = var_kwargs;
    tmp_dictset_key = const_str_plain_utf8_strings;
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
    assert(!(tmp_res != 0));
    branch_no_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT(par_message);
        tmp_expression_name_3 = par_message;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_get_args_list);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg2_1 = var_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_4 = impl___internal__$$$function_9_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_args;
            assert(old != NULL);
            var_args = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain__int_args_match);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_b4c3f10847f8692def70a08653dd09f0->m_frame.f_lineno = 195;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_items);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 195;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 195;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 195;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooo";
                    exception_lineno = 195;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = const_str_digest_fcf040720b88d60da4ce975010c44a3a;
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 195;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_10;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_11;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_or_left_value_1_object_1;
        int tmp_truth_name_3;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(var_index);
        tmp_compexpr_left_3 = var_index;
        CHECK_OBJECT(var_args);
        tmp_len_arg_1 = var_args;
        tmp_compexpr_right_3 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_tmp_or_left_value_1_object_1 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_right_3);
        if (tmp_tmp_or_left_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_or_left_value_1_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_left_value_1_object_1);

            exception_lineno = 196;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_value_1 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_or_left_value_1_object_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_args);
        tmp_expression_name_5 = var_args;
        CHECK_OBJECT(var_index);
        tmp_subscript_name_1 = var_index;
        tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_1);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_arg_type);
        tmp_isinstance_cls_1 = var_arg_type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(var_args);
        tmp_expression_name_6 = var_args;
        CHECK_OBJECT(var_index);
        tmp_subscript_name_2 = var_index;
        tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_2);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_value);
        tmp_compexpr_right_4 = var_value;
        tmp_or_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_condition_result_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_5 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_4:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 195;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_self);
        tmp_expression_name_7 = par_self;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain__member);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = Py_None;
        tmp_compexpr_right_5 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_compexpr_right_5, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_message);
        tmp_called_instance_3 = par_message;
        frame_b4c3f10847f8692def70a08653dd09f0->m_frame.f_lineno = 202;
        tmp_tuple_element_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_get_member);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_5);
            Py_DECREF(tmp_compexpr_right_5);

            exception_lineno = 202;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_compexpr_right_5, 1, tmp_tuple_element_2);
        tmp_res = PySequence_Contains(tmp_compexpr_right_5, tmp_compexpr_left_5);
        Py_DECREF(tmp_compexpr_left_5);
        Py_DECREF(tmp_compexpr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(par_self);
        tmp_expression_name_8 = par_self;
        tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain__interface);
        if (tmp_compexpr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = Py_None;
        tmp_compexpr_right_6 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_compexpr_right_6, 0, tmp_tuple_element_3);
        CHECK_OBJECT(par_message);
        tmp_called_instance_4 = par_message;
        frame_b4c3f10847f8692def70a08653dd09f0->m_frame.f_lineno = 204;
        tmp_tuple_element_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_get_interface);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_6);
            Py_DECREF(tmp_compexpr_right_6);

            exception_lineno = 204;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_compexpr_right_6, 1, tmp_tuple_element_3);
        tmp_res = PySequence_Contains(tmp_compexpr_right_6, tmp_compexpr_left_6);
        Py_DECREF(tmp_compexpr_left_6);
        Py_DECREF(tmp_compexpr_right_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(par_self);
        tmp_expression_name_9 = par_self;
        tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, const_str_plain__path);
        if (tmp_compexpr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = Py_None;
        tmp_compexpr_right_7 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_compexpr_right_7, 0, tmp_tuple_element_4);
        CHECK_OBJECT(par_message);
        tmp_called_instance_5 = par_message;
        frame_b4c3f10847f8692def70a08653dd09f0->m_frame.f_lineno = 206;
        tmp_tuple_element_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, const_str_plain_get_path);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_7);
            Py_DECREF(tmp_compexpr_right_7);

            exception_lineno = 206;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_compexpr_right_7, 1, tmp_tuple_element_4);
        tmp_res = PySequence_Contains(tmp_compexpr_right_7, tmp_compexpr_left_7);
        Py_DECREF(tmp_compexpr_left_7);
        Py_DECREF(tmp_compexpr_right_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_7:;
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_expression_name_10;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_is_py2);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py2);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 886 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }

        tmp_and_left_value_1 = tmp_mvar_value_5;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_name_10 = par_self;
        tmp_and_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, const_str_plain__utf8_strings);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_12 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_assign_source_12 = tmp_and_left_value_1;
        and_end_1:;
        assert(var_utf8_strings == NULL);
        var_utf8_strings = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        int tmp_or_left_truth_4;
        nuitka_bool tmp_or_left_value_4;
        nuitka_bool tmp_or_right_value_4;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_expression_name_11;
        CHECK_OBJECT(var_args);
        tmp_compexpr_left_8 = var_args;
        tmp_compexpr_right_8 = Py_None;
        tmp_or_left_value_3 = (tmp_compexpr_left_8 == tmp_compexpr_right_8) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        CHECK_OBJECT(var_utf8_strings);
        tmp_operand_name_2 = var_utf8_strings;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_or_left_value_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_4 = tmp_or_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        CHECK_OBJECT(par_self);
        tmp_expression_name_11 = par_self;
        tmp_operand_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, const_str_plain__byte_arrays);
        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_or_right_value_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_right_value_3 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_or_right_value_3 = tmp_or_left_value_4;
        or_end_4:;
        tmp_condition_result_9 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_condition_result_9 = tmp_or_left_value_3;
        or_end_3:;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_12;
        tmp_dict_key_1 = const_str_plain_byte_arrays;
        CHECK_OBJECT(par_self);
        tmp_expression_name_12 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, const_str_plain__byte_arrays);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_13 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        {
            PyObject *old = var_kwargs;
            var_kwargs = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_mvar_value_6;
        int tmp_truth_name_4;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_is_py2);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py2);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 886 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }

        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_mvar_value_6);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_10 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_expression_name_13;
        CHECK_OBJECT(par_self);
        tmp_expression_name_13 = par_self;
        tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_name_13, const_str_plain__utf8_strings);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_kwargs);
        tmp_dictset_dict = var_kwargs;
        tmp_dictset_key = const_str_plain_utf8_strings;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    branch_no_9:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_dircall_arg2_2;
        CHECK_OBJECT(par_message);
        tmp_expression_name_14 = par_message;
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, const_str_plain_get_args_list);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg2_2 = var_kwargs;
        Py_INCREF(tmp_dircall_arg2_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_assign_source_14 = impl___internal__$$$function_9_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_args;
            assert(old != NULL);
            var_args = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = PyDict_New();
        {
            PyObject *old = var_kwargs;
            var_kwargs = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_expression_name_15;
        CHECK_OBJECT(par_self);
        tmp_expression_name_15 = par_self;
        tmp_compexpr_left_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, const_str_plain__sender_keyword);
        if (tmp_compexpr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_9 = Py_None;
        tmp_condition_result_11 = (tmp_compexpr_left_9 != tmp_compexpr_right_9) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_9);
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_name_16;
        CHECK_OBJECT(par_message);
        tmp_called_instance_6 = par_message;
        frame_b4c3f10847f8692def70a08653dd09f0->m_frame.f_lineno = 221;
        tmp_dictset_value = CALL_METHOD_NO_ARGS(tmp_called_instance_6, const_str_plain_get_sender);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_kwargs);
        tmp_dictset_dict = var_kwargs;
        CHECK_OBJECT(par_self);
        tmp_expression_name_16 = par_self;
        tmp_dictset_key = LOOKUP_ATTRIBUTE(tmp_expression_name_16, const_str_plain__sender_keyword);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dictset_value);

            exception_lineno = 221;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
    }
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_expression_name_17;
        CHECK_OBJECT(par_self);
        tmp_expression_name_17 = par_self;
        tmp_compexpr_left_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, const_str_plain__destination_keyword);
        if (tmp_compexpr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_10 = Py_None;
        tmp_condition_result_12 = (tmp_compexpr_left_10 != tmp_compexpr_right_10) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_10);
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_name_18;
        CHECK_OBJECT(par_message);
        tmp_called_instance_7 = par_message;
        frame_b4c3f10847f8692def70a08653dd09f0->m_frame.f_lineno = 223;
        tmp_dictset_value = CALL_METHOD_NO_ARGS(tmp_called_instance_7, const_str_plain_get_destination);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_kwargs);
        tmp_dictset_dict = var_kwargs;
        CHECK_OBJECT(par_self);
        tmp_expression_name_18 = par_self;
        tmp_dictset_key = LOOKUP_ATTRIBUTE(tmp_expression_name_18, const_str_plain__destination_keyword);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dictset_value);

            exception_lineno = 223;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
    }
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_expression_name_19;
        CHECK_OBJECT(par_self);
        tmp_expression_name_19 = par_self;
        tmp_compexpr_left_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, const_str_plain__path_keyword);
        if (tmp_compexpr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_11 = Py_None;
        tmp_condition_result_13 = (tmp_compexpr_left_11 != tmp_compexpr_right_11) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_11);
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_expression_name_20;
        CHECK_OBJECT(par_message);
        tmp_called_instance_8 = par_message;
        frame_b4c3f10847f8692def70a08653dd09f0->m_frame.f_lineno = 225;
        tmp_dictset_value = CALL_METHOD_NO_ARGS(tmp_called_instance_8, const_str_plain_get_path);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_kwargs);
        tmp_dictset_dict = var_kwargs;
        CHECK_OBJECT(par_self);
        tmp_expression_name_20 = par_self;
        tmp_dictset_key = LOOKUP_ATTRIBUTE(tmp_expression_name_20, const_str_plain__path_keyword);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dictset_value);

            exception_lineno = 225;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
    }
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        PyObject *tmp_expression_name_21;
        CHECK_OBJECT(par_self);
        tmp_expression_name_21 = par_self;
        tmp_compexpr_left_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, const_str_plain__member_keyword);
        if (tmp_compexpr_left_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_12 = Py_None;
        tmp_condition_result_14 = (tmp_compexpr_left_12 != tmp_compexpr_right_12) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_12);
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_name_22;
        CHECK_OBJECT(par_message);
        tmp_called_instance_9 = par_message;
        frame_b4c3f10847f8692def70a08653dd09f0->m_frame.f_lineno = 227;
        tmp_dictset_value = CALL_METHOD_NO_ARGS(tmp_called_instance_9, const_str_plain_get_member);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_kwargs);
        tmp_dictset_dict = var_kwargs;
        CHECK_OBJECT(par_self);
        tmp_expression_name_22 = par_self;
        tmp_dictset_key = LOOKUP_ATTRIBUTE(tmp_expression_name_22, const_str_plain__member_keyword);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dictset_value);

            exception_lineno = 227;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        PyObject *tmp_expression_name_23;
        CHECK_OBJECT(par_self);
        tmp_expression_name_23 = par_self;
        tmp_compexpr_left_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, const_str_plain__interface_keyword);
        if (tmp_compexpr_left_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_13 = Py_None;
        tmp_condition_result_15 = (tmp_compexpr_left_13 != tmp_compexpr_right_13) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_13);
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_expression_name_24;
        CHECK_OBJECT(par_message);
        tmp_called_instance_10 = par_message;
        frame_b4c3f10847f8692def70a08653dd09f0->m_frame.f_lineno = 229;
        tmp_dictset_value = CALL_METHOD_NO_ARGS(tmp_called_instance_10, const_str_plain_get_interface);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_kwargs);
        tmp_dictset_dict = var_kwargs;
        CHECK_OBJECT(par_self);
        tmp_expression_name_24 = par_self;
        tmp_dictset_key = LOOKUP_ATTRIBUTE(tmp_expression_name_24, const_str_plain__interface_keyword);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dictset_value);

            exception_lineno = 229;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
    }
    branch_no_14:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        PyObject *tmp_expression_name_25;
        CHECK_OBJECT(par_self);
        tmp_expression_name_25 = par_self;
        tmp_compexpr_left_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, const_str_plain__message_keyword);
        if (tmp_compexpr_left_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_14 = Py_None;
        tmp_condition_result_16 = (tmp_compexpr_left_14 != tmp_compexpr_right_14) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_14);
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_expression_name_26;
        CHECK_OBJECT(par_message);
        tmp_dictset_value = par_message;
        CHECK_OBJECT(var_kwargs);
        tmp_dictset_dict = var_kwargs;
        CHECK_OBJECT(par_self);
        tmp_expression_name_26 = par_self;
        tmp_dictset_key = LOOKUP_ATTRIBUTE(tmp_expression_name_26, const_str_plain__message_keyword);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
    }
    branch_no_15:;
    {
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_dircall_arg2_3;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_27 = par_self;
        tmp_dircall_arg1_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, const_str_plain__handler);
        if (tmp_dircall_arg1_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        if (var_args == NULL) {
            Py_DECREF(tmp_dircall_arg1_3);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "args");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 232;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }

        tmp_dircall_arg2_3 = var_args;
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg3_1 = var_kwargs;
        Py_INCREF(tmp_dircall_arg2_3);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___internal__$$$function_5_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_b4c3f10847f8692def70a08653dd09f0, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_b4c3f10847f8692def70a08653dd09f0, exception_keeper_lineno_4);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_4, exception_keeper_tb_4);
    PUBLISH_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    // Tried code:
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_call_result_2;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_logging);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_logging);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1699 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 235;
            type_description_1 = "oooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_11 = tmp_mvar_value_7;
        frame_b4c3f10847f8692def70a08653dd09f0->m_frame.f_lineno = 235;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, const_str_plain_basicConfig);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain__logger);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__logger);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1728 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 236;
            type_description_1 = "oooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_name_28 = tmp_mvar_value_8;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, const_str_plain_error);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooo";
            goto try_except_handler_6;
        }
        tmp_args_name_1 = const_tuple_str_digest_92c87af39d8e4a7d9ab2f36abe4ecb94_tuple;
        tmp_kw_name_1 = PyDict_Copy(const_dict_fa39376a70aae82cbbe318011f99e72b);
        frame_b4c3f10847f8692def70a08653dd09f0->m_frame.f_lineno = 236;
        tmp_call_result_3 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto try_end_4;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b4c3f10847f8692def70a08653dd09f0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b4c3f10847f8692def70a08653dd09f0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b4c3f10847f8692def70a08653dd09f0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b4c3f10847f8692def70a08653dd09f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b4c3f10847f8692def70a08653dd09f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b4c3f10847f8692def70a08653dd09f0, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b4c3f10847f8692def70a08653dd09f0,
        type_description_1,
        par_self,
        par_message,
        var_args,
        var_kwargs,
        var_arg_type,
        var_index,
        var_value,
        var_utf8_strings
    );


    // Release cached frame.
    if (frame_b4c3f10847f8692def70a08653dd09f0 == cache_frame_b4c3f10847f8692def70a08653dd09f0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_b4c3f10847f8692def70a08653dd09f0);
    }
    cache_frame_b4c3f10847f8692def70a08653dd09f0 = NULL;

    assertFrameObject(frame_b4c3f10847f8692def70a08653dd09f0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_args);
    var_args = NULL;

    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;

    Py_XDECREF(var_arg_type);
    var_arg_type = NULL;

    Py_XDECREF(var_index);
    var_index = NULL;

    Py_XDECREF(var_value);
    var_value = NULL;

    Py_XDECREF(var_utf8_strings);
    var_utf8_strings = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_args);
    var_args = NULL;

    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;

    Py_XDECREF(var_arg_type);
    var_arg_type = NULL;

    Py_XDECREF(var_index);
    var_index = NULL;

    Py_XDECREF(var_value);
    var_value = NULL;

    Py_XDECREF(var_utf8_strings);
    var_utf8_strings = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_12_remove(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_conn = NULL;
    struct Nuitka_FrameObject *frame_bdb308e31fd3165ea921ee20e54ad4b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_bdb308e31fd3165ea921ee20e54ad4b4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bdb308e31fd3165ea921ee20e54ad4b4)) {
        Py_XDECREF(cache_frame_bdb308e31fd3165ea921ee20e54ad4b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bdb308e31fd3165ea921ee20e54ad4b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bdb308e31fd3165ea921ee20e54ad4b4 = MAKE_FUNCTION_FRAME(codeobj_bdb308e31fd3165ea921ee20e54ad4b4, module_dbus$connection, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bdb308e31fd3165ea921ee20e54ad4b4->m_type_description == NULL);
    frame_bdb308e31fd3165ea921ee20e54ad4b4 = cache_frame_bdb308e31fd3165ea921ee20e54ad4b4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bdb308e31fd3165ea921ee20e54ad4b4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bdb308e31fd3165ea921ee20e54ad4b4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_bdb308e31fd3165ea921ee20e54ad4b4->m_frame.f_lineno = 241;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain__conn_weakref);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_conn == NULL);
        var_conn = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_conn);
        tmp_compexpr_left_1 = var_conn;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_conn);
        tmp_expression_name_1 = var_conn;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_remove_signal_receiver);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_dircall_arg2_1 = PyTuple_New(5);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain__member);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain__interface);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 245;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain__sender);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 245;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_expression_name_5 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain__path);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 246;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 4, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_expression_name_6 = par_self;
        tmp_dircall_arg3_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain__args_match);
        if (tmp_dircall_arg3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 247;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bdb308e31fd3165ea921ee20e54ad4b4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bdb308e31fd3165ea921ee20e54ad4b4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bdb308e31fd3165ea921ee20e54ad4b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bdb308e31fd3165ea921ee20e54ad4b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bdb308e31fd3165ea921ee20e54ad4b4, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bdb308e31fd3165ea921ee20e54ad4b4,
        type_description_1,
        par_self,
        var_conn
    );


    // Release cached frame.
    if (frame_bdb308e31fd3165ea921ee20e54ad4b4 == cache_frame_bdb308e31fd3165ea921ee20e54ad4b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_bdb308e31fd3165ea921ee20e54ad4b4);
    }
    cache_frame_bdb308e31fd3165ea921ee20e54ad4b4 = NULL;

    assertFrameObject(frame_bdb308e31fd3165ea921ee20e54ad4b4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_conn);
    Py_DECREF(var_conn);
    var_conn = NULL;

    goto function_return_exit;
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

    Py_XDECREF(var_conn);
    var_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_13___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_37e37f504aa86d187e5d96d54e35a712;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_37e37f504aa86d187e5d96d54e35a712 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_37e37f504aa86d187e5d96d54e35a712)) {
        Py_XDECREF(cache_frame_37e37f504aa86d187e5d96d54e35a712);

#if _DEBUG_REFCOUNTS
        if (cache_frame_37e37f504aa86d187e5d96d54e35a712 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_37e37f504aa86d187e5d96d54e35a712 = MAKE_FUNCTION_FRAME(codeobj_37e37f504aa86d187e5d96d54e35a712, module_dbus$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_37e37f504aa86d187e5d96d54e35a712->m_type_description == NULL);
    frame_37e37f504aa86d187e5d96d54e35a712 = cache_frame_37e37f504aa86d187e5d96d54e35a712;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_37e37f504aa86d187e5d96d54e35a712);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_37e37f504aa86d187e5d96d54e35a712) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_Connection);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Connection);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1897 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 260;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_expression_name_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain___init__);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___internal__$$$function_5_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_attribute_name_1 = const_str_plain__dbus_Connection_initialized;
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_2, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = const_int_pos_1;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__dbus_Connection_initialized, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__Connection__call_on_disconnection, tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = PyDict_New();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__signal_recipients_by_object_path, tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_assattr_target_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_threading);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_threading);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2280 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 273;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        frame_37e37f504aa86d187e5d96d54e35a712->m_frame.f_lineno = 273;
        tmp_assattr_name_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_Lock);
        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__signals_lock, tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_add_message_filter);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_5 = par_self;
        tmp_expression_name_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_5);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 276;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain__signal_func);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 276;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_37e37f504aa86d187e5d96d54e35a712->m_frame.f_lineno = 276;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_37e37f504aa86d187e5d96d54e35a712);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_37e37f504aa86d187e5d96d54e35a712);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_37e37f504aa86d187e5d96d54e35a712, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_37e37f504aa86d187e5d96d54e35a712->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_37e37f504aa86d187e5d96d54e35a712, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_37e37f504aa86d187e5d96d54e35a712,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        NULL
    );


    // Release cached frame.
    if (frame_37e37f504aa86d187e5d96d54e35a712 == cache_frame_37e37f504aa86d187e5d96d54e35a712) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_37e37f504aa86d187e5d96d54e35a712);
    }
    cache_frame_37e37f504aa86d187e5d96d54e35a712 = NULL;

    assertFrameObject(frame_37e37f504aa86d187e5d96d54e35a712);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_14_activate_name_owner(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bus_name = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_bus_name);
    tmp_return_value = par_bus_name;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bus_name);
    Py_DECREF(par_bus_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_15_get_object(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bus_name = python_pars[1];
    PyObject *par_object_path = python_pars[2];
    PyObject *par_introspect = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    PyObject *var_named_service = NULL;
    PyObject *var_warn = NULL;
    struct Nuitka_FrameObject *frame_75adc9e672425825ca0bef11e2c1ce90;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_75adc9e672425825ca0bef11e2c1ce90 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_75adc9e672425825ca0bef11e2c1ce90)) {
        Py_XDECREF(cache_frame_75adc9e672425825ca0bef11e2c1ce90);

#if _DEBUG_REFCOUNTS
        if (cache_frame_75adc9e672425825ca0bef11e2c1ce90 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_75adc9e672425825ca0bef11e2c1ce90 = MAKE_FUNCTION_FRAME(codeobj_75adc9e672425825ca0bef11e2c1ce90, module_dbus$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_75adc9e672425825ca0bef11e2c1ce90->m_type_description == NULL);
    frame_75adc9e672425825ca0bef11e2c1ce90 = cache_frame_75adc9e672425825ca0bef11e2c1ce90;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_75adc9e672425825ca0bef11e2c1ce90);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_75adc9e672425825ca0bef11e2c1ce90) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_kwargs);
        tmp_called_instance_1 = par_kwargs;
        frame_75adc9e672425825ca0bef11e2c1ce90->m_frame.f_lineno = 314;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM(const_tuple_str_plain_named_service_none_tuple, 0));

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_named_service == NULL);
        var_named_service = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_named_service);
        tmp_compexpr_left_1 = var_named_service;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_bus_name);
        tmp_compexpr_left_2 = par_bus_name;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_6090a95f7b926ecd6061b143b7cad52f;
        frame_75adc9e672425825ca0bef11e2c1ce90->m_frame.f_lineno = 317;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 317;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_warnings;
        tmp_globals_name_1 = (PyObject *)moduledict_dbus$connection;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_warn_tuple;
        tmp_level_name_1 = const_int_0;
        frame_75adc9e672425825ca0bef11e2c1ce90->m_frame.f_lineno = 319;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_warn,
                const_int_0
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_warn);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_warn == NULL);
        var_warn = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(var_warn);
        tmp_called_name_1 = var_warn;
        tmp_tuple_element_1 = const_str_digest_4289e46f026bf0dd92edd4764f9ca580;
        tmp_args_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_DeprecationWarning);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning);
        }

        if (tmp_mvar_value_1 == NULL) {
            Py_DECREF(tmp_args_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1786 ], 40, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 322;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(const_dict_f154c9a58c9419d7e391901d7b7fe49e);
        frame_75adc9e672425825ca0bef11e2c1ce90->m_frame.f_lineno = 320;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(var_named_service);
        tmp_assign_source_3 = var_named_service;
        {
            PyObject *old = par_bus_name;
            assert(old != NULL);
            par_bus_name = tmp_assign_source_3;
            Py_INCREF(par_bus_name);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_kwargs);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_kwargs);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_2;
        tmp_left_name_1 = const_str_digest_3cc8fcb05b60f7b9437930cdc441ce30;
        tmp_expression_name_1 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_join);
        assert(!(tmp_called_name_2 == NULL));
        CHECK_OBJECT(par_kwargs);
        tmp_called_instance_2 = par_kwargs;
        frame_75adc9e672425825ca0bef11e2c1ce90->m_frame.f_lineno = 326;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_keys);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 326;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_75adc9e672425825ca0bef11e2c1ce90->m_frame.f_lineno = 326;
        tmp_right_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_75adc9e672425825ca0bef11e2c1ce90->m_frame.f_lineno = 325;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 325;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_ProxyObjectClass);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_tuple_element_2 = par_self;
        tmp_args_name_2 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_bus_name);
        tmp_tuple_element_2 = par_bus_name;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_object_path);
        tmp_tuple_element_2 = par_object_path;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_2);
        tmp_dict_key_1 = const_str_plain_introspect;
        CHECK_OBJECT(par_introspect);
        tmp_dict_value_1 = par_introspect;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_75adc9e672425825ca0bef11e2c1ce90->m_frame.f_lineno = 328;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_75adc9e672425825ca0bef11e2c1ce90);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_75adc9e672425825ca0bef11e2c1ce90);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_75adc9e672425825ca0bef11e2c1ce90);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_75adc9e672425825ca0bef11e2c1ce90, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_75adc9e672425825ca0bef11e2c1ce90->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_75adc9e672425825ca0bef11e2c1ce90, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_75adc9e672425825ca0bef11e2c1ce90,
        type_description_1,
        par_self,
        par_bus_name,
        par_object_path,
        par_introspect,
        par_kwargs,
        var_named_service,
        var_warn
    );


    // Release cached frame.
    if (frame_75adc9e672425825ca0bef11e2c1ce90 == cache_frame_75adc9e672425825ca0bef11e2c1ce90) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_75adc9e672425825ca0bef11e2c1ce90);
    }
    cache_frame_75adc9e672425825ca0bef11e2c1ce90 = NULL;

    assertFrameObject(frame_75adc9e672425825ca0bef11e2c1ce90);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_bus_name);
    Py_DECREF(par_bus_name);
    par_bus_name = NULL;

    CHECK_OBJECT(var_named_service);
    Py_DECREF(var_named_service);
    var_named_service = NULL;

    Py_XDECREF(var_warn);
    var_warn = NULL;

    goto function_return_exit;
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

    Py_XDECREF(par_bus_name);
    par_bus_name = NULL;

    Py_XDECREF(var_named_service);
    var_named_service = NULL;

    Py_XDECREF(var_warn);
    var_warn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_object_path);
    Py_DECREF(par_object_path);
    CHECK_OBJECT(par_introspect);
    Py_DECREF(par_introspect);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_object_path);
    Py_DECREF(par_object_path);
    CHECK_OBJECT(par_introspect);
    Py_DECREF(par_introspect);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_16_add_signal_receiver(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler_function = python_pars[1];
    PyObject *par_signal_name = python_pars[2];
    PyObject *par_dbus_interface = python_pars[3];
    PyObject *par_bus_name = python_pars[4];
    PyObject *par_path = python_pars[5];
    PyObject *par_keywords = python_pars[6];
    PyObject *var_named_service = NULL;
    PyObject *var_warn = NULL;
    PyObject *var_match = NULL;
    PyObject *var_by_interface = NULL;
    PyObject *var_by_member = NULL;
    PyObject *var_matches = NULL;
    struct Nuitka_FrameObject *frame_ce825c7f59298df340a60da106b7952a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_ce825c7f59298df340a60da106b7952a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ce825c7f59298df340a60da106b7952a)) {
        Py_XDECREF(cache_frame_ce825c7f59298df340a60da106b7952a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ce825c7f59298df340a60da106b7952a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ce825c7f59298df340a60da106b7952a = MAKE_FUNCTION_FRAME(codeobj_ce825c7f59298df340a60da106b7952a, module_dbus$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ce825c7f59298df340a60da106b7952a->m_type_description == NULL);
    frame_ce825c7f59298df340a60da106b7952a = cache_frame_ce825c7f59298df340a60da106b7952a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ce825c7f59298df340a60da106b7952a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ce825c7f59298df340a60da106b7952a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_ce825c7f59298df340a60da106b7952a->m_frame.f_lineno = 402;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain__require_main_loop);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_keywords);
        tmp_called_instance_2 = par_keywords;
        frame_ce825c7f59298df340a60da106b7952a->m_frame.f_lineno = 404;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM(const_tuple_str_plain_named_service_none_tuple, 0));

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_named_service == NULL);
        var_named_service = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_named_service);
        tmp_compexpr_left_1 = var_named_service;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_bus_name);
        tmp_compexpr_left_2 = par_bus_name;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_6090a95f7b926ecd6061b143b7cad52f;
        frame_ce825c7f59298df340a60da106b7952a->m_frame.f_lineno = 407;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 407;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(var_named_service);
        tmp_assign_source_2 = var_named_service;
        {
            PyObject *old = par_bus_name;
            assert(old != NULL);
            par_bus_name = tmp_assign_source_2;
            Py_INCREF(par_bus_name);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_warnings;
        tmp_globals_name_1 = (PyObject *)moduledict_dbus$connection;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_warn_tuple;
        tmp_level_name_1 = const_int_0;
        frame_ce825c7f59298df340a60da106b7952a->m_frame.f_lineno = 410;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_warn,
                const_int_0
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_warn);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_warn == NULL);
        var_warn = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(var_warn);
        tmp_called_name_1 = var_warn;
        tmp_tuple_element_1 = const_str_digest_18c67c412066bef703396d613a159b4d;
        tmp_args_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_DeprecationWarning);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning);
        }

        if (tmp_mvar_value_1 == NULL) {
            Py_DECREF(tmp_args_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1786 ], 40, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 413;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(const_dict_f154c9a58c9419d7e391901d7b7fe49e);
        frame_ce825c7f59298df340a60da106b7952a->m_frame.f_lineno = 411;
        tmp_call_result_2 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_SignalMatch);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SignalMatch);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2311 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 415;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_2;
        CHECK_OBJECT(par_self);
        tmp_tuple_element_2 = par_self;
        tmp_dircall_arg2_1 = PyTuple_New(6);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_bus_name);
        tmp_tuple_element_2 = par_bus_name;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_path);
        tmp_tuple_element_2 = par_path;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 2, tmp_tuple_element_2);
        CHECK_OBJECT(par_dbus_interface);
        tmp_tuple_element_2 = par_dbus_interface;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 3, tmp_tuple_element_2);
        CHECK_OBJECT(par_signal_name);
        tmp_tuple_element_2 = par_signal_name;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 4, tmp_tuple_element_2);
        CHECK_OBJECT(par_handler_function);
        tmp_tuple_element_2 = par_handler_function;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 5, tmp_tuple_element_2);
        CHECK_OBJECT(par_keywords);
        tmp_dircall_arg3_1 = par_keywords;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_4 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_match == NULL);
        var_match = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain__signals_lock);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ce825c7f59298df340a60da106b7952a->m_frame.f_lineno = 418;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_acquire);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain__signal_recipients_by_object_path);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_name_1 = par_path;
        tmp_args_element_name_2 = PyDict_New();
        frame_ce825c7f59298df340a60da106b7952a->m_frame.f_lineno = 420;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_4, const_str_plain_setdefault, call_args);
        }

        Py_DECREF(tmp_called_instance_4);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_by_interface == NULL);
        var_by_interface = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(var_by_interface);
        tmp_called_instance_5 = var_by_interface;
        CHECK_OBJECT(par_dbus_interface);
        tmp_args_element_name_3 = par_dbus_interface;
        tmp_args_element_name_4 = PyDict_New();
        frame_ce825c7f59298df340a60da106b7952a->m_frame.f_lineno = 422;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_5, const_str_plain_setdefault, call_args);
        }

        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_by_member == NULL);
        var_by_member = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(var_by_member);
        tmp_called_instance_6 = var_by_member;
        CHECK_OBJECT(par_signal_name);
        tmp_args_element_name_5 = par_signal_name;
        tmp_args_element_name_6 = PyList_New(0);
        frame_ce825c7f59298df340a60da106b7952a->m_frame.f_lineno = 423;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_6, const_str_plain_setdefault, call_args);
        }

        Py_DECREF(tmp_args_element_name_6);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_matches == NULL);
        var_matches = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT(var_matches);
        tmp_called_instance_7 = var_matches;
        CHECK_OBJECT(var_match);
        tmp_args_element_name_7 = var_match;
        frame_ce825c7f59298df340a60da106b7952a->m_frame.f_lineno = 425;
        {
            PyObject *call_args[] = {tmp_args_element_name_7};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain_append, call_args);
        }

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_ce825c7f59298df340a60da106b7952a, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_ce825c7f59298df340a60da106b7952a, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_called_instance_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain__signals_lock);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        frame_ce825c7f59298df340a60da106b7952a->m_frame.f_lineno = 427;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, const_str_plain_release);
        Py_DECREF(tmp_called_instance_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_5);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 419;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ce825c7f59298df340a60da106b7952a->m_frame) frame_ce825c7f59298df340a60da106b7952a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain__signals_lock);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ce825c7f59298df340a60da106b7952a->m_frame.f_lineno = 427;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, const_str_plain_release);
        Py_DECREF(tmp_called_instance_9);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ce825c7f59298df340a60da106b7952a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ce825c7f59298df340a60da106b7952a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ce825c7f59298df340a60da106b7952a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ce825c7f59298df340a60da106b7952a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ce825c7f59298df340a60da106b7952a, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ce825c7f59298df340a60da106b7952a,
        type_description_1,
        par_self,
        par_handler_function,
        par_signal_name,
        par_dbus_interface,
        par_bus_name,
        par_path,
        par_keywords,
        var_named_service,
        var_warn,
        var_match,
        var_by_interface,
        var_by_member,
        var_matches
    );


    // Release cached frame.
    if (frame_ce825c7f59298df340a60da106b7952a == cache_frame_ce825c7f59298df340a60da106b7952a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_ce825c7f59298df340a60da106b7952a);
    }
    cache_frame_ce825c7f59298df340a60da106b7952a = NULL;

    assertFrameObject(frame_ce825c7f59298df340a60da106b7952a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_match);
    tmp_return_value = var_match;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_bus_name);
    Py_DECREF(par_bus_name);
    par_bus_name = NULL;

    CHECK_OBJECT(var_named_service);
    Py_DECREF(var_named_service);
    var_named_service = NULL;

    Py_XDECREF(var_warn);
    var_warn = NULL;

    CHECK_OBJECT(var_match);
    Py_DECREF(var_match);
    var_match = NULL;

    CHECK_OBJECT(var_by_interface);
    Py_DECREF(var_by_interface);
    var_by_interface = NULL;

    CHECK_OBJECT(var_by_member);
    Py_DECREF(var_by_member);
    var_by_member = NULL;

    CHECK_OBJECT(var_matches);
    Py_DECREF(var_matches);
    var_matches = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_bus_name);
    par_bus_name = NULL;

    Py_XDECREF(var_named_service);
    var_named_service = NULL;

    Py_XDECREF(var_warn);
    var_warn = NULL;

    Py_XDECREF(var_match);
    var_match = NULL;

    Py_XDECREF(var_by_interface);
    var_by_interface = NULL;

    Py_XDECREF(var_by_member);
    var_by_member = NULL;

    Py_XDECREF(var_matches);
    var_matches = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_handler_function);
    Py_DECREF(par_handler_function);
    CHECK_OBJECT(par_signal_name);
    Py_DECREF(par_signal_name);
    CHECK_OBJECT(par_dbus_interface);
    Py_DECREF(par_dbus_interface);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_keywords);
    Py_DECREF(par_keywords);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_handler_function);
    Py_DECREF(par_handler_function);
    CHECK_OBJECT(par_signal_name);
    Py_DECREF(par_signal_name);
    CHECK_OBJECT(par_dbus_interface);
    Py_DECREF(par_dbus_interface);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_keywords);
    Py_DECREF(par_keywords);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_17__iter_easy_matches(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_path = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_dbus_interface = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_member = Nuitka_Cell_New1(python_pars[3]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[4];

        tmp_closure_1[0] = par_dbus_interface;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_member;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_path;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_self;
        Py_INCREF(tmp_closure_1[3]);

        tmp_return_value = MAKE_GENERATOR_dbus$connection$$$function_17__iter_easy_matches$$$genobj_1__iter_easy_matches(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;

    CHECK_OBJECT(par_dbus_interface);
    Py_DECREF(par_dbus_interface);
    par_dbus_interface = NULL;

    CHECK_OBJECT(par_member);
    Py_DECREF(par_member);
    par_member = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;

    CHECK_OBJECT(par_dbus_interface);
    Py_DECREF(par_dbus_interface);
    par_dbus_interface = NULL;

    CHECK_OBJECT(par_member);
    Py_DECREF(par_member);
    par_member = NULL;


    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct dbus$connection$$$function_17__iter_easy_matches$$$genobj_1__iter_easy_matches_locals {
    PyObject *var_path_keys;
    PyObject *var_interface_keys;
    PyObject *var_member_keys;
    PyObject *var_by_interface;
    PyObject *var_by_member;
    PyObject *var_matches;
    PyObject *var_m;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_for_loop_2__for_iterator;
    PyObject *tmp_for_loop_2__iter_value;
    PyObject *tmp_for_loop_3__for_iterator;
    PyObject *tmp_for_loop_3__iter_value;
    PyObject *tmp_for_loop_4__for_iterator;
    PyObject *tmp_for_loop_4__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
};

static PyObject *dbus$connection$$$function_17__iter_easy_matches$$$genobj_1__iter_easy_matches_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct dbus$connection$$$function_17__iter_easy_matches$$$genobj_1__iter_easy_matches_locals *generator_heap = (struct dbus$connection$$$function_17__iter_easy_matches$$$genobj_1__iter_easy_matches_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_path_keys = NULL;
    generator_heap->var_interface_keys = NULL;
    generator_heap->var_member_keys = NULL;
    generator_heap->var_by_interface = NULL;
    generator_heap->var_by_member = NULL;
    generator_heap->var_matches = NULL;
    generator_heap->var_m = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    generator_heap->tmp_for_loop_3__for_iterator = NULL;
    generator_heap->tmp_for_loop_3__iter_value = NULL;
    generator_heap->tmp_for_loop_4__for_iterator = NULL;
    generator_heap->tmp_for_loop_4__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_7af7fde5304c2145e914f9c2ea1d918d, module_dbus$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "path");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 432;
            generator_heap->type_description_1 = "ccccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = Py_None;
        tmp_assign_source_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_1, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
            Py_DECREF(tmp_assign_source_1);
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "path");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 433;
            generator_heap->type_description_1 = "ccccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(generator->m_closure[2]);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_1, 1, tmp_tuple_element_1);
        assert(generator_heap->var_path_keys == NULL);
        generator_heap->var_path_keys = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_tuple_none_tuple;
        assert(generator_heap->var_path_keys == NULL);
        Py_INCREF(tmp_assign_source_2);
        generator_heap->var_path_keys = tmp_assign_source_2;
    }
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "dbus_interface");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 436;
            generator_heap->type_description_1 = "ccccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = Py_None;
        tmp_assign_source_3 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_assign_source_3, 0, tmp_tuple_element_2);
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assign_source_3);
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "dbus_interface");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 437;
            generator_heap->type_description_1 = "ccccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_assign_source_3, 1, tmp_tuple_element_2);
        assert(generator_heap->var_interface_keys == NULL);
        generator_heap->var_interface_keys = tmp_assign_source_3;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_tuple_none_tuple;
        assert(generator_heap->var_interface_keys == NULL);
        Py_INCREF(tmp_assign_source_4);
        generator_heap->var_interface_keys = tmp_assign_source_4;
    }
    branch_end_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "member");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 440;
            generator_heap->type_description_1 = "ccccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_3 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = Py_None;
        tmp_assign_source_5 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_assign_source_5, 0, tmp_tuple_element_3);
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_assign_source_5);
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "member");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 441;
            generator_heap->type_description_1 = "ccccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = Nuitka_Cell_GET(generator->m_closure[1]);
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_assign_source_5, 1, tmp_tuple_element_3);
        assert(generator_heap->var_member_keys == NULL);
        generator_heap->var_member_keys = tmp_assign_source_5;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_tuple_none_tuple;
        assert(generator_heap->var_member_keys == NULL);
        Py_INCREF(tmp_assign_source_6);
        generator_heap->var_member_keys = tmp_assign_source_6;
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->var_path_keys);
        tmp_iter_arg_1 = generator_heap->var_path_keys;
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 445;
            generator_heap->type_description_1 = "ccccooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccccooooooo";
                generator_heap->exception_lineno = 445;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_9 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = Nuitka_Cell_GET(generator->m_closure[2]);
            PyCell_SET(generator->m_closure[2], tmp_assign_source_9);
            Py_INCREF(tmp_assign_source_9);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 446;
            generator_heap->type_description_1 = "ccccooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_1 = Nuitka_Cell_GET(generator->m_closure[3]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain__signal_recipients_by_object_path);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 446;
            generator_heap->type_description_1 = "ccccooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[2]));
        tmp_args_element_name_1 = Nuitka_Cell_GET(generator->m_closure[2]);
        generator->m_frame->m_frame.f_lineno = 446;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 446;
            generator_heap->type_description_1 = "ccccooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_by_interface;
            generator_heap->var_by_interface = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(generator_heap->var_by_interface);
        tmp_compexpr_left_4 = generator_heap->var_by_interface;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    goto loop_start_1;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(generator_heap->var_interface_keys);
        tmp_iter_arg_2 = generator_heap->var_interface_keys;
        tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 449;
            generator_heap->type_description_1 = "ccccooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_2__for_iterator;
            generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
        tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_12 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccccooooooo";
                generator_heap->exception_lineno = 449;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
            generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
        tmp_assign_source_13 = generator_heap->tmp_for_loop_2__iter_value;
        {
            PyObject *old = Nuitka_Cell_GET(generator->m_closure[0]);
            PyCell_SET(generator->m_closure[0], tmp_assign_source_13);
            Py_INCREF(tmp_assign_source_13);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(generator_heap->var_by_interface);
        tmp_called_instance_2 = generator_heap->var_by_interface;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_args_element_name_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_args_element_name_3 = Py_None;
        generator->m_frame->m_frame.f_lineno = 450;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_14 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain_get, call_args);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 450;
            generator_heap->type_description_1 = "ccccooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->var_by_member;
            generator_heap->var_by_member = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(generator_heap->var_by_member);
        tmp_compexpr_left_5 = generator_heap->var_by_member;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_5 = (tmp_compexpr_left_5 == tmp_compexpr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    goto loop_start_2;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(generator_heap->var_member_keys);
        tmp_iter_arg_3 = generator_heap->var_member_keys;
        tmp_assign_source_15 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 453;
            generator_heap->type_description_1 = "ccccooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_3__for_iterator;
            generator_heap->tmp_for_loop_3__for_iterator = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = generator_heap->tmp_for_loop_3__for_iterator;
        tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_16 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccccooooooo";
                generator_heap->exception_lineno = 453;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_3__iter_value;
            generator_heap->tmp_for_loop_3__iter_value = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(generator_heap->tmp_for_loop_3__iter_value);
        tmp_assign_source_17 = generator_heap->tmp_for_loop_3__iter_value;
        {
            PyObject *old = Nuitka_Cell_GET(generator->m_closure[1]);
            PyCell_SET(generator->m_closure[1], tmp_assign_source_17);
            Py_INCREF(tmp_assign_source_17);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT(generator_heap->var_by_member);
        tmp_called_instance_3 = generator_heap->var_by_member;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_args_element_name_4 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_args_element_name_5 = Py_None;
        generator->m_frame->m_frame.f_lineno = 454;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_assign_source_18 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, const_str_plain_get, call_args);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 454;
            generator_heap->type_description_1 = "ccccooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->var_matches;
            generator_heap->var_matches = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT(generator_heap->var_matches);
        tmp_compexpr_left_6 = generator_heap->var_matches;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_6 = (tmp_compexpr_left_6 == tmp_compexpr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    goto loop_start_3;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(generator_heap->var_matches);
        tmp_iter_arg_4 = generator_heap->var_matches;
        tmp_assign_source_19 = MAKE_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 457;
            generator_heap->type_description_1 = "ccccooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_4__for_iterator;
            generator_heap->tmp_for_loop_4__for_iterator = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = generator_heap->tmp_for_loop_4__for_iterator;
        tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_20 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccccooooooo";
                generator_heap->exception_lineno = 457;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_4__iter_value;
            generator_heap->tmp_for_loop_4__iter_value = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(generator_heap->tmp_for_loop_4__iter_value);
        tmp_assign_source_21 = generator_heap->tmp_for_loop_4__iter_value;
        {
            PyObject *old = generator_heap->var_m;
            generator_heap->var_m = tmp_assign_source_21;
            Py_INCREF(generator_heap->var_m);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_name_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_m);
        tmp_expression_name_2 = generator_heap->var_m;
        Py_INCREF(tmp_expression_name_2);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_2;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 458;
            generator_heap->type_description_1 = "ccccooooooo";
            goto try_except_handler_5;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 457;
        generator_heap->type_description_1 = "ccccooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_4__iter_value);
    generator_heap->tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_4__for_iterator);
    generator_heap->tmp_for_loop_4__for_iterator = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    Py_XDECREF(generator_heap->tmp_for_loop_4__iter_value);
    generator_heap->tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_4__for_iterator);
    generator_heap->tmp_for_loop_4__for_iterator = NULL;

    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 453;
        generator_heap->type_description_1 = "ccccooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_3__iter_value);
    generator_heap->tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_3__for_iterator);
    generator_heap->tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_for_loop_3__iter_value);
    generator_heap->tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_3__for_iterator);
    generator_heap->tmp_for_loop_3__for_iterator = NULL;

    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 449;
        generator_heap->type_description_1 = "ccccooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;

    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 445;
        generator_heap->type_description_1 = "ccccooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[3],
            generator->m_closure[2],
            generator->m_closure[0],
            generator->m_closure[1],
            generator_heap->var_path_keys,
            generator_heap->var_interface_keys,
            generator_heap->var_member_keys,
            generator_heap->var_by_interface,
            generator_heap->var_by_member,
            generator_heap->var_matches,
            generator_heap->var_m
        );


        // Release cached frame.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(generator->m_frame);
        }
        cache_m_frame = NULL;

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_path_keys);
    generator_heap->var_path_keys = NULL;

    Py_XDECREF(generator_heap->var_interface_keys);
    generator_heap->var_interface_keys = NULL;

    Py_XDECREF(generator_heap->var_member_keys);
    generator_heap->var_member_keys = NULL;

    Py_XDECREF(generator_heap->var_by_interface);
    generator_heap->var_by_interface = NULL;

    Py_XDECREF(generator_heap->var_by_member);
    generator_heap->var_by_member = NULL;

    Py_XDECREF(generator_heap->var_matches);
    generator_heap->var_matches = NULL;

    Py_XDECREF(generator_heap->var_m);
    generator_heap->var_m = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_5;
    generator_heap->exception_value = generator_heap->exception_keeper_value_5;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:
    try_end_5:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    CHECK_OBJECT(generator_heap->var_path_keys);
    Py_DECREF(generator_heap->var_path_keys);
    generator_heap->var_path_keys = NULL;

    CHECK_OBJECT(generator_heap->var_interface_keys);
    Py_DECREF(generator_heap->var_interface_keys);
    generator_heap->var_interface_keys = NULL;

    CHECK_OBJECT(generator_heap->var_member_keys);
    Py_DECREF(generator_heap->var_member_keys);
    generator_heap->var_member_keys = NULL;

    Py_XDECREF(generator_heap->var_by_interface);
    generator_heap->var_by_interface = NULL;

    Py_XDECREF(generator_heap->var_by_member);
    generator_heap->var_by_member = NULL;

    Py_XDECREF(generator_heap->var_matches);
    generator_heap->var_matches = NULL;

    Py_XDECREF(generator_heap->var_m);
    generator_heap->var_m = NULL;



    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_dbus$connection$$$function_17__iter_easy_matches$$$genobj_1__iter_easy_matches(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        dbus$connection$$$function_17__iter_easy_matches$$$genobj_1__iter_easy_matches_context,
        module_dbus$connection,
        const_str_plain__iter_easy_matches,
#if PYTHON_VERSION >= 350
        const_str_digest_990e7924c862ae9c7b8a06ae44880838,
#endif
        codeobj_7af7fde5304c2145e914f9c2ea1d918d,
        closure,
        4,
        sizeof(struct dbus$connection$$$function_17__iter_easy_matches$$$genobj_1__iter_easy_matches_locals)
    );
}


static PyObject *impl_dbus$connection$$$function_18_remove_signal_receiver(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler_or_match = python_pars[1];
    PyObject *par_signal_name = python_pars[2];
    PyObject *par_dbus_interface = python_pars[3];
    PyObject *par_bus_name = python_pars[4];
    PyObject *par_path = python_pars[5];
    PyObject *par_keywords = python_pars[6];
    PyObject *var_named_service = NULL;
    PyObject *var_warn = NULL;
    PyObject *var_new = NULL;
    PyObject *var_deletions = NULL;
    PyObject *var_by_interface = NULL;
    PyObject *var_by_member = NULL;
    PyObject *var_matches = NULL;
    PyObject *var_match = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_dd6b94a191afb736f3a09d001196f04c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_dd6b94a191afb736f3a09d001196f04c = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dd6b94a191afb736f3a09d001196f04c)) {
        Py_XDECREF(cache_frame_dd6b94a191afb736f3a09d001196f04c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dd6b94a191afb736f3a09d001196f04c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dd6b94a191afb736f3a09d001196f04c = MAKE_FUNCTION_FRAME(codeobj_dd6b94a191afb736f3a09d001196f04c, module_dbus$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_dd6b94a191afb736f3a09d001196f04c->m_type_description == NULL);
    frame_dd6b94a191afb736f3a09d001196f04c = cache_frame_dd6b94a191afb736f3a09d001196f04c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_dd6b94a191afb736f3a09d001196f04c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dd6b94a191afb736f3a09d001196f04c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_keywords);
        tmp_called_instance_1 = par_keywords;
        frame_dd6b94a191afb736f3a09d001196f04c->m_frame.f_lineno = 466;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM(const_tuple_str_plain_named_service_none_tuple, 0));

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_named_service == NULL);
        var_named_service = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_named_service);
        tmp_compexpr_left_1 = var_named_service;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_bus_name);
        tmp_compexpr_left_2 = par_bus_name;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_6090a95f7b926ecd6061b143b7cad52f;
        frame_dd6b94a191afb736f3a09d001196f04c->m_frame.f_lineno = 469;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 469;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(var_named_service);
        tmp_assign_source_2 = var_named_service;
        {
            PyObject *old = par_bus_name;
            assert(old != NULL);
            par_bus_name = tmp_assign_source_2;
            Py_INCREF(par_bus_name);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_warnings;
        tmp_globals_name_1 = (PyObject *)moduledict_dbus$connection;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_warn_tuple;
        tmp_level_name_1 = const_int_0;
        frame_dd6b94a191afb736f3a09d001196f04c->m_frame.f_lineno = 472;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_warn,
                const_int_0
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_warn);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_warn == NULL);
        var_warn = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(var_warn);
        tmp_called_name_1 = var_warn;
        tmp_tuple_element_1 = const_str_digest_53da925ba3defe32e6cd456822eb99d6;
        tmp_args_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_DeprecationWarning);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning);
        }

        if (tmp_mvar_value_1 == NULL) {
            Py_DECREF(tmp_args_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1786 ], 40, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 476;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(const_dict_f154c9a58c9419d7e391901d7b7fe49e);
        frame_dd6b94a191afb736f3a09d001196f04c->m_frame.f_lineno = 473;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyList_New(0);
        assert(var_new == NULL);
        var_new = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = PyList_New(0);
        assert(var_deletions == NULL);
        var_deletions = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain__signals_lock);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dd6b94a191afb736f3a09d001196f04c->m_frame.f_lineno = 480;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_acquire);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain__signal_recipients_by_object_path);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_name_1 = par_path;
        tmp_args_element_name_2 = Py_None;
        frame_dd6b94a191afb736f3a09d001196f04c->m_frame.f_lineno = 482;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_by_interface == NULL);
        var_by_interface = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(var_by_interface);
        tmp_compexpr_left_3 = var_by_interface;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(var_by_interface);
        tmp_called_instance_4 = var_by_interface;
        CHECK_OBJECT(par_dbus_interface);
        tmp_args_element_name_3 = par_dbus_interface;
        tmp_args_element_name_4 = Py_None;
        frame_dd6b94a191afb736f3a09d001196f04c->m_frame.f_lineno = 486;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_4, const_str_plain_get, call_args);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_by_member == NULL);
        var_by_member = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(var_by_member);
        tmp_compexpr_left_4 = var_by_member;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(var_by_member);
        tmp_called_instance_5 = var_by_member;
        CHECK_OBJECT(par_signal_name);
        tmp_args_element_name_5 = par_signal_name;
        tmp_args_element_name_6 = Py_None;
        frame_dd6b94a191afb736f3a09d001196f04c->m_frame.f_lineno = 489;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_5, const_str_plain_get, call_args);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_matches == NULL);
        var_matches = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(var_matches);
        tmp_compexpr_left_5 = var_matches;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_5 = (tmp_compexpr_left_5 == tmp_compexpr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_matches);
        tmp_iter_arg_1 = var_matches;
        tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooo";
                exception_lineno = 493;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_11 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_match;
            var_match = tmp_assign_source_11;
            Py_INCREF(var_match);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_handler_or_match);
        tmp_compexpr_left_6 = par_handler_or_match;
        CHECK_OBJECT(var_match);
        tmp_compexpr_right_6 = var_match;
        tmp_or_left_value_1 = (tmp_compexpr_left_6 == tmp_compexpr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_match);
        tmp_expression_name_3 = var_match;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_matches_removal_spec);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_bus_name);
        tmp_tuple_element_2 = par_bus_name;
        tmp_dircall_arg2_1 = PyTuple_New(5);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_path);
        tmp_tuple_element_2 = par_path;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_dbus_interface);
        tmp_tuple_element_2 = par_dbus_interface;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 2, tmp_tuple_element_2);
        CHECK_OBJECT(par_signal_name);
        tmp_tuple_element_2 = par_signal_name;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 3, tmp_tuple_element_2);
        CHECK_OBJECT(par_handler_or_match);
        tmp_tuple_element_2 = par_handler_or_match;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 4, tmp_tuple_element_2);
        CHECK_OBJECT(par_keywords);
        tmp_dircall_arg3_1 = par_keywords;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_3 = impl___internal__$$$function_6_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 495;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_or_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_3);
        tmp_condition_result_6 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_6 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT(var_deletions);
        tmp_called_instance_6 = var_deletions;
        CHECK_OBJECT(var_match);
        tmp_args_element_name_7 = var_match;
        frame_dd6b94a191afb736f3a09d001196f04c->m_frame.f_lineno = 501;
        {
            PyObject *call_args[] = {tmp_args_element_name_7};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_append, call_args);
        }

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT(var_new);
        tmp_called_instance_7 = var_new;
        CHECK_OBJECT(var_match);
        tmp_args_element_name_8 = var_match;
        frame_dd6b94a191afb736f3a09d001196f04c->m_frame.f_lineno = 503;
        {
            PyObject *call_args[] = {tmp_args_element_name_8};
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain_append, call_args);
        }

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_end_6:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 493;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_new);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_new);
        assert(!(tmp_truth_name_2 == -1));
        tmp_condition_result_7 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_new);
        tmp_ass_subvalue_1 = var_new;
        CHECK_OBJECT(var_by_member);
        tmp_ass_subscribed_1 = var_by_member;
        CHECK_OBJECT(par_signal_name);
        tmp_ass_subscript_1 = par_signal_name;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_delsubscr_subscript_1;
        CHECK_OBJECT(var_by_member);
        tmp_delsubscr_target_1 = var_by_member;
        CHECK_OBJECT(par_signal_name);
        tmp_delsubscr_subscript_1 = par_signal_name;
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_by_member);
        tmp_operand_name_1 = var_by_member;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_delsubscr_target_2;
        PyObject *tmp_delsubscr_subscript_2;
        CHECK_OBJECT(var_by_interface);
        tmp_delsubscr_target_2 = var_by_interface;
        CHECK_OBJECT(par_dbus_interface);
        tmp_delsubscr_subscript_2 = par_dbus_interface;
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_2, tmp_delsubscr_subscript_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT(var_by_interface);
        tmp_operand_name_2 = var_by_interface;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_delsubscr_target_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_delsubscr_subscript_3;
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_delsubscr_target_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain__signal_recipients_by_object_path);
        if (tmp_delsubscr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_path);
        tmp_delsubscr_subscript_3 = par_path;
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_3, tmp_delsubscr_subscript_3);
        Py_DECREF(tmp_delsubscr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_9:;
    branch_no_8:;
    branch_end_7:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_2:;
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(par_self);
        tmp_expression_name_5 = par_self;
        tmp_called_instance_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain__signals_lock);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dd6b94a191afb736f3a09d001196f04c->m_frame.f_lineno = 514;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, const_str_plain_release);
        Py_DECREF(tmp_called_instance_8);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    goto frame_return_exit_1;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_dd6b94a191afb736f3a09d001196f04c, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_dd6b94a191afb736f3a09d001196f04c, exception_keeper_lineno_2);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_2, exception_keeper_tb_2);
    PUBLISH_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(par_self);
        tmp_expression_name_6 = par_self;
        tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain__signals_lock);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_dd6b94a191afb736f3a09d001196f04c->m_frame.f_lineno = 514;
        tmp_call_result_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, const_str_plain_release);
        Py_DECREF(tmp_called_instance_9);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_7);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 481;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_dd6b94a191afb736f3a09d001196f04c->m_frame) frame_dd6b94a191afb736f3a09d001196f04c->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(par_self);
        tmp_expression_name_7 = par_self;
        tmp_called_instance_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain__signals_lock);
        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dd6b94a191afb736f3a09d001196f04c->m_frame.f_lineno = 514;
        tmp_call_result_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, const_str_plain_release);
        Py_DECREF(tmp_called_instance_10);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_deletions);
        tmp_iter_arg_2 = var_deletions;
        tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_13 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooo";
                exception_lineno = 516;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_14 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_match;
            var_match = tmp_assign_source_14;
            Py_INCREF(var_match);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT(par_self);
        tmp_called_instance_11 = par_self;
        CHECK_OBJECT(var_match);
        tmp_args_element_name_9 = var_match;
        frame_dd6b94a191afb736f3a09d001196f04c->m_frame.f_lineno = 517;
        {
            PyObject *call_args[] = {tmp_args_element_name_9};
            tmp_call_result_9 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_11, const_str_plain__clean_up_signal_match, call_args);
        }

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_9);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 516;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dd6b94a191afb736f3a09d001196f04c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_dd6b94a191afb736f3a09d001196f04c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dd6b94a191afb736f3a09d001196f04c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dd6b94a191afb736f3a09d001196f04c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dd6b94a191afb736f3a09d001196f04c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd6b94a191afb736f3a09d001196f04c, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dd6b94a191afb736f3a09d001196f04c,
        type_description_1,
        par_self,
        par_handler_or_match,
        par_signal_name,
        par_dbus_interface,
        par_bus_name,
        par_path,
        par_keywords,
        var_named_service,
        var_warn,
        var_new,
        var_deletions,
        var_by_interface,
        var_by_member,
        var_matches,
        var_match
    );


    // Release cached frame.
    if (frame_dd6b94a191afb736f3a09d001196f04c == cache_frame_dd6b94a191afb736f3a09d001196f04c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_dd6b94a191afb736f3a09d001196f04c);
    }
    cache_frame_dd6b94a191afb736f3a09d001196f04c = NULL;

    assertFrameObject(frame_dd6b94a191afb736f3a09d001196f04c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_bus_name);
    Py_DECREF(par_bus_name);
    par_bus_name = NULL;

    CHECK_OBJECT(var_named_service);
    Py_DECREF(var_named_service);
    var_named_service = NULL;

    Py_XDECREF(var_warn);
    var_warn = NULL;

    CHECK_OBJECT(var_new);
    Py_DECREF(var_new);
    var_new = NULL;

    CHECK_OBJECT(var_deletions);
    Py_DECREF(var_deletions);
    var_deletions = NULL;

    CHECK_OBJECT(var_by_interface);
    Py_DECREF(var_by_interface);
    var_by_interface = NULL;

    Py_XDECREF(var_by_member);
    var_by_member = NULL;

    Py_XDECREF(var_matches);
    var_matches = NULL;

    Py_XDECREF(var_match);
    var_match = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_bus_name);
    par_bus_name = NULL;

    Py_XDECREF(var_named_service);
    var_named_service = NULL;

    Py_XDECREF(var_warn);
    var_warn = NULL;

    Py_XDECREF(var_new);
    var_new = NULL;

    Py_XDECREF(var_deletions);
    var_deletions = NULL;

    Py_XDECREF(var_by_interface);
    var_by_interface = NULL;

    Py_XDECREF(var_by_member);
    var_by_member = NULL;

    Py_XDECREF(var_matches);
    var_matches = NULL;

    Py_XDECREF(var_match);
    var_match = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_handler_or_match);
    Py_DECREF(par_handler_or_match);
    CHECK_OBJECT(par_signal_name);
    Py_DECREF(par_signal_name);
    CHECK_OBJECT(par_dbus_interface);
    Py_DECREF(par_dbus_interface);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_keywords);
    Py_DECREF(par_keywords);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_handler_or_match);
    Py_DECREF(par_handler_or_match);
    CHECK_OBJECT(par_signal_name);
    Py_DECREF(par_signal_name);
    CHECK_OBJECT(par_dbus_interface);
    Py_DECREF(par_dbus_interface);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_keywords);
    Py_DECREF(par_keywords);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_20__signal_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_message = python_pars[1];
    PyObject *var_dbus_interface = NULL;
    PyObject *var_path = NULL;
    PyObject *var_signal_name = NULL;
    PyObject *var_match = NULL;
    PyObject *var_cb = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_826a485ba3c74a1bf4bd3b209729047b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_826a485ba3c74a1bf4bd3b209729047b = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_826a485ba3c74a1bf4bd3b209729047b)) {
        Py_XDECREF(cache_frame_826a485ba3c74a1bf4bd3b209729047b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_826a485ba3c74a1bf4bd3b209729047b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_826a485ba3c74a1bf4bd3b209729047b = MAKE_FUNCTION_FRAME(codeobj_826a485ba3c74a1bf4bd3b209729047b, module_dbus$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_826a485ba3c74a1bf4bd3b209729047b->m_type_description == NULL);
    frame_826a485ba3c74a1bf4bd3b209729047b = cache_frame_826a485ba3c74a1bf4bd3b209729047b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_826a485ba3c74a1bf4bd3b209729047b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_826a485ba3c74a1bf4bd3b209729047b) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_message);
        tmp_isinstance_inst_1 = par_message;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_SignalMessage);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SignalMessage);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2344 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 528;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2379 ], 52, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 529;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_return_value = tmp_mvar_value_2;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_message);
        tmp_called_instance_1 = par_message;
        frame_826a485ba3c74a1bf4bd3b209729047b->m_frame.f_lineno = 531;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_get_interface);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dbus_interface == NULL);
        var_dbus_interface = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_message);
        tmp_called_instance_2 = par_message;
        frame_826a485ba3c74a1bf4bd3b209729047b->m_frame.f_lineno = 532;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_get_path);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_path == NULL);
        var_path = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_message);
        tmp_called_instance_3 = par_message;
        frame_826a485ba3c74a1bf4bd3b209729047b->m_frame.f_lineno = 533;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_get_member);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_signal_name == NULL);
        var_signal_name = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_path);
        tmp_args_element_name_1 = var_path;
        CHECK_OBJECT(var_dbus_interface);
        tmp_args_element_name_2 = var_dbus_interface;
        CHECK_OBJECT(var_signal_name);
        tmp_args_element_name_3 = var_signal_name;
        frame_826a485ba3c74a1bf4bd3b209729047b->m_frame.f_lineno = 535;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_4, const_str_plain__iter_easy_matches, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 535;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_match;
            var_match = tmp_assign_source_6;
            Py_INCREF(var_match);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(var_match);
        tmp_called_instance_5 = var_match;
        CHECK_OBJECT(par_message);
        tmp_args_element_name_4 = par_message;
        frame_826a485ba3c74a1bf4bd3b209729047b->m_frame.f_lineno = 537;
        {
            PyObject *call_args[] = {tmp_args_element_name_4};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_maybe_handle_message, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 535;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_3;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_and_right_value_2_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_dbus_interface);
        tmp_compexpr_left_1 = var_dbus_interface;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_LOCAL_IFACE);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOCAL_IFACE);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2431 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 539;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_3;
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_path);
        tmp_compexpr_left_2 = var_path;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_LOCAL_PATH);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOCAL_PATH);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2464 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 540;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_4;
        tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_signal_name);
        tmp_compexpr_left_3 = var_signal_name;
        tmp_compexpr_right_3 = const_str_plain_Disconnected;
        tmp_tmp_and_right_value_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_and_right_value_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_and_right_value_2_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_2_object_1);

            exception_lineno = 541;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_and_right_value_2_object_1);
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain__Connection__call_on_disconnection);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 542;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_9 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_cb;
            var_cb = tmp_assign_source_9;
            Py_INCREF(var_cb);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT(var_cb);
        tmp_called_name_1 = var_cb;
        CHECK_OBJECT(par_self);
        tmp_args_element_name_5 = par_self;
        frame_826a485ba3c74a1bf4bd3b209729047b->m_frame.f_lineno = 544;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_826a485ba3c74a1bf4bd3b209729047b, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_826a485ba3c74a1bf4bd3b209729047b, exception_keeper_lineno_2);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_2, exception_keeper_tb_2);
    PUBLISH_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_logging);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_logging);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1699 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 547;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_6 = tmp_mvar_value_5;
        frame_826a485ba3c74a1bf4bd3b209729047b->m_frame.f_lineno = 547;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, const_str_plain_basicConfig);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain__logger);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__logger);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1728 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 548;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_name_2 = tmp_mvar_value_6;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_error);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_args_name_1 = const_tuple_str_digest_7ffb9ab03afd03351abea8dd52c5f3b0_tuple;
        tmp_kw_name_1 = PyDict_Copy(const_dict_fa39376a70aae82cbbe318011f99e72b);
        frame_826a485ba3c74a1bf4bd3b209729047b->m_frame.f_lineno = 548;
        tmp_call_result_4 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 543;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_826a485ba3c74a1bf4bd3b209729047b->m_frame) frame_826a485ba3c74a1bf4bd3b209729047b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_5;
    branch_end_3:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 542;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;

    branch_no_2:;
    {
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2379 ], 52, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 551;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_return_value = tmp_mvar_value_7;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_826a485ba3c74a1bf4bd3b209729047b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_826a485ba3c74a1bf4bd3b209729047b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_826a485ba3c74a1bf4bd3b209729047b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_826a485ba3c74a1bf4bd3b209729047b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_826a485ba3c74a1bf4bd3b209729047b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_826a485ba3c74a1bf4bd3b209729047b, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_826a485ba3c74a1bf4bd3b209729047b,
        type_description_1,
        par_self,
        par_message,
        var_dbus_interface,
        var_path,
        var_signal_name,
        var_match,
        var_cb
    );


    // Release cached frame.
    if (frame_826a485ba3c74a1bf4bd3b209729047b == cache_frame_826a485ba3c74a1bf4bd3b209729047b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_826a485ba3c74a1bf4bd3b209729047b);
    }
    cache_frame_826a485ba3c74a1bf4bd3b209729047b = NULL;

    assertFrameObject(frame_826a485ba3c74a1bf4bd3b209729047b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_dbus_interface);
    var_dbus_interface = NULL;

    Py_XDECREF(var_path);
    var_path = NULL;

    Py_XDECREF(var_signal_name);
    var_signal_name = NULL;

    Py_XDECREF(var_match);
    var_match = NULL;

    Py_XDECREF(var_cb);
    var_cb = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_dbus_interface);
    var_dbus_interface = NULL;

    Py_XDECREF(var_path);
    var_path = NULL;

    Py_XDECREF(var_signal_name);
    var_signal_name = NULL;

    Py_XDECREF(var_match);
    var_match = NULL;

    Py_XDECREF(var_cb);
    var_cb = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_21_call_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bus_name = python_pars[1];
    PyObject *par_object_path = python_pars[2];
    PyObject *par_dbus_interface = python_pars[3];
    PyObject *par_method = python_pars[4];
    PyObject *par_signature = python_pars[5];
    PyObject *par_args = python_pars[6];
    struct Nuitka_CellObject *par_reply_handler = Nuitka_Cell_New1(python_pars[7]);
    struct Nuitka_CellObject *par_error_handler = Nuitka_Cell_New1(python_pars[8]);
    PyObject *par_timeout = python_pars[9];
    PyObject *par_byte_arrays = python_pars[10];
    PyObject *par_require_main_loop = python_pars[11];
    PyObject *par_kwargs = python_pars[12];
    struct Nuitka_CellObject *var_get_args_opts = Nuitka_Cell_Empty();
    PyObject *var_message = NULL;
    PyObject *var_e = NULL;
    PyObject *var_msg_reply_handler = NULL;
    struct Nuitka_FrameObject *frame_0be60a15d8f8f81494ee5f7eb63e26c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0be60a15d8f8f81494ee5f7eb63e26c4 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0be60a15d8f8f81494ee5f7eb63e26c4)) {
        Py_XDECREF(cache_frame_0be60a15d8f8f81494ee5f7eb63e26c4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0be60a15d8f8f81494ee5f7eb63e26c4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0be60a15d8f8f81494ee5f7eb63e26c4 = MAKE_FUNCTION_FRAME(codeobj_0be60a15d8f8f81494ee5f7eb63e26c4, module_dbus$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0be60a15d8f8f81494ee5f7eb63e26c4->m_type_description == NULL);
    frame_0be60a15d8f8f81494ee5f7eb63e26c4 = cache_frame_0be60a15d8f8f81494ee5f7eb63e26c4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0be60a15d8f8f81494ee5f7eb63e26c4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0be60a15d8f8f81494ee5f7eb63e26c4) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_object_path);
        tmp_compexpr_left_1 = par_object_path;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_LOCAL_PATH);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOCAL_PATH);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2464 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 566;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_DBusException);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DBusException);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1826 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 567;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        tmp_left_name_1 = const_str_digest_1b131d6ac44490cf7b663211212d8dfa;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_LOCAL_PATH);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOCAL_PATH);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2464 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 568;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = tmp_mvar_value_3;
        tmp_args_element_name_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }
        frame_0be60a15d8f8f81494ee5f7eb63e26c4->m_frame.f_lineno = 567;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 567;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooccoooocooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT(par_dbus_interface);
        tmp_compexpr_left_2 = par_dbus_interface;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_LOCAL_IFACE);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOCAL_IFACE);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2431 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 569;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_4;
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_DBusException);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DBusException);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1826 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 570;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_5;
        tmp_left_name_2 = const_str_digest_22c55462d9849f9debc8e24f1dd1ee36;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_LOCAL_IFACE);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOCAL_IFACE);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2431 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 571;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = tmp_mvar_value_6;
        tmp_args_element_name_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }
        frame_0be60a15d8f8f81494ee5f7eb63e26c4->m_frame.f_lineno = 570;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 570;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooccoooocooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = const_str_plain_byte_arrays;
        CHECK_OBJECT(par_byte_arrays);
        tmp_dict_value_1 = par_byte_arrays;
        tmp_assign_source_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(Nuitka_Cell_GET(var_get_args_opts) == NULL);
        PyCell_SET(var_get_args_opts, tmp_assign_source_1);

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_mvar_value_7;
        int tmp_truth_name_1;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_is_py2);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py2);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 886 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 575;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_7);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_kwargs);
        tmp_called_instance_1 = par_kwargs;
        frame_0be60a15d8f8f81494ee5f7eb63e26c4->m_frame.f_lineno = 576;
        tmp_dictset_value = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_utf8_strings_false_tuple, 0));

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_get_args_opts));
        tmp_dictset_dict = Nuitka_Cell_GET(var_get_args_opts);
        tmp_dictset_key = const_str_plain_utf8_strings;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = const_str_plain_utf8_strings;
        CHECK_OBJECT(par_kwargs);
        tmp_compexpr_right_3 = par_kwargs;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_b33fe442635e40c9a18b9f06913c7a8a;
        frame_0be60a15d8f8f81494ee5f7eb63e26c4->m_frame.f_lineno = 578;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 578;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooccoooocooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    branch_end_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_MethodCallMessage);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MethodCallMessage);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2496 ], 39, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 580;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_8;
        tmp_dict_key_2 = const_str_plain_destination;
        CHECK_OBJECT(par_bus_name);
        tmp_dict_value_2 = par_bus_name;
        tmp_kw_name_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_path;
        CHECK_OBJECT(par_object_path);
        tmp_dict_value_3 = par_object_path;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_interface;
        CHECK_OBJECT(par_dbus_interface);
        tmp_dict_value_4 = par_dbus_interface;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_method;
        CHECK_OBJECT(par_method);
        tmp_dict_value_5 = par_method;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        frame_0be60a15d8f8f81494ee5f7eb63e26c4->m_frame.f_lineno = 580;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_3, tmp_kw_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_message);
        tmp_expression_name_1 = var_message;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_append);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;
            type_description_1 = "oooooooccoooocooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        tmp_dict_key_6 = const_str_plain_signature;
        CHECK_OBJECT(par_signature);
        tmp_dict_value_6 = par_signature;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___internal__$$$function_10_complex_call_helper_keywords_star_list(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;
            type_description_1 = "oooooooccoooocooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_0be60a15d8f8f81494ee5f7eb63e26c4, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_0be60a15d8f8f81494ee5f7eb63e26c4, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "oooooooccoooocooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_e = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_call_result_2;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_logging);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_logging);
        }

        if (tmp_mvar_value_9 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1699 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 588;
            type_description_1 = "oooooooccoooocooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_2 = tmp_mvar_value_9;
        frame_0be60a15d8f8f81494ee5f7eb63e26c4->m_frame.f_lineno = 588;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_basicConfig);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;
            type_description_1 = "oooooooccoooocooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain__logger);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__logger);
        }

        if (tmp_mvar_value_10 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1728 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 589;
            type_description_1 = "oooooooccoooocooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_2 = tmp_mvar_value_10;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_error);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "oooooooccoooocooo";
            goto try_except_handler_4;
        }
        tmp_args_element_name_3 = const_str_digest_f02aa1d7ebd3773a34b2181bc71910bd;
        CHECK_OBJECT(par_args);
        tmp_args_element_name_4 = par_args;
        CHECK_OBJECT(par_signature);
        tmp_args_element_name_5 = par_signature;
        CHECK_OBJECT(var_e);
        tmp_expression_name_3 = var_e;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_3);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 591;
            type_description_1 = "oooooooccoooocooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_e);
        tmp_args_element_name_7 = var_e;
        frame_0be60a15d8f8f81494ee5f7eb63e26c4->m_frame.f_lineno = 589;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "oooooooccoooocooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 592;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0be60a15d8f8f81494ee5f7eb63e26c4->m_frame) frame_0be60a15d8f8f81494ee5f7eb63e26c4->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooccoooocooo";
    goto try_except_handler_4;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 585;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0be60a15d8f8f81494ee5f7eb63e26c4->m_frame) frame_0be60a15d8f8f81494ee5f7eb63e26c4->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooccoooocooo";
    goto try_except_handler_3;
    branch_end_5:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT(Nuitka_Cell_GET(par_reply_handler));
        tmp_compexpr_left_5 = Nuitka_Cell_GET(par_reply_handler);
        tmp_compexpr_right_5 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_5 == tmp_compexpr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(Nuitka_Cell_GET(par_error_handler));
        tmp_compexpr_left_6 = Nuitka_Cell_GET(par_error_handler);
        tmp_compexpr_right_6 = Py_None;
        tmp_and_right_value_1 = (tmp_compexpr_left_6 == tmp_compexpr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_6 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_6 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_message);
        tmp_args_element_name_8 = var_message;
        frame_0be60a15d8f8f81494ee5f7eb63e26c4->m_frame.f_lineno = 596;
        {
            PyObject *call_args[] = {tmp_args_element_name_8};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_send_message, call_args);
        }

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 596;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT(Nuitka_Cell_GET(par_reply_handler));
        tmp_compexpr_left_7 = Nuitka_Cell_GET(par_reply_handler);
        tmp_compexpr_right_7 = Py_None;
        tmp_condition_result_7 = (tmp_compexpr_left_7 == tmp_compexpr_right_7) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain__noop);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__noop);
        }

        if (tmp_mvar_value_11 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2535 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 600;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_4 = tmp_mvar_value_11;
        {
            PyObject *old = Nuitka_Cell_GET(par_reply_handler);
            PyCell_SET(par_reply_handler, tmp_assign_source_4);
            Py_INCREF(tmp_assign_source_4);
            Py_XDECREF(old);
        }

    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        CHECK_OBJECT(Nuitka_Cell_GET(par_error_handler));
        tmp_compexpr_left_8 = Nuitka_Cell_GET(par_error_handler);
        tmp_compexpr_right_8 = Py_None;
        tmp_condition_result_8 = (tmp_compexpr_left_8 == tmp_compexpr_right_8) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain__noop);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__noop);
        }

        if (tmp_mvar_value_12 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2535 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 602;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_5 = tmp_mvar_value_12;
        {
            PyObject *old = Nuitka_Cell_GET(par_error_handler);
            PyCell_SET(par_error_handler, tmp_assign_source_5);
            Py_INCREF(tmp_assign_source_5);
            Py_XDECREF(old);
        }

    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_6;
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_error_handler;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_get_args_opts;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_reply_handler;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_6 = MAKE_FUNCTION_dbus$connection$$$function_21_call_async$$$function_1_msg_reply_handler(tmp_closure_1);

        assert(var_msg_reply_handler == NULL);
        var_msg_reply_handler = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain_send_message_with_reply);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_message);
        tmp_tuple_element_1 = var_message;
        tmp_args_name_1 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_msg_reply_handler);
        tmp_tuple_element_1 = var_msg_reply_handler;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_timeout);
        tmp_tuple_element_1 = par_timeout;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 2, tmp_tuple_element_1);
        tmp_dict_key_7 = const_str_plain_require_main_loop;
        CHECK_OBJECT(par_require_main_loop);
        tmp_dict_value_7 = par_require_main_loop;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        frame_0be60a15d8f8f81494ee5f7eb63e26c4->m_frame.f_lineno = 613;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_1, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_1 = "oooooooccoooocooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0be60a15d8f8f81494ee5f7eb63e26c4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0be60a15d8f8f81494ee5f7eb63e26c4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0be60a15d8f8f81494ee5f7eb63e26c4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0be60a15d8f8f81494ee5f7eb63e26c4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0be60a15d8f8f81494ee5f7eb63e26c4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0be60a15d8f8f81494ee5f7eb63e26c4, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0be60a15d8f8f81494ee5f7eb63e26c4,
        type_description_1,
        par_self,
        par_bus_name,
        par_object_path,
        par_dbus_interface,
        par_method,
        par_signature,
        par_args,
        par_reply_handler,
        par_error_handler,
        par_timeout,
        par_byte_arrays,
        par_require_main_loop,
        par_kwargs,
        var_get_args_opts,
        var_message,
        var_e,
        var_msg_reply_handler
    );


    // Release cached frame.
    if (frame_0be60a15d8f8f81494ee5f7eb63e26c4 == cache_frame_0be60a15d8f8f81494ee5f7eb63e26c4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_0be60a15d8f8f81494ee5f7eb63e26c4);
    }
    cache_frame_0be60a15d8f8f81494ee5f7eb63e26c4 = NULL;

    assertFrameObject(frame_0be60a15d8f8f81494ee5f7eb63e26c4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_reply_handler);
    Py_DECREF(par_reply_handler);
    par_reply_handler = NULL;

    CHECK_OBJECT(par_error_handler);
    Py_DECREF(par_error_handler);
    par_error_handler = NULL;

    CHECK_OBJECT(var_get_args_opts);
    Py_DECREF(var_get_args_opts);
    var_get_args_opts = NULL;

    CHECK_OBJECT(var_message);
    Py_DECREF(var_message);
    var_message = NULL;

    Py_XDECREF(var_msg_reply_handler);
    var_msg_reply_handler = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_reply_handler);
    Py_DECREF(par_reply_handler);
    par_reply_handler = NULL;

    CHECK_OBJECT(par_error_handler);
    Py_DECREF(par_error_handler);
    par_error_handler = NULL;

    CHECK_OBJECT(var_get_args_opts);
    Py_DECREF(var_get_args_opts);
    var_get_args_opts = NULL;

    Py_XDECREF(var_message);
    var_message = NULL;

    Py_XDECREF(var_msg_reply_handler);
    var_msg_reply_handler = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bus_name);
    Py_DECREF(par_bus_name);
    CHECK_OBJECT(par_object_path);
    Py_DECREF(par_object_path);
    CHECK_OBJECT(par_dbus_interface);
    Py_DECREF(par_dbus_interface);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_signature);
    Py_DECREF(par_signature);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_byte_arrays);
    Py_DECREF(par_byte_arrays);
    CHECK_OBJECT(par_require_main_loop);
    Py_DECREF(par_require_main_loop);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bus_name);
    Py_DECREF(par_bus_name);
    CHECK_OBJECT(par_object_path);
    Py_DECREF(par_object_path);
    CHECK_OBJECT(par_dbus_interface);
    Py_DECREF(par_dbus_interface);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_signature);
    Py_DECREF(par_signature);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_byte_arrays);
    Py_DECREF(par_byte_arrays);
    CHECK_OBJECT(par_require_main_loop);
    Py_DECREF(par_require_main_loop);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_21_call_async$$$function_1_msg_reply_handler(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_message = python_pars[0];
    struct Nuitka_FrameObject *frame_296840a3f85410d5df3a8627237686ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_296840a3f85410d5df3a8627237686ea = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_296840a3f85410d5df3a8627237686ea)) {
        Py_XDECREF(cache_frame_296840a3f85410d5df3a8627237686ea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_296840a3f85410d5df3a8627237686ea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_296840a3f85410d5df3a8627237686ea = MAKE_FUNCTION_FRAME(codeobj_296840a3f85410d5df3a8627237686ea, module_dbus$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_296840a3f85410d5df3a8627237686ea->m_type_description == NULL);
    frame_296840a3f85410d5df3a8627237686ea = cache_frame_296840a3f85410d5df3a8627237686ea;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_296840a3f85410d5df3a8627237686ea);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_296840a3f85410d5df3a8627237686ea) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_message);
        tmp_isinstance_inst_1 = par_message;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_MethodReturnMessage);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MethodReturnMessage);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2562 ], 41, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 605;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "reply_handler");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 606;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(par_message);
        tmp_expression_name_1 = par_message;
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_get_args_list);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_2);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "get_args_opts");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 606;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_2 = Nuitka_Cell_GET(self->m_closure[1]);
        Py_INCREF(tmp_dircall_arg2_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_dircall_arg2_1 = impl___internal__$$$function_9_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_1 = impl___internal__$$$function_2_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT(par_message);
        tmp_isinstance_inst_2 = par_message;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_ErrorMessage);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ErrorMessage);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2603 ], 34, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 607;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_2 = tmp_mvar_value_2;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dircall_arg2_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_instance_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "error_handler");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 608;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_DBusException);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DBusException);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1826 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 608;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_3 = tmp_mvar_value_3;
        CHECK_OBJECT(par_message);
        tmp_called_instance_1 = par_message;
        frame_296840a3f85410d5df3a8627237686ea->m_frame.f_lineno = 609;
        tmp_dircall_arg2_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_get_args_list);
        if (tmp_dircall_arg2_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 609;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_name;
        CHECK_OBJECT(par_message);
        tmp_called_instance_2 = par_message;
        frame_296840a3f85410d5df3a8627237686ea->m_frame.f_lineno = 608;
        tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_get_error_name);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_3);

            exception_lineno = 608;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_1};
            tmp_args_element_name_1 = impl___internal__$$$function_10_complex_call_helper_keywords_star_list(dir_call_args);
        }
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        frame_296840a3f85410d5df3a8627237686ea->m_frame.f_lineno = 608;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "error_handler");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 611;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_left_name_1 = const_str_digest_f5b4474ebb16be358363b71a6ea51f3c;
        CHECK_OBJECT(par_message);
        tmp_right_name_1 = par_message;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        frame_296840a3f85410d5df3a8627237686ea->m_frame.f_lineno = 611;
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_args_element_name_2 == NULL));
        frame_296840a3f85410d5df3a8627237686ea->m_frame.f_lineno = 611;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_296840a3f85410d5df3a8627237686ea);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_296840a3f85410d5df3a8627237686ea);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_296840a3f85410d5df3a8627237686ea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_296840a3f85410d5df3a8627237686ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_296840a3f85410d5df3a8627237686ea, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_296840a3f85410d5df3a8627237686ea,
        type_description_1,
        par_message,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if (frame_296840a3f85410d5df3a8627237686ea == cache_frame_296840a3f85410d5df3a8627237686ea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_296840a3f85410d5df3a8627237686ea);
    }
    cache_frame_296840a3f85410d5df3a8627237686ea = NULL;

    assertFrameObject(frame_296840a3f85410d5df3a8627237686ea);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_22_call_blocking(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bus_name = python_pars[1];
    PyObject *par_object_path = python_pars[2];
    PyObject *par_dbus_interface = python_pars[3];
    PyObject *par_method = python_pars[4];
    PyObject *par_signature = python_pars[5];
    PyObject *par_args = python_pars[6];
    PyObject *par_timeout = python_pars[7];
    PyObject *par_byte_arrays = python_pars[8];
    PyObject *par_kwargs = python_pars[9];
    PyObject *var_get_args_opts = NULL;
    PyObject *var_message = NULL;
    PyObject *var_e = NULL;
    PyObject *var_reply_message = NULL;
    PyObject *var_args_list = NULL;
    struct Nuitka_FrameObject *frame_40e205e91014c06f56a6a0b1cd7e7d12;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_40e205e91014c06f56a6a0b1cd7e7d12 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_40e205e91014c06f56a6a0b1cd7e7d12)) {
        Py_XDECREF(cache_frame_40e205e91014c06f56a6a0b1cd7e7d12);

#if _DEBUG_REFCOUNTS
        if (cache_frame_40e205e91014c06f56a6a0b1cd7e7d12 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_40e205e91014c06f56a6a0b1cd7e7d12 = MAKE_FUNCTION_FRAME(codeobj_40e205e91014c06f56a6a0b1cd7e7d12, module_dbus$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_40e205e91014c06f56a6a0b1cd7e7d12->m_type_description == NULL);
    frame_40e205e91014c06f56a6a0b1cd7e7d12 = cache_frame_40e205e91014c06f56a6a0b1cd7e7d12;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_40e205e91014c06f56a6a0b1cd7e7d12);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_40e205e91014c06f56a6a0b1cd7e7d12) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_object_path);
        tmp_compexpr_left_1 = par_object_path;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_LOCAL_PATH);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOCAL_PATH);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2464 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 623;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_DBusException);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DBusException);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1826 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 624;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        tmp_left_name_1 = const_str_digest_1b131d6ac44490cf7b663211212d8dfa;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_LOCAL_PATH);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOCAL_PATH);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2464 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 625;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = tmp_mvar_value_3;
        tmp_args_element_name_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_40e205e91014c06f56a6a0b1cd7e7d12->m_frame.f_lineno = 624;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 624;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT(par_dbus_interface);
        tmp_compexpr_left_2 = par_dbus_interface;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_LOCAL_IFACE);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOCAL_IFACE);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2431 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 626;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_4;
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_DBusException);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DBusException);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1826 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 627;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_5;
        tmp_left_name_2 = const_str_digest_22c55462d9849f9debc8e24f1dd1ee36;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_LOCAL_IFACE);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOCAL_IFACE);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2431 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 628;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = tmp_mvar_value_6;
        tmp_args_element_name_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_40e205e91014c06f56a6a0b1cd7e7d12->m_frame.f_lineno = 627;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 627;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = const_str_plain_byte_arrays;
        CHECK_OBJECT(par_byte_arrays);
        tmp_dict_value_1 = par_byte_arrays;
        tmp_assign_source_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_get_args_opts == NULL);
        var_get_args_opts = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_mvar_value_7;
        int tmp_truth_name_1;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_is_py2);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py2);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 886 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 632;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_7);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 632;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_kwargs);
        tmp_called_instance_1 = par_kwargs;
        frame_40e205e91014c06f56a6a0b1cd7e7d12->m_frame.f_lineno = 633;
        tmp_dictset_value = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_utf8_strings_false_tuple, 0));

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 633;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_get_args_opts);
        tmp_dictset_dict = var_get_args_opts;
        tmp_dictset_key = const_str_plain_utf8_strings;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = const_str_plain_utf8_strings;
        CHECK_OBJECT(par_kwargs);
        tmp_compexpr_right_3 = par_kwargs;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_b33fe442635e40c9a18b9f06913c7a8a;
        frame_40e205e91014c06f56a6a0b1cd7e7d12->m_frame.f_lineno = 635;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 635;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    branch_end_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_MethodCallMessage);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MethodCallMessage);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2496 ], 39, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 637;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_8;
        tmp_dict_key_2 = const_str_plain_destination;
        CHECK_OBJECT(par_bus_name);
        tmp_dict_value_2 = par_bus_name;
        tmp_kw_name_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_path;
        CHECK_OBJECT(par_object_path);
        tmp_dict_value_3 = par_object_path;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_interface;
        CHECK_OBJECT(par_dbus_interface);
        tmp_dict_value_4 = par_dbus_interface;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_method;
        CHECK_OBJECT(par_method);
        tmp_dict_value_5 = par_method;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        frame_40e205e91014c06f56a6a0b1cd7e7d12->m_frame.f_lineno = 637;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_3, tmp_kw_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 637;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_message);
        tmp_expression_name_1 = var_message;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_append);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        tmp_dict_key_6 = const_str_plain_signature;
        CHECK_OBJECT(par_signature);
        tmp_dict_value_6 = par_signature;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___internal__$$$function_10_complex_call_helper_keywords_star_list(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_40e205e91014c06f56a6a0b1cd7e7d12, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_40e205e91014c06f56a6a0b1cd7e7d12, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_e = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_call_result_2;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_logging);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_logging);
        }

        if (tmp_mvar_value_9 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1699 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 645;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_2 = tmp_mvar_value_9;
        frame_40e205e91014c06f56a6a0b1cd7e7d12->m_frame.f_lineno = 645;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_basicConfig);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 645;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain__logger);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__logger);
        }

        if (tmp_mvar_value_10 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1728 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 646;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_2 = tmp_mvar_value_10;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_error);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_name_3 = const_str_digest_f02aa1d7ebd3773a34b2181bc71910bd;
        CHECK_OBJECT(par_args);
        tmp_args_element_name_4 = par_args;
        CHECK_OBJECT(par_signature);
        tmp_args_element_name_5 = par_signature;
        CHECK_OBJECT(var_e);
        tmp_expression_name_3 = var_e;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_3);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 648;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_e);
        tmp_args_element_name_7 = var_e;
        frame_40e205e91014c06f56a6a0b1cd7e7d12->m_frame.f_lineno = 646;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 649;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_40e205e91014c06f56a6a0b1cd7e7d12->m_frame) frame_40e205e91014c06f56a6a0b1cd7e7d12->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 642;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_40e205e91014c06f56a6a0b1cd7e7d12->m_frame) frame_40e205e91014c06f56a6a0b1cd7e7d12->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooo";
    goto try_except_handler_3;
    branch_end_5:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_message);
        tmp_args_element_name_8 = var_message;
        CHECK_OBJECT(par_timeout);
        tmp_args_element_name_9 = par_timeout;
        frame_40e205e91014c06f56a6a0b1cd7e7d12->m_frame.f_lineno = 652;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, const_str_plain_send_message_with_reply_and_block, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reply_message == NULL);
        var_reply_message = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_dircall_arg2_2;
        CHECK_OBJECT(var_reply_message);
        tmp_expression_name_4 = var_reply_message;
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain_get_args_list);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 654;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_get_args_opts);
        tmp_dircall_arg2_2 = var_get_args_opts;
        Py_INCREF(tmp_dircall_arg2_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_assign_source_5 = impl___internal__$$$function_9_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 654;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_args_list == NULL);
        var_args_list = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_condition_result_6_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_args_list);
        tmp_len_arg_1 = var_args_list;
        tmp_compexpr_left_5 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_int_0;
        tmp_tmp_condition_result_6_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        assert(!(tmp_tmp_condition_result_6_object_1 == NULL));
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_6_object_1);
        assert(!(tmp_truth_name_2 == -1));
        tmp_condition_result_6 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_6_object_1);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_tmp_condition_result_7_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_args_list);
        tmp_len_arg_2 = var_args_list;
        tmp_compexpr_left_6 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_compexpr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 657;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = const_int_pos_1;
        tmp_tmp_condition_result_7_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        Py_DECREF(tmp_compexpr_left_6);
        assert(!(tmp_tmp_condition_result_7_object_1 == NULL));
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_7_object_1);
        assert(!(tmp_truth_name_3 == -1));
        tmp_condition_result_7 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_7_object_1);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(var_args_list);
        tmp_expression_name_5 = var_args_list;
        tmp_subscript_name_1 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_5, tmp_subscript_name_1, 0);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(var_args_list);
        tmp_tuple_arg_1 = var_args_list;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 660;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_7:;
    branch_end_6:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_40e205e91014c06f56a6a0b1cd7e7d12);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_40e205e91014c06f56a6a0b1cd7e7d12);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_40e205e91014c06f56a6a0b1cd7e7d12);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_40e205e91014c06f56a6a0b1cd7e7d12, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_40e205e91014c06f56a6a0b1cd7e7d12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_40e205e91014c06f56a6a0b1cd7e7d12, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_40e205e91014c06f56a6a0b1cd7e7d12,
        type_description_1,
        par_self,
        par_bus_name,
        par_object_path,
        par_dbus_interface,
        par_method,
        par_signature,
        par_args,
        par_timeout,
        par_byte_arrays,
        par_kwargs,
        var_get_args_opts,
        var_message,
        var_e,
        var_reply_message,
        var_args_list
    );


    // Release cached frame.
    if (frame_40e205e91014c06f56a6a0b1cd7e7d12 == cache_frame_40e205e91014c06f56a6a0b1cd7e7d12) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_40e205e91014c06f56a6a0b1cd7e7d12);
    }
    cache_frame_40e205e91014c06f56a6a0b1cd7e7d12 = NULL;

    assertFrameObject(frame_40e205e91014c06f56a6a0b1cd7e7d12);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_get_args_opts);
    Py_DECREF(var_get_args_opts);
    var_get_args_opts = NULL;

    CHECK_OBJECT(var_message);
    Py_DECREF(var_message);
    var_message = NULL;

    CHECK_OBJECT(var_reply_message);
    Py_DECREF(var_reply_message);
    var_reply_message = NULL;

    CHECK_OBJECT(var_args_list);
    Py_DECREF(var_args_list);
    var_args_list = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_get_args_opts);
    var_get_args_opts = NULL;

    Py_XDECREF(var_message);
    var_message = NULL;

    Py_XDECREF(var_reply_message);
    var_reply_message = NULL;

    Py_XDECREF(var_args_list);
    var_args_list = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bus_name);
    Py_DECREF(par_bus_name);
    CHECK_OBJECT(par_object_path);
    Py_DECREF(par_object_path);
    CHECK_OBJECT(par_dbus_interface);
    Py_DECREF(par_dbus_interface);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_signature);
    Py_DECREF(par_signature);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_byte_arrays);
    Py_DECREF(par_byte_arrays);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bus_name);
    Py_DECREF(par_bus_name);
    CHECK_OBJECT(par_object_path);
    Py_DECREF(par_object_path);
    CHECK_OBJECT(par_dbus_interface);
    Py_DECREF(par_dbus_interface);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_signature);
    Py_DECREF(par_signature);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_byte_arrays);
    Py_DECREF(par_byte_arrays);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dbus$connection$$$function_23_call_on_disconnection(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_callable = python_pars[1];
    struct Nuitka_FrameObject *frame_9b36703e83bf3859b102ba7bfd018540;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9b36703e83bf3859b102ba7bfd018540 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9b36703e83bf3859b102ba7bfd018540)) {
        Py_XDECREF(cache_frame_9b36703e83bf3859b102ba7bfd018540);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9b36703e83bf3859b102ba7bfd018540 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9b36703e83bf3859b102ba7bfd018540 = MAKE_FUNCTION_FRAME(codeobj_9b36703e83bf3859b102ba7bfd018540, module_dbus$connection, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9b36703e83bf3859b102ba7bfd018540->m_type_description == NULL);
    frame_9b36703e83bf3859b102ba7bfd018540 = cache_frame_9b36703e83bf3859b102ba7bfd018540;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9b36703e83bf3859b102ba7bfd018540);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9b36703e83bf3859b102ba7bfd018540) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain__Connection__call_on_disconnection);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 669;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_callable);
        tmp_args_element_name_1 = par_callable;
        frame_9b36703e83bf3859b102ba7bfd018540->m_frame.f_lineno = 669;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_append, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 669;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9b36703e83bf3859b102ba7bfd018540);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9b36703e83bf3859b102ba7bfd018540);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9b36703e83bf3859b102ba7bfd018540, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b36703e83bf3859b102ba7bfd018540->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b36703e83bf3859b102ba7bfd018540, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9b36703e83bf3859b102ba7bfd018540,
        type_description_1,
        par_self,
        par_callable
    );


    // Release cached frame.
    if (frame_9b36703e83bf3859b102ba7bfd018540 == cache_frame_9b36703e83bf3859b102ba7bfd018540) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_9b36703e83bf3859b102ba7bfd018540);
    }
    cache_frame_9b36703e83bf3859b102ba7bfd018540 = NULL;

    assertFrameObject(frame_9b36703e83bf3859b102ba7bfd018540);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_callable);
    Py_DECREF(par_callable);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_callable);
    Py_DECREF(par_callable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_10_matches_removal_spec() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_10_matches_removal_spec,
        const_str_plain_matches_removal_spec,
#if PYTHON_VERSION >= 300
        const_str_digest_7920b839bde551df3cfdb15a43838363,
#endif
        codeobj_c1c49a5d7c5750b24daeda81197116fd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_11_maybe_handle_message() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_11_maybe_handle_message,
        const_str_plain_maybe_handle_message,
#if PYTHON_VERSION >= 300
        const_str_digest_1f49e58c7fcf708010bb49332c34a06e,
#endif
        codeobj_b4c3f10847f8692def70a08653dd09f0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_12_remove() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_12_remove,
        const_str_plain_remove,
#if PYTHON_VERSION >= 300
        const_str_digest_644b332e25c4adcb993444ee8a8734c8,
#endif
        codeobj_bdb308e31fd3165ea921ee20e54ad4b4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_13___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_13___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_062b9bbeb5779a728e3f5f602168f47b,
#endif
        codeobj_37e37f504aa86d187e5d96d54e35a712,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_14_activate_name_owner() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_14_activate_name_owner,
        const_str_plain_activate_name_owner,
#if PYTHON_VERSION >= 300
        const_str_digest_dbe052503d544dea7790a33dbb66417a,
#endif
        codeobj_64db21804276df5d3760e9a9ec7eb247,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        const_str_digest_40b5de9f7bade852fc63482a83615549,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_15_get_object(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_15_get_object,
        const_str_plain_get_object,
#if PYTHON_VERSION >= 300
        const_str_digest_00d0372aad4b5779c95b3c5861040192,
#endif
        codeobj_75adc9e672425825ca0bef11e2c1ce90,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        const_str_digest_eb26132551385f1349bb9090948fc44f,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_16_add_signal_receiver(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_16_add_signal_receiver,
        const_str_plain_add_signal_receiver,
#if PYTHON_VERSION >= 300
        const_str_digest_ee9d17511b4a14fad520631622655609,
#endif
        codeobj_ce825c7f59298df340a60da106b7952a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        const_str_digest_3327acca66f81f34042ac5c9bb3587db,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_17__iter_easy_matches() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_17__iter_easy_matches,
        const_str_plain__iter_easy_matches,
#if PYTHON_VERSION >= 300
        const_str_digest_990e7924c862ae9c7b8a06ae44880838,
#endif
        codeobj_7af7fde5304c2145e914f9c2ea1d918d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_18_remove_signal_receiver(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_18_remove_signal_receiver,
        const_str_plain_remove_signal_receiver,
#if PYTHON_VERSION >= 300
        const_str_digest_c38e35ad7ba970f51ad8b3db87727737,
#endif
        codeobj_dd6b94a191afb736f3a09d001196f04c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_19__clean_up_signal_match() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain__clean_up_signal_match,
#if PYTHON_VERSION >= 300
        const_str_digest_74c74a4f3914076d159ac780d9ae7eb5,
#endif
        codeobj_ed9599c212a2988c857bece92bfba7b6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_1__noop() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain__noop,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4d932a93aae442bed3f757ccda9f2e02,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_20__signal_func() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_20__signal_func,
        const_str_plain__signal_func,
#if PYTHON_VERSION >= 300
        const_str_digest_131bf54f9d136fafca15377302d118a7,
#endif
        codeobj_826a485ba3c74a1bf4bd3b209729047b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        const_str_digest_c312c1fd970460aff1adb590a8df01b9,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_21_call_async(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_21_call_async,
        const_str_plain_call_async,
#if PYTHON_VERSION >= 300
        const_str_digest_d5e31bc95a80dfad7a888c1d848d14c9,
#endif
        codeobj_0be60a15d8f8f81494ee5f7eb63e26c4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        const_str_digest_954ade24ee8cd0ad248e9565302ef1ee,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_21_call_async$$$function_1_msg_reply_handler(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_21_call_async$$$function_1_msg_reply_handler,
        const_str_plain_msg_reply_handler,
#if PYTHON_VERSION >= 300
        const_str_digest_5039c5d6f11e98c474ba03bba31f5603,
#endif
        codeobj_296840a3f85410d5df3a8627237686ea,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        NULL,
        closure,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_22_call_blocking(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_22_call_blocking,
        const_str_plain_call_blocking,
#if PYTHON_VERSION >= 300
        const_str_digest_ff49df7389f60a431d8c23ca5bf6edc1,
#endif
        codeobj_40e205e91014c06f56a6a0b1cd7e7d12,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        const_str_digest_d4399ea92558e8bd8e7eab45a845507e,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_23_call_on_disconnection() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_23_call_on_disconnection,
        const_str_plain_call_on_disconnection,
#if PYTHON_VERSION >= 300
        const_str_digest_e6f6db1e1554b164f4c266b895b42a01,
#endif
        codeobj_9b36703e83bf3859b102ba7bfd018540,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        const_str_digest_5413777759007d05db00f15b9e70199d,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_2___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_1da03696927a1f87040eb7cff2283c9c,
#endif
        codeobj_c898d5560a288b4adf9aa5b1feae4c3f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_3___hash__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_3___hash__,
        const_str_plain___hash__,
#if PYTHON_VERSION >= 300
        const_str_digest_c5f0090694aad5409ed9ef5de7e7084f,
#endif
        codeobj_8ea34ed8c9e1290ec72c8cd29bb53fc8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        const_str_digest_6e166361f0f2210b2fa06bad0b2ee4ff,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_4___eq__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_4___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 300
        const_str_digest_f5767631bc95611231d441939c67d7d1,
#endif
        codeobj_7bc6bf7f9cf38028fb04b1b8e5f618a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        const_str_digest_6e166361f0f2210b2fa06bad0b2ee4ff,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_5___ne__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_5___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 300
        const_str_digest_2143f45c4f0c460040bdb80e94cf9997,
#endif
        codeobj_2ab7159b0e31ec029895fe65f79da4a3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        const_str_digest_6e166361f0f2210b2fa06bad0b2ee4ff,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_6_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_6_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_e90ef89bfbc28ba1c9bb66687160421f,
#endif
        codeobj_cda428083581ee5b8c30a169e930e589,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_7___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_7___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 300
        const_str_digest_4eaa951297de8a1bf1145439deb02376,
#endif
        codeobj_0e5c46f17ccc82b5ffb80194a317e951,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_8___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_8___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 300
        const_str_digest_16e165df4d31d3e2e090145850dd908e,
#endif
        codeobj_da12f10289dd2eeb0ab3553a1f60d5fa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$connection$$$function_9_set_sender_name_owner() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$connection$$$function_9_set_sender_name_owner,
        const_str_plain_set_sender_name_owner,
#if PYTHON_VERSION >= 300
        const_str_digest_f75b9b4f6d2a8dde4fed9858fe31aec3,
#endif
        codeobj_f1d12664db29e81d36b687bb97892dce,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$connection,
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

function_impl_code functable_dbus$connection[] = {
    impl_dbus$connection$$$function_21_call_async$$$function_1_msg_reply_handler,
    NULL,
    impl_dbus$connection$$$function_2___init__,
    impl_dbus$connection$$$function_3___hash__,
    impl_dbus$connection$$$function_4___eq__,
    impl_dbus$connection$$$function_5___ne__,
    impl_dbus$connection$$$function_6_lambda,
    impl_dbus$connection$$$function_7___str__,
    impl_dbus$connection$$$function_8___repr__,
    impl_dbus$connection$$$function_9_set_sender_name_owner,
    impl_dbus$connection$$$function_10_matches_removal_spec,
    impl_dbus$connection$$$function_11_maybe_handle_message,
    impl_dbus$connection$$$function_12_remove,
    impl_dbus$connection$$$function_13___init__,
    impl_dbus$connection$$$function_14_activate_name_owner,
    impl_dbus$connection$$$function_15_get_object,
    impl_dbus$connection$$$function_16_add_signal_receiver,
    impl_dbus$connection$$$function_17__iter_easy_matches,
    impl_dbus$connection$$$function_18_remove_signal_receiver,
    NULL,
    impl_dbus$connection$$$function_20__signal_func,
    impl_dbus$connection$$$function_21_call_async,
    impl_dbus$connection$$$function_22_call_blocking,
    impl_dbus$connection$$$function_23_call_on_disconnection,
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

    function_impl_code *current = functable_dbus$connection;
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

    if (offset > sizeof(functable_dbus$connection) || offset < 0) {
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
        functable_dbus$connection[offset],
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
        module_dbus$connection,
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
PyObject *modulecode_dbus$connection(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_dbus$connection = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_dbus$connection;
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
    PRINT_STRING("dbus.connection: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("dbus.connection: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("dbus.connection: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initdbus$connection\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_dbus$connection = MODULE_DICT(module_dbus$connection);

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
        moduledict_dbus$connection,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_dbus$connection,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_dbus$connection,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_dbus$connection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_dbus$connection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_dbus$connection);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_dbus$connection);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_376c79685225b99b38d09389dcb44bac;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_dbus$connection_55 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_85f5fa26313b795a2ba0bae42676b298_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_85f5fa26313b795a2ba0bae42676b298_2 = NULL;
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
    PyObject *locals_dbus$connection_250 = NULL;
    struct Nuitka_FrameObject *frame_7a89301d6439cc9e6566842d02b1f1c4_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_7a89301d6439cc9e6566842d02b1f1c4_3 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_fa57831f05397508150ab2b9c37396e0;
        UPDATE_STRING_DICT0(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_376c79685225b99b38d09389dcb44bac = MAKE_MODULE_FRAME(codeobj_376c79685225b99b38d09389dcb44bac, module_dbus$connection);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_376c79685225b99b38d09389dcb44bac);
    assert(Py_REFCNT(frame_376c79685225b99b38d09389dcb44bac) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_fa57831f05397508150ab2b9c37396e0;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_tuple_str_plain_Connection_str_plain_SignalMatch_tuple;
        UPDATE_STRING_DICT0(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_str_plain_reStructuredText;
        UPDATE_STRING_DICT0(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain___docformat__, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_logging;
        tmp_globals_name_1 = (PyObject *)moduledict_dbus$connection;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_376c79685225b99b38d09389dcb44bac->m_frame.f_lineno = 28;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_threading;
        tmp_globals_name_2 = (PyObject *)moduledict_dbus$connection;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_376c79685225b99b38d09389dcb44bac->m_frame.f_lineno = 29;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_threading, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_weakref;
        tmp_globals_name_3 = (PyObject *)moduledict_dbus$connection;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_376c79685225b99b38d09389dcb44bac->m_frame.f_lineno = 30;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_weakref, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain__dbus_bindings;
        tmp_globals_name_4 = (PyObject *)moduledict_dbus$connection;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_d416af1fc944cf4bb33429e98e49a1af_tuple;
        tmp_level_name_4 = const_int_0;
        frame_376c79685225b99b38d09389dcb44bac->m_frame.f_lineno = 32;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_Connection,
                const_int_0
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_Connection);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain__Connection, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_LOCAL_IFACE,
                const_int_0
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_LOCAL_IFACE);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_LOCAL_IFACE, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_LOCAL_PATH,
                const_int_0
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_LOCAL_PATH);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_LOCAL_PATH, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_validate_bus_name,
                const_int_0
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_validate_bus_name);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_validate_bus_name, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_validate_interface_name,
                const_int_0
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_validate_interface_name);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_validate_interface_name, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_validate_member_name,
                const_int_0
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_validate_member_name);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_validate_member_name, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_validate_object_path,
                const_int_0
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_validate_object_path);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_validate_object_path, tmp_assign_source_16);
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_e48610c30fffad33f2054d9dca0792b3;
        tmp_globals_name_5 = (PyObject *)moduledict_dbus$connection;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_DBusException_tuple;
        tmp_level_name_5 = const_int_0;
        frame_376c79685225b99b38d09389dcb44bac->m_frame.f_lineno = 35;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_DBusException,
                const_int_0
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_DBusException);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_DBusException, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_b45a3c6f685a3991de51197626bab5ca;
        tmp_globals_name_6 = (PyObject *)moduledict_dbus$connection;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_c01835c49136a2d4e4f6c91ef6a073dd_tuple;
        tmp_level_name_6 = const_int_0;
        frame_376c79685225b99b38d09389dcb44bac->m_frame.f_lineno = 36;
        tmp_assign_source_18 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_ErrorMessage,
                const_int_0
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_ErrorMessage);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_ErrorMessage, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED,
                const_int_0
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED, tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_MethodCallMessage,
                const_int_0
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain_MethodCallMessage);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_MethodCallMessage, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_MethodReturnMessage,
                const_int_0
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_12, const_str_plain_MethodReturnMessage);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_MethodReturnMessage, tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_SignalMessage,
                const_int_0
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_13, const_str_plain_SignalMessage);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_SignalMessage, tmp_assign_source_23);
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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_8e2db9d493d0360a27a3bf19583a3201;
        tmp_globals_name_7 = (PyObject *)moduledict_dbus$connection;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_ProxyObject_tuple;
        tmp_level_name_7 = const_int_0;
        frame_376c79685225b99b38d09389dcb44bac->m_frame.f_lineno = 39;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_ProxyObject,
                const_int_0
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_14, const_str_plain_ProxyObject);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_ProxyObject, tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_digest_3aa5bee4de9b0149ae46ffed8a38c6b4;
        tmp_globals_name_8 = (PyObject *)moduledict_dbus$connection;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_is_py2_str_plain_is_py3_tuple;
        tmp_level_name_8 = const_int_0;
        frame_376c79685225b99b38d09389dcb44bac->m_frame.f_lineno = 40;
        tmp_assign_source_25 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_25;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_15 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_is_py2,
                const_int_0
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_15, const_str_plain_is_py2);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_is_py2, tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_16 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_is_py3,
                const_int_0
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_16, const_str_plain_is_py3);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_is_py3, tmp_assign_source_27);
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_3;
        int tmp_truth_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_is_py3);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py3);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2192 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_3);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

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
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain__dbus_bindings;
        tmp_globals_name_9 = (PyObject *)moduledict_dbus$connection;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_String_tuple;
        tmp_level_name_9 = const_int_0;
        frame_376c79685225b99b38d09389dcb44bac->m_frame.f_lineno = 43;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_String,
                const_int_0
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_17, const_str_plain_String);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_String, tmp_assign_source_28);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_plain__dbus_bindings;
        tmp_globals_name_10 = (PyObject *)moduledict_dbus$connection;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain_UTF8String_tuple;
        tmp_level_name_10 = const_int_0;
        frame_376c79685225b99b38d09389dcb44bac->m_frame.f_lineno = 45;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_dbus$connection,
                const_str_plain_UTF8String,
                const_int_0
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_18, const_str_plain_UTF8String);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_UTF8String, tmp_assign_source_29);
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_logging);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_logging);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1699 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_4;
        frame_376c79685225b99b38d09389dcb44bac->m_frame.f_lineno = 48;
        tmp_assign_source_30 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM(const_tuple_str_digest_0b385b2a67f6700b8faf677cdd479207_tuple, 0));

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain__logger, tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_dbus$connection$$$function_1__noop();

        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain__noop, tmp_assign_source_31);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_32 = impl___internal__$$$function_1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_1, tmp_key_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_4;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = const_str_plain_metaclass;
        tmp_metaclass_name_1 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_4;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_34 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_34;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_3, tmp_key_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_4;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 55;

        goto try_except_handler_4;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr(tmp_expression_name_2, const_str_plain___prepare__);
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain___prepare__);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_4;
        }
        tmp_tuple_element_1 = const_str_plain_SignalMatch;
        tmp_args_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_376c79685225b99b38d09389dcb44bac->m_frame.f_lineno = 55;
        tmp_assign_source_35 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_35;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_4 = tmp_class_creation_1__prepared;
        tmp_res = PyObject_HasAttr(tmp_expression_name_4, const_str_plain___getitem__);
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_4;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_type_arg_2;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = const_str_plain___name__;
        tmp_getattr_default_1 = const_str_angle_metaclass;
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_4;
        }
        tmp_right_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_type_arg_2 = tmp_class_creation_1__prepared;
        tmp_expression_name_5 = BUILTIN_TYPE1(tmp_type_arg_2);
        assert(!(tmp_expression_name_5 == NULL));
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain___name__);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_1);

            exception_lineno = 55;

            goto try_except_handler_4;
        }
        PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_2);
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 55;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_36;
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_37;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_dbus$connection_55 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_0b385b2a67f6700b8faf677cdd479207;
        tmp_res = PyObject_SetItem(locals_dbus$connection_55, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_SignalMatch;
        tmp_res = PyObject_SetItem(locals_dbus$connection_55, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_6;
        }
        if (isFrameUnusable(cache_frame_85f5fa26313b795a2ba0bae42676b298_2)) {
            Py_XDECREF(cache_frame_85f5fa26313b795a2ba0bae42676b298_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_85f5fa26313b795a2ba0bae42676b298_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_85f5fa26313b795a2ba0bae42676b298_2 = MAKE_FUNCTION_FRAME(codeobj_85f5fa26313b795a2ba0bae42676b298, module_dbus$connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_85f5fa26313b795a2ba0bae42676b298_2->m_type_description == NULL);
        frame_85f5fa26313b795a2ba0bae42676b298_2 = cache_frame_85f5fa26313b795a2ba0bae42676b298_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_85f5fa26313b795a2ba0bae42676b298_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_85f5fa26313b795a2ba0bae42676b298_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = LIST_COPY(const_list_9ccd05f56cfe4dde19b1a35dcb746f3c_list);
        tmp_res = PyObject_SetItem(locals_dbus$connection_55, const_str_plain__slots, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_locals_lookup_value_1;
            PyObject *tmp_mvar_value_5;
            int tmp_truth_name_3;
            tmp_locals_lookup_value_1 = PyObject_GetItem(locals_dbus$connection_55, const_str_plain_is_py2);

            if (tmp_locals_lookup_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_is_py2);

                    if (unlikely(tmp_mvar_value_5 == NULL)) {
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py2);
                    }

                    if (tmp_mvar_value_5 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 886 ], 28, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 62;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }

                    tmp_locals_lookup_value_1 = tmp_mvar_value_5;
                    Py_INCREF(tmp_locals_lookup_value_1);
                }
            }

            tmp_truth_name_3 = CHECK_IF_TRUE(tmp_locals_lookup_value_1);
            if (tmp_truth_name_3 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_locals_lookup_value_1);

                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_locals_lookup_value_1);
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
        }
        branch_yes_5:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_1;
            tmp_called_instance_2 = PyObject_GetItem(locals_dbus$connection_55, const_str_plain__slots);

            if (tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 2637 ], 28, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_85f5fa26313b795a2ba0bae42676b298_2->m_frame.f_lineno = 63;
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_append, &PyTuple_GET_ITEM(const_tuple_str_plain__utf8_strings_tuple, 0));

            Py_DECREF(tmp_called_instance_2);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_5:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_tuple_arg_1;
            tmp_res = MAPPING_HAS_ITEM(locals_dbus$connection_55, const_str_plain_tuple);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_name_2 = PyObject_GetItem(locals_dbus$connection_55, const_str_plain_tuple);

            if (tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 2665 ], 27, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_1 = PyObject_GetItem(locals_dbus$connection_55, const_str_plain__slots);

            if (tmp_args_element_name_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                Py_DECREF(tmp_called_name_2);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 2637 ], 28, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_85f5fa26313b795a2ba0bae42676b298_2->m_frame.f_lineno = 65;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_tuple_arg_1 = PyObject_GetItem(locals_dbus$connection_55, const_str_plain__slots);

            if (tmp_tuple_arg_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 2637 ], 28, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_tuple_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = PySequence_Tuple(tmp_tuple_arg_1);
            Py_DECREF(tmp_tuple_arg_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_dbus$connection_55, const_str_plain___slots__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_false_none_none_none_none_none_none_tuple;
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_2___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_dbus$connection_55, const_str_plain___init__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_3___hash__();

        tmp_res = PyObject_SetItem(locals_dbus$connection_55, const_str_plain___hash__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_4___eq__();

        tmp_res = PyObject_SetItem(locals_dbus$connection_55, const_str_plain___eq__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_5___ne__();

        tmp_res = PyObject_SetItem(locals_dbus$connection_55, const_str_plain___ne__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_3;
            tmp_res = MAPPING_HAS_ITEM(locals_dbus$connection_55, const_str_plain_property);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_name_3 = PyObject_GetItem(locals_dbus$connection_55, const_str_plain_property);

            if (tmp_called_name_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 1167 ], 30, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_name_2 = MAKE_FUNCTION_dbus$connection$$$function_6_lambda();

            frame_85f5fa26313b795a2ba0bae42676b298_2->m_frame.f_lineno = 138;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_name_4 = (PyObject *)&PyProperty_Type;


            tmp_args_element_name_3 = MAKE_FUNCTION_dbus$connection$$$function_6_lambda();

            frame_85f5fa26313b795a2ba0bae42676b298_2->m_frame.f_lineno = 138;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_dbus$connection_55, const_str_plain_sender, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_7___str__();

        tmp_res = PyObject_SetItem(locals_dbus$connection_55, const_str_plain___str__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_8___repr__();

        tmp_res = PyObject_SetItem(locals_dbus$connection_55, const_str_plain___repr__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_9_set_sender_name_owner();

        tmp_res = PyObject_SetItem(locals_dbus$connection_55, const_str_plain_set_sender_name_owner, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_10_matches_removal_spec();

        tmp_res = PyObject_SetItem(locals_dbus$connection_55, const_str_plain_matches_removal_spec, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_11_maybe_handle_message();

        tmp_res = PyObject_SetItem(locals_dbus$connection_55, const_str_plain_maybe_handle_message, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_12_remove();

        tmp_res = PyObject_SetItem(locals_dbus$connection_55, const_str_plain_remove, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_85f5fa26313b795a2ba0bae42676b298_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_85f5fa26313b795a2ba0bae42676b298_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_85f5fa26313b795a2ba0bae42676b298_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_85f5fa26313b795a2ba0bae42676b298_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_85f5fa26313b795a2ba0bae42676b298_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_85f5fa26313b795a2ba0bae42676b298_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if (frame_85f5fa26313b795a2ba0bae42676b298_2 == cache_frame_85f5fa26313b795a2ba0bae42676b298_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_85f5fa26313b795a2ba0bae42676b298_2);
        }
        cache_frame_85f5fa26313b795a2ba0bae42676b298_2 = NULL;

        assertFrameObject(frame_85f5fa26313b795a2ba0bae42676b298_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = const_tuple_type_object_tuple;
            tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        tmp_dictset_value = const_tuple_type_object_tuple;
        tmp_res = PyObject_SetItem(locals_dbus$connection_55, const_str_plain___orig_bases__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_5 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_SignalMatch;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_dbus$connection_55;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_376c79685225b99b38d09389dcb44bac->m_frame.f_lineno = 55;
            tmp_assign_source_38 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_38;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_37 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_37);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_dbus$connection_55);
        locals_dbus$connection_55 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dbus$connection_55);
        locals_dbus$connection_55 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 55;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_SignalMatch, tmp_assign_source_37);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain__Connection);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__Connection);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2692 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 250;

            goto try_except_handler_7;
        }

        tmp_tuple_element_4 = tmp_mvar_value_6;
        tmp_assign_source_39 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_assign_source_39, 0, tmp_tuple_element_4);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_40 = impl___internal__$$$function_1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_4, tmp_key_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_7;
        }
        tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM(tmp_dict_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_7;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_7;
        }
        tmp_condition_result_12 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_name_6 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_7;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_7;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_42 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_42;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_name_6;
        tmp_key_name_6 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_6, tmp_key_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_7;
        }
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 250;

        goto try_except_handler_7;
    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_7 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr(tmp_expression_name_7, const_str_plain___prepare__);
        tmp_condition_result_14 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kw_name_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_8 = tmp_class_creation_2__metaclass;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain___prepare__);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_7;
        }
        tmp_tuple_element_5 = const_str_plain_Connection;
        tmp_args_name_3 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_5 = tmp_class_creation_2__bases;
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_args_name_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
        frame_376c79685225b99b38d09389dcb44bac->m_frame.f_lineno = 250;
        tmp_assign_source_43 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_3, tmp_kw_name_3);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_name_3);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_43;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_name_9 = tmp_class_creation_2__prepared;
        tmp_res = PyObject_HasAttr(tmp_expression_name_9, const_str_plain___getitem__);
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_7;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_type_arg_4;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = const_str_plain___name__;
        tmp_getattr_default_2 = const_str_angle_metaclass;
        tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_7;
        }
        tmp_right_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_type_arg_4 = tmp_class_creation_2__prepared;
        tmp_expression_name_10 = BUILTIN_TYPE1(tmp_type_arg_4);
        assert(!(tmp_expression_name_10 == NULL));
        tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, const_str_plain___name__);
        Py_DECREF(tmp_expression_name_10);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_2);

            exception_lineno = 250;

            goto try_except_handler_7;
        }
        PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_6);
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 250;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_44;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_45;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_dbus$connection_250 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_0b385b2a67f6700b8faf677cdd479207;
        tmp_res = PyObject_SetItem(locals_dbus$connection_250, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_digest_68a30b075f4e0a75628bcaf031f07aa7;
        tmp_res = PyObject_SetItem(locals_dbus$connection_250, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_plain_Connection;
        tmp_res = PyObject_SetItem(locals_dbus$connection_250, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_9;
        }
        if (isFrameUnusable(cache_frame_7a89301d6439cc9e6566842d02b1f1c4_3)) {
            Py_XDECREF(cache_frame_7a89301d6439cc9e6566842d02b1f1c4_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_7a89301d6439cc9e6566842d02b1f1c4_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_7a89301d6439cc9e6566842d02b1f1c4_3 = MAKE_FUNCTION_FRAME(codeobj_7a89301d6439cc9e6566842d02b1f1c4, module_dbus$connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_7a89301d6439cc9e6566842d02b1f1c4_3->m_type_description == NULL);
        frame_7a89301d6439cc9e6566842d02b1f1c4_3 = cache_frame_7a89301d6439cc9e6566842d02b1f1c4_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_7a89301d6439cc9e6566842d02b1f1c4_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_7a89301d6439cc9e6566842d02b1f1c4_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_mvar_value_7;
            tmp_dictset_value = PyObject_GetItem(locals_dbus$connection_250, const_str_plain_ProxyObject);

            if (tmp_dictset_value == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_ProxyObject);

                    if (unlikely(tmp_mvar_value_7 == NULL)) {
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxyObject);
                    }

                    if (tmp_mvar_value_7 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 2725 ], 33, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 257;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }

                    tmp_dictset_value = tmp_mvar_value_7;
                    Py_INCREF(tmp_dictset_value);
                }
            }

            tmp_res = PyObject_SetItem(locals_dbus$connection_250, const_str_plain_ProxyObjectClass, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_13___init__();

        tmp_res = PyObject_SetItem(locals_dbus$connection_250, const_str_plain___init__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_14_activate_name_owner();

        tmp_res = PyObject_SetItem(locals_dbus$connection_250, const_str_plain_activate_name_owner, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_none_none_true_tuple;
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_15_get_object(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_dbus$connection_250, const_str_plain_get_object, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_none_none_none_none_tuple;
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_16_add_signal_receiver(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_dbus$connection_250, const_str_plain_add_signal_receiver, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_17__iter_easy_matches();

        tmp_res = PyObject_SetItem(locals_dbus$connection_250, const_str_plain__iter_easy_matches, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_none_none_none_none_tuple;
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_18_remove_signal_receiver(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_dbus$connection_250, const_str_plain_remove_signal_receiver, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_19__clean_up_signal_match();

        tmp_res = PyObject_SetItem(locals_dbus$connection_250, const_str_plain__clean_up_signal_match, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_20__signal_func();

        tmp_res = PyObject_SetItem(locals_dbus$connection_250, const_str_plain__signal_func, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_float_minus_1_0_false_true_tuple;
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_21_call_async(tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_dbus$connection_250, const_str_plain_call_async, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = const_tuple_float_minus_1_0_false_tuple;
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_22_call_blocking(tmp_defaults_6);

            tmp_res = PyObject_SetItem(locals_dbus$connection_250, const_str_plain_call_blocking, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 617;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_dbus$connection$$$function_23_call_on_disconnection();

        tmp_res = PyObject_SetItem(locals_dbus$connection_250, const_str_plain_call_on_disconnection, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7a89301d6439cc9e6566842d02b1f1c4_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7a89301d6439cc9e6566842d02b1f1c4_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7a89301d6439cc9e6566842d02b1f1c4_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7a89301d6439cc9e6566842d02b1f1c4_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7a89301d6439cc9e6566842d02b1f1c4_3, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7a89301d6439cc9e6566842d02b1f1c4_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if (frame_7a89301d6439cc9e6566842d02b1f1c4_3 == cache_frame_7a89301d6439cc9e6566842d02b1f1c4_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_7a89301d6439cc9e6566842d02b1f1c4_3);
        }
        cache_frame_7a89301d6439cc9e6566842d02b1f1c4_3 = NULL;

        assertFrameObject(frame_7a89301d6439cc9e6566842d02b1f1c4_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_9;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_compexpr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_dbus$connection_250, const_str_plain___orig_bases__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_9;
        }
        branch_no_10:;
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_7 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = const_str_plain_Connection;
            tmp_args_name_4 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_args_name_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            Py_INCREF(tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_args_name_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_dbus$connection_250;
            Py_INCREF(tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_args_name_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_376c79685225b99b38d09389dcb44bac->m_frame.f_lineno = 250;
            tmp_assign_source_46 = CALL_FUNCTION(tmp_called_name_7, tmp_args_name_4, tmp_kw_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_46;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_45 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_45);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_dbus$connection_250);
        locals_dbus$connection_250 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dbus$connection_250);
        locals_dbus$connection_250 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;

        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 250;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_dbus$connection, (Nuitka_StringObject *)const_str_plain_Connection, tmp_assign_source_45);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_376c79685225b99b38d09389dcb44bac);
#endif
    popFrameStack();

    assertFrameObject(frame_376c79685225b99b38d09389dcb44bac);

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_376c79685225b99b38d09389dcb44bac);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_376c79685225b99b38d09389dcb44bac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_376c79685225b99b38d09389dcb44bac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_376c79685225b99b38d09389dcb44bac, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;

    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;


    return module_dbus$connection;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
