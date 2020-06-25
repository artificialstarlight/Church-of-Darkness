/* Generated code for Python module 'systemd.journal'
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

/* The "module_systemd$journal" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_systemd$journal;
PyDictObject *moduledict_systemd$journal;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_plain_KERNEL_USEC;
static PyObject *const_str_plain_seek_realtime;
static PyObject *const_str_plain_COREDUMP_PID;
static PyObject *const_str_plain__next;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_plain_level_prefix;
static PyObject *const_str_plain_microseconds;
static PyObject *const_str_plain___CURSOR;
static PyObject *const_str_plain_COREDUMP_UID;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_os;
static PyObject *const_str_digest_a4de60e4dd1b50e7223eeddbc301c61c;
static PyObject *const_str_plain__Reader;
static PyObject *const_str_plain_next;
static PyObject *const_str_digest_acdc5dad05f90ed5b715c44a938bc5e6;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain_flags;
static PyObject *const_dict_83aae1e6258c89f0a2f16fbc1b54323c;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_plain_str;
extern PyObject *const_tuple_none_none_none_none_tuple;
static PyObject *const_str_plain_messageid_match;
static PyObject *const_str_plain_COREDUMP_SESSION;
static PyObject *const_tuple_str_plain_val_str_plain_self_str_plain_key_tuple;
static PyObject *const_str_plain_python;
extern PyObject *const_str_plain_path;
static PyObject *const_str_digest_4c89bbac7f3714b7cbb830562f48f26e;
static PyObject *const_str_digest_315d5240eb0b0faa3cfa0874c0f0d861;
static PyObject *const_tuple_str_plain___version___str_plain_sendv_str_plain_stream_fd_tuple;
static PyObject *const_tuple_str_plain_ChainMap_tuple;
static PyObject *const_str_plain_machineid;
static PyObject *const_str_plain_handleError;
extern PyObject *const_str_plain_name;
static PyObject *const_tuple_b12bc07623a651b3b8069b3f6e7ff045_tuple;
static PyObject *const_str_plain_SYSTEM;
static PyObject *const_str_plain_pathname;
static PyObject *const_str_plain_lineno;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
static PyObject *const_str_plain_this_boot;
static PyObject *const_str_plain__SOURCE_REALTIME_TIMESTAMP;
extern PyObject *const_int_0;
static PyObject *const_str_plain__MACHINE_ID;
static PyObject *const_str_plain_record;
static PyObject *const_str_plain_get_boot;
static PyObject *const_set_e3bdae48c9321709f8a0c13bfa83230f;
static PyObject *const_str_plain_OS_ROOT;
static PyObject *const_str_digest_0b8b46e68996d7cdf0f99a05ce2628b8;
static PyObject *const_str_digest_958c937028b9f7e7257a16fbda8ad499;
static PyObject *const_str_plain__convert_field;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_CODE_FUNC;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain__convert_realtime;
static PyObject *const_str_plain__datetime;
static PyObject *const_tuple_str_plain_self_str_plain_messageid_tuple;
static PyObject *const_tuple_d2fdfa2eb59d65ee948c2b405c2e485c_tuple;
static PyObject *const_str_digest_42832435507ed9362d31d070f6314f56;
static PyObject *const_str_plain_LOG_INFO;
extern PyObject *const_str_plain_emit;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_field;
extern PyObject *const_str_digest_fcf040720b88d60da4ce975010c44a3a;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_plain__convert_source_monotonic;
static PyObject *const_tuple_7d0fd87a68517c96ebba419e8c01aba9_tuple;
static PyObject *const_tuple_str_plain_Monotonic_tuple;
static PyObject *const_str_plain__get_catalog;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_plain__SOURCE_MONOTONIC_TIMESTAMP;
static PyObject *const_str_digest_29a1eaa37a6e2ddd91147668c3b6987f;
extern PyObject *const_str_plain_format;
static PyObject *const_str_plain__sys;
static PyObject *const_str_plain_log_level;
static PyObject *const_str_plain_mid;
static PyObject *const_tuple_9121667be05a8b5f7af2ada16875086e_tuple;
static PyObject *const_str_digest_4ed08209ad5320e7c4e89a1b746a5899;
static PyObject *const_str_plain__IDENT_CHARACTER;
static PyObject *const_str_digest_e40d1083a9fb62d463ef20159b6e6bd4;
static PyObject *const_tuple_18f8302865f21b708ebb4a5f98ab47c3_tuple;
static PyObject *const_str_plain_timedelta;
static PyObject *const_str_plain_converters;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_CRITICAL;
extern PyObject *const_str_plain_fromtimestamp;
static PyObject *const_str_digest_8014bd0a47eec9435fe2060a99b8b3e7;
static PyObject *const_str_plain_entry;
static PyObject *const_str_plain_us;
extern PyObject *const_str_chr_61;
static PyObject *const_str_plain__convert_trivial;
static PyObject *const_tuple_str_plain_self_str_plain_field_str_plain___class___tuple;
static PyObject *const_str_digest_7724d34893b1c2ab6fb285d1595bf355;
static PyObject *const_str_plain_map_priority;
static PyObject *const_tuple_int_pos_1_tuple;
static PyObject *const_str_digest_1aa4617e7e8300091e0a4d919384056f;
static PyObject *const_str_plain_COREDUMP_SIGNAL;
static PyObject *const_str_plain_WARNING;
static PyObject *const_str_digest_3f4833ec1dfea57c4538bcb752439808;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_digest_10a307e1d3b4f4399ff51cb55c0f5d58;
static PyObject *const_tuple_str_plain_self_str_plain_ans_tuple;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_77b5256aa381bc96240e908e295a480f;
static PyObject *const_str_digest_5ac9fa6c1900185f7492bdc201333f71;
static PyObject *const_str_plain_w;
static PyObject *const_str_plain__get_realtime;
extern PyObject *const_str_plain_value;
static PyObject *const_str_plain_get_next;
static PyObject *const_tuple_str_plain_self_str_plain_bootid_tuple;
extern PyObject *const_str_plain_collections;
static PyObject *const_str_digest_150c127e289e9cda4759091e152523a2;
static PyObject *const_str_plain__convert_entry;
static PyObject *const_str_plain_LOG_CRIT;
static PyObject *const_str_digest_6fb2981bbe8e2b68cc3103ac5e293911;
extern PyObject *const_str_plain_ans;
extern PyObject *const_str_plain_datetime;
static PyObject *const_str_digest_577fd6e9bddfedcbbde6041a8581bf0a;
static PyObject *const_str_plain_THREAD_NAME;
static PyObject *const_str_digest_ffdb871eb2770cd96cd0f10de05a4adf;
static PyObject *const_str_plain_pri;
static PyObject *const_str_digest_69b886476f641548fe7f3df6f897d5f8;
static PyObject *const_str_plain_JournalHandler;
extern PyObject *const_str_plain_strftime;
extern PyObject *const_str_plain_decode;
static PyObject *const_str_digest_19536bb4146d07748c7d8919355ea79f;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_plain_processName;
extern PyObject *const_slice_none_int_pos_3_none;
static PyObject *const_str_plain_Monotonic;
static PyObject *const_str_plain_RUNTIME_ONLY;
static PyObject *const_str_digest_39542a61c09c6d6387afa1bf5916f1aa;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_CODE_ARGS;
static PyObject *const_tuple_str_plain_mid_tuple;
static PyObject *const_str_plain_LOG_WARNING;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_plain__logging;
static PyObject *const_str_digest_e095dc2ef6675a4d311fe55baf6f298a;
static PyObject *const_str_plain_realtime;
static PyObject *const_str_plain_Reader;
static PyObject *const_str_plain__convert_timestamp;
static PyObject *const_str_digest_097e2af75f6d3cdffafe42cac011dd94;
static PyObject *const_str_plain_get_catalog;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain_SYSTEM_ONLY;
static PyObject *const_str_plain___next__;
static PyObject *const_str_plain__BOOT_ID;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_copy;
static PyObject *const_int_pos_1000000;
extern PyObject *const_str_plain_key;
static PyObject *const_str_plain_INITRD_USEC;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_ERROR;
static PyObject *const_bytes_chr_61;
extern PyObject *const_str_plain_level;
extern PyObject *const_tuple_int_pos_3_int_pos_3_tuple;
static PyObject *const_str_digest_84805c5d0c36c4895495c9c02fc3aaba;
static PyObject *const_str_digest_96e0bca0c9bfb42fc2ff0a38c83dbea8;
static PyObject *const_tuple_622d8e5bdbbbee6d16defef14b4ca236_tuple;
static PyObject *const_str_plain_maps;
static PyObject *const_str_plain_DEBUG;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_LOGGER;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_result;
static PyObject *const_str_plain__os;
static PyObject *const_str_plain_EXCEPTION_INFO;
static PyObject *const_str_plain_COREDUMP;
static PyObject *const_str_plain___REALTIME_TIMESTAMP;
extern PyObject *const_str_plain_traceback;
static PyObject *const_str_digest_01ca262ea6fbc6568838440e24839143;
extern PyObject *const_str_plain_bytes;
static PyObject *const_str_digest_98cbf32d810591fc9ca3271e790fa9ab;
static PyObject *const_str_plain_extract_stack;
static PyObject *const_str_plain_division;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_8b4c8c81913e132a2fb432c041f3150f;
extern PyObject *const_str_plain_id;
static PyObject *const_str_plain__SYSTEMD_SESSION;
static PyObject *const_str_digest_e7aee1712a87065820dfdb862cbba591;
static PyObject *const_str_digest_5f7e8857f68fdabf4be40762b214277a;
extern PyObject *const_str_plain_argv;
static PyObject *const_str_plain_bootid;
extern PyObject *const_str_plain_syslog;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_extend;
static PyObject *const_str_plain_MESSAGE;
static PyObject *const_str_digest_4a6adbd3133822985b0246d19784ca26;
static PyObject *const_str_plain_extras;
extern PyObject *const_str_plain_s;
static PyObject *const_str_plain_Handler;
static PyObject *const_str_plain_PRIORITY;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_5cf7359cf4084859ed6c25fb6aaf8f72;
static PyObject *const_str_plain_wait;
static PyObject *const_str_plain__get_monotonic;
static PyObject *const_str_plain_convert;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_f318c00ec00c51d5b7c3ca58b4b93afc_tuple;
static PyObject *const_tuple_4c377ac488c9c6d9e906494475447c9b_tuple;
static PyObject *const_str_plain__get_cursor;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_5f2cc55bec6a0e0c83461cd1c4197a6e;
static PyObject *const_str_plain_this_machine;
static PyObject *const_str_digest_c9198050bf7f98bfc630bb56840f7994;
static PyObject *const_str_plain_files;
static PyObject *const_str_plain_threadName;
static PyObject *const_str_plain_LOG_DEBUG;
static PyObject *const_str_plain__journal;
static PyObject *const_str_plain_stream;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain_val;
static PyObject *const_str_plain_LOG_NOTICE;
extern PyObject *const_str_plain_msg;
static PyObject *const_str_digest_6a0fbab1ba397fb45012e49e87c8071d;
static PyObject *const_tuple_str_plain_m_tuple;
static PyObject *const_str_plain_NOTSET;
static PyObject *const_str_plain_MESSAGE_ID;
extern PyObject *const_str_plain_x;
static PyObject *const_str_plain__reader;
static PyObject *const_str_plain_CURRENT_USER;
static PyObject *const_tuple_2b0e0ebef1a98bb347c70e1cff449389_tuple;
static PyObject *const_str_plain__SYSTEMD_OWNER_UID;
static PyObject *const_str_plain_ChainMap;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_SYSLOG_IDENTIFIER;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain__traceback;
static PyObject *const_str_plain__make_line;
static PyObject *const_str_digest_836465ac46514b08e2d11d1ffbd311af;
extern PyObject *const_str_plain_update;
static PyObject *const_str_digest_55060ab7359071f051a877504aeb95c2;
static PyObject *const_str_plain_seek_monotonic;
extern PyObject *const_str_plain_identifier;
static PyObject *const_str_plain_exc_text;
extern PyObject *const_str_plain_uuid;
static PyObject *const_str_plain_CODE_LINE;
static PyObject *const_str_digest_8e41bf09a8a4f3595a81c5da2ee84e4e;
extern PyObject *const_str_plain_version_info;
static PyObject *const_str_plain__convert_uuid;
static PyObject *const_str_plain_COREDUMP_GID;
static PyObject *const_str_plain_NOP;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_logging;
static PyObject *const_str_plain_INFO;
static PyObject *const_str_plain_add_match;
extern PyObject *const_str_plain___iter__;
static PyObject *const_str_plain__PID;
static PyObject *const_str_plain_priority;
static PyObject *const_str_digest_b3aeeb166cc56a6f6c1a30aee9653c69;
static PyObject *const_str_plain_sender_function;
static PyObject *const_str_digest_57ddb8f9eb6282d599d538eff210b2da;
static PyObject *const_str_plain_LOG_EMERG;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_plain_UUID;
static PyObject *const_str_digest_bc3c83f08cf26707f1c5bfa34c5897ed;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_plain__ChainMap;
static PyObject *const_str_plain__extra;
extern PyObject *const_str_plain_arg;
static PyObject *const_str_plain_APPEND;
static PyObject *const_str_plain__uuid;
extern PyObject *const_str_plain_args;
static PyObject *const_tuple_str_digest_a3ed2e23aa4d2da087c40a572b2a5866_tuple;
static PyObject *const_str_plain_DEFAULT_CONVERTERS;
static PyObject *const_str_digest_8031fc2f10e44a864c4e0c40a80e6af4;
extern PyObject *const_str_plain_items;
static PyObject *const_tuple_str_plain_s_tuple;
static PyObject *const_tuple_f8cef5e665e05080420286a82efcdee6_tuple;
static PyObject *const_tuple_str_plain_id128_tuple;
static PyObject *const_tuple_748bf622b3a20d4311e01ead1081948d_tuple;
extern PyObject *const_str_plain_staticmethod;
static PyObject *const_str_plain_SESSION_ID;
static PyObject *const_tuple_d5c103a361e5d213cffb9aa55f55ef6a_tuple;
static PyObject *const_str_plain_id128;
static PyObject *const_str_plain_CODE_FILE;
static PyObject *const_str_plain_INVALIDATE;
static PyObject *const_str_plain_PROCESS_NAME;
static PyObject *const_str_plain_messageid;
static PyObject *const_str_plain_LEADER;
static PyObject *const_str_digest_7e04a95681e0be7ecf733adeaffd90cc;
static PyObject *const_tuple_str_plain_self_str_plain_skip_tuple;
static PyObject *const_str_plain_levelno;
static PyObject *const_str_plain__AUDIT_SESSION;
extern PyObject *const_str_digest_09d63a5a61044765cbef1a09e46446f1;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_int;
static PyObject *const_str_plain_stream_fd;
static PyObject *const_str_plain__AUDIT_LOGINUID;
static PyObject *const_str_plain__UID;
static PyObject *const_str_plain_fdopen;
extern PyObject *const_str_plain_funcName;
static PyObject *const_str_plain_USERSPACE_USEC;
extern PyObject *const_str_plain_limit;
static PyObject *const_str_plain_LOG_ERR;
static PyObject *const_tuple_str_plain_self_str_plain_level_str_plain_i_tuple;
static PyObject *const_str_plain_fd;
static PyObject *const_str_digest_1a5ba3b8abaf2ae3c77b28febdf270fc;
static PyObject *const_str_digest_e6405dabe21ce11388667cf5301e8bbe;
static PyObject *const_str_digest_f437c42b79eeb32fdcf80c42330a37e1;
static PyObject *const_str_digest_9817c04eae2bbb567185cfa0c0fdb8a1;
extern PyObject *const_str_plain_send;
static PyObject *const_str_plain_LOCAL_ONLY;
static PyObject *const_str_plain__valid_field_name;
extern PyObject *const_tuple_str_plain_x_tuple;
static PyObject *const_tuple_be555bfae0e8956e0ecd6677337f28ed_tuple;
static PyObject *const_str_plain__get_all;
static PyObject *const_tuple_str_plain_field_str_plain_value_tuple;
static PyObject *const_tuple_5d9f1ebaa97d51aaa85652aceccc26c3_tuple;
static PyObject *const_str_digest_6e8934a3d6cd15317cffcf67c88e8fb1;
static PyObject *const_str_digest_58bf094e9c8d5e9cd91e0d96cc6d7464;
static PyObject *const_str_digest_f05e55802dd9ab1c09e4aff8f146be51;
static PyObject *const_tuple_1a939bbd7e380cd4ba0c6c56c58be07b_tuple;
static PyObject *const_str_plain_EXCEPTION_TEXT;
static PyObject *const_str_plain_mapPriority;
static PyObject *const_str_digest_a3ed2e23aa4d2da087c40a572b2a5866;
static PyObject *const_str_plain_skip;
static PyObject *const_str_plain_LOG_ALERT;
static PyObject *const_tuple_int_pos_3_tuple;
static PyObject *const_str_digest_b5f31d15ba97aa770958542e16c473bd;
static PyObject *const_str_plain_hex;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_digest_7c225fcacae7c67d5a4a1f2f3b6dea03;
static PyObject *const_str_digest_a9f9a21e276932d061c34fdf077216a6;
static PyObject *const_tuple_str_plain_self_str_plain_machineid_tuple;
static PyObject *const_str_plain__id128;
static PyObject *const_str_plain__GID;
static PyObject *const_str_plain___MONOTONIC_TIMESTAMP;
extern PyObject *const_str_plain_exc_info;
extern PyObject *const_str_angle_listcomp;
static PyObject *const_str_plain_SYSLOG_FACILITY;
static PyObject *const_str_plain_COREDUMP_TIMESTAMP;
static PyObject *const_str_digest_4907563c396602c16f95e1ad129f7638;
static PyObject *const_tuple_str_plain_levelno_tuple;
static PyObject *const_str_plain_monotonic;
static PyObject *const_str_plain_SYSLOG_PID;
static PyObject *const_str_plain__convert_monotonic;
static PyObject *const_str_plain_query_unique;
static PyObject *const_str_plain_ERRNO;
static PyObject *const_str_plain_EXIT_STATUS;
static PyObject *const_tuple_str_plain_t_tuple;
static PyObject *const_str_plain_get_previous;
extern PyObject *const_int_pos_3;
static PyObject *const_tuple_str_plain_self_str_plain_realtime_str_plain___class___tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_total_seconds;
extern PyObject *const_int_pos_7;
static PyObject *const_str_plain_sendv;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_get_machine;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_KERNEL_USEC = UNSTREAM_STRING_ASCII(&constant_bin[ 83107 ], 11, 1);
    const_str_plain_seek_realtime = UNSTREAM_STRING_ASCII(&constant_bin[ 83118 ], 13, 1);
    const_str_plain_COREDUMP_PID = UNSTREAM_STRING_ASCII(&constant_bin[ 83131 ], 12, 1);
    const_str_plain__next = UNSTREAM_STRING_ASCII(&constant_bin[ 10850 ], 5, 1);
    const_str_plain_level_prefix = UNSTREAM_STRING_ASCII(&constant_bin[ 83143 ], 12, 1);
    const_str_plain_microseconds = UNSTREAM_STRING_ASCII(&constant_bin[ 83155 ], 12, 1);
    const_str_plain___CURSOR = UNSTREAM_STRING_ASCII(&constant_bin[ 83167 ], 8, 1);
    const_str_plain_COREDUMP_UID = UNSTREAM_STRING_ASCII(&constant_bin[ 83175 ], 12, 1);
    const_str_digest_a4de60e4dd1b50e7223eeddbc301c61c = UNSTREAM_STRING_ASCII(&constant_bin[ 83187 ], 24, 0);
    const_str_plain__Reader = UNSTREAM_STRING_ASCII(&constant_bin[ 10820 ], 7, 1);
    const_str_plain_next = UNSTREAM_STRING_ASCII(&constant_bin[ 10851 ], 4, 1);
    const_str_digest_acdc5dad05f90ed5b715c44a938bc5e6 = UNSTREAM_STRING_ASCII(&constant_bin[ 83211 ], 207, 0);
    const_dict_83aae1e6258c89f0a2f16fbc1b54323c = _PyDict_NewPresized( 1 );
    PyDict_SetItem(const_dict_83aae1e6258c89f0a2f16fbc1b54323c, const_str_plain_limit, const_int_pos_2);
    assert(PyDict_Size(const_dict_83aae1e6258c89f0a2f16fbc1b54323c) == 1);
    const_str_plain_messageid_match = UNSTREAM_STRING_ASCII(&constant_bin[ 83418 ], 15, 1);
    const_str_plain_COREDUMP_SESSION = UNSTREAM_STRING_ASCII(&constant_bin[ 83433 ], 16, 1);
    const_tuple_str_plain_val_str_plain_self_str_plain_key_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_val_str_plain_self_str_plain_key_tuple, 0, const_str_plain_val); Py_INCREF(const_str_plain_val);
    PyTuple_SET_ITEM(const_tuple_str_plain_val_str_plain_self_str_plain_key_tuple, 1, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_val_str_plain_self_str_plain_key_tuple, 2, const_str_plain_key); Py_INCREF(const_str_plain_key);
    const_str_plain_python = UNSTREAM_STRING_ASCII(&constant_bin[ 24657 ], 6, 1);
    const_str_digest_4c89bbac7f3714b7cbb830562f48f26e = UNSTREAM_STRING_ASCII(&constant_bin[ 83449 ], 432, 0);
    const_str_digest_315d5240eb0b0faa3cfa0874c0f0d861 = UNSTREAM_STRING_ASCII(&constant_bin[ 83881 ], 61, 0);
    const_tuple_str_plain___version___str_plain_sendv_str_plain_stream_fd_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain___version___str_plain_sendv_str_plain_stream_fd_tuple, 0, const_str_plain___version__); Py_INCREF(const_str_plain___version__);
    const_str_plain_sendv = UNSTREAM_STRING_ASCII(&constant_bin[ 10244 ], 5, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain___version___str_plain_sendv_str_plain_stream_fd_tuple, 1, const_str_plain_sendv); Py_INCREF(const_str_plain_sendv);
    const_str_plain_stream_fd = UNSTREAM_STRING_ASCII(&constant_bin[ 10271 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain___version___str_plain_sendv_str_plain_stream_fd_tuple, 2, const_str_plain_stream_fd); Py_INCREF(const_str_plain_stream_fd);
    const_tuple_str_plain_ChainMap_tuple = PyTuple_New(1);
    const_str_plain_ChainMap = UNSTREAM_STRING_ASCII(&constant_bin[ 10048 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_ChainMap_tuple, 0, const_str_plain_ChainMap); Py_INCREF(const_str_plain_ChainMap);
    const_str_plain_machineid = UNSTREAM_STRING_ASCII(&constant_bin[ 83942 ], 9, 1);
    const_str_plain_handleError = UNSTREAM_STRING_ASCII(&constant_bin[ 83951 ], 11, 1);
    const_tuple_b12bc07623a651b3b8069b3f6e7ff045_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_b12bc07623a651b3b8069b3f6e7ff045_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_record = UNSTREAM_STRING_ASCII(&constant_bin[ 83962 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_b12bc07623a651b3b8069b3f6e7ff045_tuple, 1, const_str_plain_record); Py_INCREF(const_str_plain_record);
    PyTuple_SET_ITEM(const_tuple_b12bc07623a651b3b8069b3f6e7ff045_tuple, 2, const_str_plain_msg); Py_INCREF(const_str_plain_msg);
    const_str_plain_pri = UNSTREAM_STRING_ASCII(&constant_bin[ 10883 ], 3, 1);
    PyTuple_SET_ITEM(const_tuple_b12bc07623a651b3b8069b3f6e7ff045_tuple, 3, const_str_plain_pri); Py_INCREF(const_str_plain_pri);
    const_str_plain_extras = UNSTREAM_STRING_ASCII(&constant_bin[ 83968 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_b12bc07623a651b3b8069b3f6e7ff045_tuple, 4, const_str_plain_extras); Py_INCREF(const_str_plain_extras);
    const_str_plain_SYSTEM = UNSTREAM_STRING_ASCII(&constant_bin[ 989 ], 6, 1);
    const_str_plain_pathname = UNSTREAM_STRING_ASCII(&constant_bin[ 83974 ], 8, 1);
    const_str_plain_lineno = UNSTREAM_STRING_ASCII(&constant_bin[ 83982 ], 6, 1);
    const_str_plain_this_boot = UNSTREAM_STRING_ASCII(&constant_bin[ 83988 ], 9, 1);
    const_str_plain__SOURCE_REALTIME_TIMESTAMP = UNSTREAM_STRING_ASCII(&constant_bin[ 83997 ], 26, 1);
    const_str_plain__MACHINE_ID = UNSTREAM_STRING_ASCII(&constant_bin[ 84023 ], 11, 1);
    const_str_plain_get_boot = UNSTREAM_STRING_ASCII(&constant_bin[ 84034 ], 8, 1);
    const_set_e3bdae48c9321709f8a0c13bfa83230f = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 84042 ], 116);
    const_str_plain_OS_ROOT = UNSTREAM_STRING_ASCII(&constant_bin[ 84158 ], 7, 1);
    const_str_digest_0b8b46e68996d7cdf0f99a05ce2628b8 = UNSTREAM_STRING_ASCII(&constant_bin[ 84165 ], 35, 0);
    const_str_digest_958c937028b9f7e7257a16fbda8ad499 = UNSTREAM_STRING_ASCII(&constant_bin[ 84200 ], 21, 0);
    const_str_plain__convert_field = UNSTREAM_STRING_ASCII(&constant_bin[ 84207 ], 14, 1);
    const_str_plain_CODE_FUNC = UNSTREAM_STRING_ASCII(&constant_bin[ 84221 ], 9, 1);
    const_str_plain__convert_realtime = UNSTREAM_STRING_ASCII(&constant_bin[ 10656 ], 17, 1);
    const_str_plain__datetime = UNSTREAM_STRING_ASCII(&constant_bin[ 9865 ], 9, 1);
    const_tuple_str_plain_self_str_plain_messageid_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_messageid_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_messageid = UNSTREAM_STRING_ASCII(&constant_bin[ 83418 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_messageid_tuple, 1, const_str_plain_messageid); Py_INCREF(const_str_plain_messageid);
    const_tuple_d2fdfa2eb59d65ee948c2b405c2e485c_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_d2fdfa2eb59d65ee948c2b405c2e485c_tuple, 0, const_str_plain_identifier); Py_INCREF(const_str_plain_identifier);
    const_str_plain_priority = UNSTREAM_STRING_ASCII(&constant_bin[ 10883 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_d2fdfa2eb59d65ee948c2b405c2e485c_tuple, 1, const_str_plain_priority); Py_INCREF(const_str_plain_priority);
    PyTuple_SET_ITEM(const_tuple_d2fdfa2eb59d65ee948c2b405c2e485c_tuple, 2, const_str_plain_level_prefix); Py_INCREF(const_str_plain_level_prefix);
    const_str_plain_fd = UNSTREAM_STRING_ASCII(&constant_bin[ 10278 ], 2, 1);
    PyTuple_SET_ITEM(const_tuple_d2fdfa2eb59d65ee948c2b405c2e485c_tuple, 3, const_str_plain_fd); Py_INCREF(const_str_plain_fd);
    const_str_digest_42832435507ed9362d31d070f6314f56 = UNSTREAM_STRING_ASCII(&constant_bin[ 84230 ], 20, 0);
    const_str_plain_LOG_INFO = UNSTREAM_STRING_ASCII(&constant_bin[ 10463 ], 8, 1);
    const_str_plain__convert_source_monotonic = UNSTREAM_STRING_ASCII(&constant_bin[ 10695 ], 25, 1);
    const_tuple_7d0fd87a68517c96ebba419e8c01aba9_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_7d0fd87a68517c96ebba419e8c01aba9_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_monotonic = UNSTREAM_STRING_ASCII(&constant_bin[ 10711 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_7d0fd87a68517c96ebba419e8c01aba9_tuple, 1, const_str_plain_monotonic); Py_INCREF(const_str_plain_monotonic);
    const_str_plain_bootid = UNSTREAM_STRING_ASCII(&constant_bin[ 83300 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_7d0fd87a68517c96ebba419e8c01aba9_tuple, 2, const_str_plain_bootid); Py_INCREF(const_str_plain_bootid);
    PyTuple_SET_ITEM(const_tuple_7d0fd87a68517c96ebba419e8c01aba9_tuple, 3, const_str_plain___class__); Py_INCREF(const_str_plain___class__);
    const_tuple_str_plain_Monotonic_tuple = PyTuple_New(1);
    const_str_plain_Monotonic = UNSTREAM_STRING_ASCII(&constant_bin[ 9834 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_Monotonic_tuple, 0, const_str_plain_Monotonic); Py_INCREF(const_str_plain_Monotonic);
    const_str_plain__get_catalog = UNSTREAM_STRING_ASCII(&constant_bin[ 10178 ], 12, 1);
    const_str_plain__SOURCE_MONOTONIC_TIMESTAMP = UNSTREAM_STRING_ASCII(&constant_bin[ 84250 ], 27, 1);
    const_str_digest_29a1eaa37a6e2ddd91147668c3b6987f = UNSTREAM_STRING_ASCII(&constant_bin[ 84277 ], 19, 0);
    const_str_plain__sys = UNSTREAM_STRING_ASCII(&constant_bin[ 1309 ], 4, 1);
    const_str_plain_log_level = UNSTREAM_STRING_ASCII(&constant_bin[ 84296 ], 9, 1);
    const_str_plain_mid = UNSTREAM_STRING_ASCII(&constant_bin[ 14212 ], 3, 1);
    const_tuple_9121667be05a8b5f7af2ada16875086e_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_9121667be05a8b5f7af2ada16875086e_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_9121667be05a8b5f7af2ada16875086e_tuple, 1, const_str_plain_key); Py_INCREF(const_str_plain_key);
    PyTuple_SET_ITEM(const_tuple_9121667be05a8b5f7af2ada16875086e_tuple, 2, const_str_plain_value); Py_INCREF(const_str_plain_value);
    const_str_plain_convert = UNSTREAM_STRING_ASCII(&constant_bin[ 10617 ], 7, 1);
    PyTuple_SET_ITEM(const_tuple_9121667be05a8b5f7af2ada16875086e_tuple, 3, const_str_plain_convert); Py_INCREF(const_str_plain_convert);
    const_str_digest_4ed08209ad5320e7c4e89a1b746a5899 = UNSTREAM_STRING_ASCII(&constant_bin[ 84305 ], 15, 0);
    const_str_plain__IDENT_CHARACTER = UNSTREAM_STRING_ASCII(&constant_bin[ 9923 ], 16, 1);
    const_str_digest_e40d1083a9fb62d463ef20159b6e6bd4 = UNSTREAM_STRING_ASCII(&constant_bin[ 84320 ], 16, 0);
    const_tuple_18f8302865f21b708ebb4a5f98ab47c3_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_18f8302865f21b708ebb4a5f98ab47c3_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_skip = UNSTREAM_STRING_ASCII(&constant_bin[ 67561 ], 4, 1);
    PyTuple_SET_ITEM(const_tuple_18f8302865f21b708ebb4a5f98ab47c3_tuple, 1, const_str_plain_skip); Py_INCREF(const_str_plain_skip);
    const_str_plain_entry = UNSTREAM_STRING_ASCII(&constant_bin[ 79821 ], 5, 1);
    PyTuple_SET_ITEM(const_tuple_18f8302865f21b708ebb4a5f98ab47c3_tuple, 2, const_str_plain_entry); Py_INCREF(const_str_plain_entry);
    PyTuple_SET_ITEM(const_tuple_18f8302865f21b708ebb4a5f98ab47c3_tuple, 3, const_str_plain___class__); Py_INCREF(const_str_plain___class__);
    const_str_plain_timedelta = UNSTREAM_STRING_ASCII(&constant_bin[ 84336 ], 9, 1);
    const_str_plain_converters = UNSTREAM_STRING_ASCII(&constant_bin[ 83532 ], 10, 1);
    const_str_plain_CRITICAL = UNSTREAM_STRING_ASCII(&constant_bin[ 84345 ], 8, 1);
    const_str_digest_8014bd0a47eec9435fe2060a99b8b3e7 = UNSTREAM_STRING_ASCII(&constant_bin[ 84353 ], 108, 0);
    const_str_plain_us = UNSTREAM_STRING_ASCII(&constant_bin[ 961 ], 2, 1);
    const_str_plain__convert_trivial = UNSTREAM_STRING_ASCII(&constant_bin[ 10782 ], 16, 1);
    const_tuple_str_plain_self_str_plain_field_str_plain___class___tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_field_str_plain___class___tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_field_str_plain___class___tuple, 1, const_str_plain_field); Py_INCREF(const_str_plain_field);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_field_str_plain___class___tuple, 2, const_str_plain___class__); Py_INCREF(const_str_plain___class__);
    const_str_digest_7724d34893b1c2ab6fb285d1595bf355 = UNSTREAM_STRING_ASCII(&constant_bin[ 84461 ], 19, 0);
    const_str_plain_map_priority = UNSTREAM_STRING_ASCII(&constant_bin[ 10879 ], 12, 1);
    const_tuple_int_pos_1_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_int_pos_1_tuple, 0, const_int_pos_1); Py_INCREF(const_int_pos_1);
    const_str_digest_1aa4617e7e8300091e0a4d919384056f = UNSTREAM_STRING_ASCII(&constant_bin[ 84480 ], 325, 0);
    const_str_plain_COREDUMP_SIGNAL = UNSTREAM_STRING_ASCII(&constant_bin[ 84805 ], 15, 1);
    const_str_plain_WARNING = UNSTREAM_STRING_ASCII(&constant_bin[ 10497 ], 7, 1);
    const_str_digest_3f4833ec1dfea57c4538bcb752439808 = UNSTREAM_STRING_ASCII(&constant_bin[ 84820 ], 54, 0);
    const_str_digest_10a307e1d3b4f4399ff51cb55c0f5d58 = UNSTREAM_STRING_ASCII(&constant_bin[ 84874 ], 1272, 0);
    const_tuple_str_plain_self_str_plain_ans_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_ans_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_ans_tuple, 1, const_str_plain_ans); Py_INCREF(const_str_plain_ans);
    const_str_digest_77b5256aa381bc96240e908e295a480f = UNSTREAM_STRING_ASCII(&constant_bin[ 86146 ], 257, 0);
    const_str_digest_5ac9fa6c1900185f7492bdc201333f71 = UNSTREAM_STRING_ASCII(&constant_bin[ 86403 ], 14, 0);
    const_str_plain_w = UNSTREAM_STRING_ASCII(&constant_bin[ 763 ], 1, 1);
    const_str_plain__get_realtime = UNSTREAM_STRING_ASCII(&constant_bin[ 86417 ], 13, 1);
    const_str_plain_get_next = UNSTREAM_STRING_ASCII(&constant_bin[ 86430 ], 8, 1);
    const_tuple_str_plain_self_str_plain_bootid_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_bootid_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_bootid_tuple, 1, const_str_plain_bootid); Py_INCREF(const_str_plain_bootid);
    const_str_digest_150c127e289e9cda4759091e152523a2 = UNSTREAM_STRING_ASCII(&constant_bin[ 86438 ], 303, 0);
    const_str_plain__convert_entry = UNSTREAM_STRING_ASCII(&constant_bin[ 86741 ], 14, 1);
    const_str_plain_LOG_CRIT = UNSTREAM_STRING_ASCII(&constant_bin[ 10555 ], 8, 1);
    const_str_digest_6fb2981bbe8e2b68cc3103ac5e293911 = UNSTREAM_STRING_ASCII(&constant_bin[ 86755 ], 21, 0);
    const_str_digest_577fd6e9bddfedcbbde6041a8581bf0a = UNSTREAM_STRING_ASCII(&constant_bin[ 86776 ], 144, 0);
    const_str_plain_THREAD_NAME = UNSTREAM_STRING_ASCII(&constant_bin[ 86920 ], 11, 1);
    const_str_digest_ffdb871eb2770cd96cd0f10de05a4adf = UNSTREAM_STRING_ASCII(&constant_bin[ 86931 ], 27, 0);
    const_str_digest_69b886476f641548fe7f3df6f897d5f8 = UNSTREAM_STRING_ASCII(&constant_bin[ 86958 ], 172, 0);
    const_str_plain_JournalHandler = UNSTREAM_STRING_ASCII(&constant_bin[ 10327 ], 14, 1);
    const_str_digest_19536bb4146d07748c7d8919355ea79f = UNSTREAM_STRING_ASCII(&constant_bin[ 87130 ], 904, 0);
    const_str_plain_processName = UNSTREAM_STRING_ASCII(&constant_bin[ 88034 ], 11, 1);
    const_str_plain_RUNTIME_ONLY = UNSTREAM_STRING_ASCII(&constant_bin[ 88045 ], 12, 1);
    const_str_digest_39542a61c09c6d6387afa1bf5916f1aa = UNSTREAM_STRING_ASCII(&constant_bin[ 88057 ], 552, 0);
    const_str_plain_CODE_ARGS = UNSTREAM_STRING_ASCII(&constant_bin[ 88609 ], 9, 1);
    const_tuple_str_plain_mid_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_mid_tuple, 0, const_str_plain_mid); Py_INCREF(const_str_plain_mid);
    const_str_plain_LOG_WARNING = UNSTREAM_STRING_ASCII(&constant_bin[ 10493 ], 11, 1);
    const_str_plain__logging = UNSTREAM_STRING_ASCII(&constant_bin[ 10402 ], 8, 1);
    const_str_digest_e095dc2ef6675a4d311fe55baf6f298a = UNSTREAM_STRING_ASCII(&constant_bin[ 88618 ], 15, 0);
    const_str_plain_realtime = UNSTREAM_STRING_ASCII(&constant_bin[ 10665 ], 8, 1);
    const_str_plain_Reader = UNSTREAM_STRING_ASCII(&constant_bin[ 9993 ], 6, 1);
    const_str_plain__convert_timestamp = UNSTREAM_STRING_ASCII(&constant_bin[ 10616 ], 18, 1);
    const_str_digest_097e2af75f6d3cdffafe42cac011dd94 = UNSTREAM_STRING_ASCII(&constant_bin[ 88633 ], 38, 0);
    const_str_plain_get_catalog = UNSTREAM_STRING_ASCII(&constant_bin[ 10179 ], 11, 1);
    const_str_plain_SYSTEM_ONLY = UNSTREAM_STRING_ASCII(&constant_bin[ 88671 ], 11, 1);
    const_str_plain___next__ = UNSTREAM_STRING_ASCII(&constant_bin[ 10849 ], 8, 1);
    const_str_plain__BOOT_ID = UNSTREAM_STRING_ASCII(&constant_bin[ 83225 ], 8, 1);
    const_int_pos_1000000 = PyLong_FromUnsignedLong(1000000ul);
    const_str_plain_INITRD_USEC = UNSTREAM_STRING_ASCII(&constant_bin[ 88682 ], 11, 1);
    const_bytes_chr_61 = UNSTREAM_BYTES(&constant_bin[ 24317 ], 1);
    const_str_digest_84805c5d0c36c4895495c9c02fc3aaba = UNSTREAM_STRING_ASCII(&constant_bin[ 88693 ], 327, 0);
    const_str_digest_96e0bca0c9bfb42fc2ff0a38c83dbea8 = UNSTREAM_STRING_ASCII(&constant_bin[ 89020 ], 1938, 0);
    const_tuple_622d8e5bdbbbee6d16defef14b4ca236_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_622d8e5bdbbbee6d16defef14b4ca236_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7); Py_INCREF(const_str_digest_b9c4baf879ebd882d40843df3a4dead7);
    PyTuple_SET_ITEM(const_tuple_622d8e5bdbbbee6d16defef14b4ca236_tuple, 1, const_str_plain_key); Py_INCREF(const_str_plain_key);
    PyTuple_SET_ITEM(const_tuple_622d8e5bdbbbee6d16defef14b4ca236_tuple, 2, const_str_plain_val); Py_INCREF(const_str_plain_val);
    const_str_plain_maps = UNSTREAM_STRING_ASCII(&constant_bin[ 76940 ], 4, 1);
    const_str_plain_DEBUG = UNSTREAM_STRING_ASCII(&constant_bin[ 10436 ], 5, 1);
    const_str_plain_LOGGER = UNSTREAM_STRING_ASCII(&constant_bin[ 90707 ], 6, 1);
    const_str_plain__os = UNSTREAM_STRING_ASCII(&constant_bin[ 8753 ], 3, 1);
    const_str_plain_EXCEPTION_INFO = UNSTREAM_STRING_ASCII(&constant_bin[ 90958 ], 14, 1);
    const_str_plain_COREDUMP = UNSTREAM_STRING_ASCII(&constant_bin[ 83131 ], 8, 1);
    const_str_plain___REALTIME_TIMESTAMP = UNSTREAM_STRING_ASCII(&constant_bin[ 90972 ], 20, 1);
    const_str_digest_01ca262ea6fbc6568838440e24839143 = UNSTREAM_STRING_ASCII(&constant_bin[ 90992 ], 245, 0);
    const_str_digest_98cbf32d810591fc9ca3271e790fa9ab = UNSTREAM_STRING_ASCII(&constant_bin[ 91237 ], 461, 0);
    const_str_plain_extract_stack = UNSTREAM_STRING_ASCII(&constant_bin[ 91698 ], 13, 1);
    const_str_plain_division = UNSTREAM_STRING_ASCII(&constant_bin[ 91711 ], 8, 1);
    const_str_digest_8b4c8c81913e132a2fb432c041f3150f = UNSTREAM_STRING_ASCII(&constant_bin[ 13340 ], 2, 0);
    const_str_plain__SYSTEMD_SESSION = UNSTREAM_STRING_ASCII(&constant_bin[ 91719 ], 16, 1);
    const_str_digest_e7aee1712a87065820dfdb862cbba591 = UNSTREAM_STRING_ASCII(&constant_bin[ 91735 ], 21, 0);
    const_str_digest_5f7e8857f68fdabf4be40762b214277a = UNSTREAM_STRING_ASCII(&constant_bin[ 91756 ], 10, 0);
    const_str_plain_MESSAGE = UNSTREAM_STRING_ASCII(&constant_bin[ 46681 ], 7, 1);
    const_str_digest_4a6adbd3133822985b0246d19784ca26 = UNSTREAM_STRING_ASCII(&constant_bin[ 91766 ], 15, 0);
    const_str_plain_Handler = UNSTREAM_STRING_ASCII(&constant_bin[ 2924 ], 7, 1);
    const_str_plain_PRIORITY = UNSTREAM_STRING_ASCII(&constant_bin[ 85407 ], 8, 1);
    const_str_digest_5cf7359cf4084859ed6c25fb6aaf8f72 = UNSTREAM_STRING_ASCII(&constant_bin[ 91781 ], 10, 0);
    const_str_plain_wait = UNSTREAM_STRING_ASCII(&constant_bin[ 23251 ], 4, 1);
    const_str_plain__get_monotonic = UNSTREAM_STRING_ASCII(&constant_bin[ 91791 ], 14, 1);
    const_tuple_f318c00ec00c51d5b7c3ca58b4b93afc_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_f318c00ec00c51d5b7c3ca58b4b93afc_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_f318c00ec00c51d5b7c3ca58b4b93afc_tuple, 1, const_str_plain_timeout); Py_INCREF(const_str_plain_timeout);
    PyTuple_SET_ITEM(const_tuple_f318c00ec00c51d5b7c3ca58b4b93afc_tuple, 2, const_str_plain_us); Py_INCREF(const_str_plain_us);
    PyTuple_SET_ITEM(const_tuple_f318c00ec00c51d5b7c3ca58b4b93afc_tuple, 3, const_str_plain___class__); Py_INCREF(const_str_plain___class__);
    const_tuple_4c377ac488c9c6d9e906494475447c9b_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_4c377ac488c9c6d9e906494475447c9b_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7); Py_INCREF(const_str_digest_b9c4baf879ebd882d40843df3a4dead7);
    PyTuple_SET_ITEM(const_tuple_4c377ac488c9c6d9e906494475447c9b_tuple, 1, const_str_plain_value); Py_INCREF(const_str_plain_value);
    PyTuple_SET_ITEM(const_tuple_4c377ac488c9c6d9e906494475447c9b_tuple, 2, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_4c377ac488c9c6d9e906494475447c9b_tuple, 3, const_str_plain_field); Py_INCREF(const_str_plain_field);
    const_str_plain__get_cursor = UNSTREAM_STRING_ASCII(&constant_bin[ 91805 ], 11, 1);
    const_str_digest_5f2cc55bec6a0e0c83461cd1c4197a6e = UNSTREAM_STRING_ASCII(&constant_bin[ 91816 ], 20, 0);
    const_str_plain_this_machine = UNSTREAM_STRING_ASCII(&constant_bin[ 84468 ], 12, 1);
    const_str_digest_c9198050bf7f98bfc630bb56840f7994 = UNSTREAM_STRING_ASCII(&constant_bin[ 91836 ], 19, 0);
    const_str_plain_files = UNSTREAM_STRING_ASCII(&constant_bin[ 84754 ], 5, 1);
    const_str_plain_threadName = UNSTREAM_STRING_ASCII(&constant_bin[ 91855 ], 10, 1);
    const_str_plain_LOG_DEBUG = UNSTREAM_STRING_ASCII(&constant_bin[ 10432 ], 9, 1);
    const_str_plain__journal = UNSTREAM_STRING_ASCII(&constant_bin[ 91865 ], 8, 1);
    const_str_plain_stream = UNSTREAM_STRING_ASCII(&constant_bin[ 10271 ], 6, 1);
    const_str_plain_LOG_NOTICE = UNSTREAM_STRING_ASCII(&constant_bin[ 85946 ], 10, 1);
    const_str_digest_6a0fbab1ba397fb45012e49e87c8071d = UNSTREAM_STRING_ASCII(&constant_bin[ 85454 ], 8, 0);
    const_tuple_str_plain_m_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_m_tuple, 0, const_str_plain_m); Py_INCREF(const_str_plain_m);
    const_str_plain_NOTSET = UNSTREAM_STRING_ASCII(&constant_bin[ 91873 ], 6, 1);
    const_str_plain_MESSAGE_ID = UNSTREAM_STRING_ASCII(&constant_bin[ 86370 ], 10, 1);
    const_str_plain__reader = UNSTREAM_STRING_ASCII(&constant_bin[ 91879 ], 7, 1);
    const_str_plain_CURRENT_USER = UNSTREAM_STRING_ASCII(&constant_bin[ 91886 ], 12, 1);
    const_tuple_2b0e0ebef1a98bb347c70e1cff449389_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_2b0e0ebef1a98bb347c70e1cff449389_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_2b0e0ebef1a98bb347c70e1cff449389_tuple, 1, const_str_plain_level); Py_INCREF(const_str_plain_level);
    const_str_plain_sender_function = UNSTREAM_STRING_ASCII(&constant_bin[ 90926 ], 15, 1);
    PyTuple_SET_ITEM(const_tuple_2b0e0ebef1a98bb347c70e1cff449389_tuple, 2, const_str_plain_sender_function); Py_INCREF(const_str_plain_sender_function);
    PyTuple_SET_ITEM(const_tuple_2b0e0ebef1a98bb347c70e1cff449389_tuple, 3, const_str_plain_kwargs); Py_INCREF(const_str_plain_kwargs);
    PyTuple_SET_ITEM(const_tuple_2b0e0ebef1a98bb347c70e1cff449389_tuple, 4, const_str_plain_name); Py_INCREF(const_str_plain_name);
    PyTuple_SET_ITEM(const_tuple_2b0e0ebef1a98bb347c70e1cff449389_tuple, 5, const_str_plain___class__); Py_INCREF(const_str_plain___class__);
    const_str_plain__SYSTEMD_OWNER_UID = UNSTREAM_STRING_ASCII(&constant_bin[ 91898 ], 18, 1);
    const_str_plain_SYSLOG_IDENTIFIER = UNSTREAM_STRING_ASCII(&constant_bin[ 85424 ], 17, 1);
    const_str_plain__traceback = UNSTREAM_STRING_ASCII(&constant_bin[ 10212 ], 10, 1);
    const_str_plain__make_line = UNSTREAM_STRING_ASCII(&constant_bin[ 10118 ], 10, 1);
    const_str_digest_836465ac46514b08e2d11d1ffbd311af = UNSTREAM_STRING_ASCII(&constant_bin[ 91916 ], 272, 0);
    const_str_digest_55060ab7359071f051a877504aeb95c2 = UNSTREAM_STRING_ASCII(&constant_bin[ 88633 ], 19, 0);
    const_str_plain_seek_monotonic = UNSTREAM_STRING_ASCII(&constant_bin[ 86762 ], 14, 1);
    const_str_plain_exc_text = UNSTREAM_STRING_ASCII(&constant_bin[ 92188 ], 8, 1);
    const_str_plain_CODE_LINE = UNSTREAM_STRING_ASCII(&constant_bin[ 86403 ], 9, 1);
    const_str_digest_8e41bf09a8a4f3595a81c5da2ee84e4e = UNSTREAM_STRING_ASCII(&constant_bin[ 92196 ], 33, 0);
    const_str_plain__convert_uuid = UNSTREAM_STRING_ASCII(&constant_bin[ 92229 ], 13, 1);
    const_str_plain_COREDUMP_GID = UNSTREAM_STRING_ASCII(&constant_bin[ 92242 ], 12, 1);
    const_str_plain_NOP = UNSTREAM_STRING_ASCII(&constant_bin[ 69022 ], 3, 1);
    const_str_plain_INFO = UNSTREAM_STRING_ASCII(&constant_bin[ 10467 ], 4, 1);
    const_str_plain_add_match = UNSTREAM_STRING_ASCII(&constant_bin[ 31805 ], 9, 1);
    const_str_plain__PID = UNSTREAM_STRING_ASCII(&constant_bin[ 83139 ], 4, 1);
    const_str_digest_b3aeeb166cc56a6f6c1a30aee9653c69 = UNSTREAM_STRING_ASCII(&constant_bin[ 92254 ], 217, 0);
    const_str_digest_57ddb8f9eb6282d599d538eff210b2da = UNSTREAM_STRING_ASCII(&constant_bin[ 92471 ], 1089, 0);
    const_str_plain_LOG_EMERG = UNSTREAM_STRING_ASCII(&constant_bin[ 85878 ], 9, 1);
    const_str_plain_UUID = UNSTREAM_STRING_ASCII(&constant_bin[ 83326 ], 4, 1);
    const_str_digest_bc3c83f08cf26707f1c5bfa34c5897ed = UNSTREAM_STRING_ASCII(&constant_bin[ 86370 ], 11, 0);
    const_str_plain__ChainMap = UNSTREAM_STRING_ASCII(&constant_bin[ 10047 ], 9, 1);
    const_str_plain__extra = UNSTREAM_STRING_ASCII(&constant_bin[ 93560 ], 6, 1);
    const_str_plain_APPEND = UNSTREAM_STRING_ASCII(&constant_bin[ 84659 ], 6, 1);
    const_str_plain__uuid = UNSTREAM_STRING_ASCII(&constant_bin[ 9896 ], 5, 1);
    const_tuple_str_digest_a3ed2e23aa4d2da087c40a572b2a5866_tuple = PyTuple_New(1);
    const_str_digest_a3ed2e23aa4d2da087c40a572b2a5866 = UNSTREAM_STRING_ASCII(&constant_bin[ 93566 ], 5, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_a3ed2e23aa4d2da087c40a572b2a5866_tuple, 0, const_str_digest_a3ed2e23aa4d2da087c40a572b2a5866); Py_INCREF(const_str_digest_a3ed2e23aa4d2da087c40a572b2a5866);
    const_str_plain_DEFAULT_CONVERTERS = UNSTREAM_STRING_ASCII(&constant_bin[ 10078 ], 18, 1);
    const_str_digest_8031fc2f10e44a864c4e0c40a80e6af4 = UNSTREAM_STRING_ASCII(&constant_bin[ 84165 ], 16, 0);
    const_tuple_str_plain_s_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_s_tuple, 0, const_str_plain_s); Py_INCREF(const_str_plain_s);
    const_tuple_f8cef5e665e05080420286a82efcdee6_tuple = PyTuple_New(8);
    PyTuple_SET_ITEM(const_tuple_f8cef5e665e05080420286a82efcdee6_tuple, 0, const_str_plain_MESSAGE); Py_INCREF(const_str_plain_MESSAGE);
    PyTuple_SET_ITEM(const_tuple_f8cef5e665e05080420286a82efcdee6_tuple, 1, const_str_plain_MESSAGE_ID); Py_INCREF(const_str_plain_MESSAGE_ID);
    const_str_plain_CODE_FILE = UNSTREAM_STRING_ASCII(&constant_bin[ 90668 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_f8cef5e665e05080420286a82efcdee6_tuple, 2, const_str_plain_CODE_FILE); Py_INCREF(const_str_plain_CODE_FILE);
    PyTuple_SET_ITEM(const_tuple_f8cef5e665e05080420286a82efcdee6_tuple, 3, const_str_plain_CODE_LINE); Py_INCREF(const_str_plain_CODE_LINE);
    PyTuple_SET_ITEM(const_tuple_f8cef5e665e05080420286a82efcdee6_tuple, 4, const_str_plain_CODE_FUNC); Py_INCREF(const_str_plain_CODE_FUNC);
    PyTuple_SET_ITEM(const_tuple_f8cef5e665e05080420286a82efcdee6_tuple, 5, const_str_plain_kwargs); Py_INCREF(const_str_plain_kwargs);
    PyTuple_SET_ITEM(const_tuple_f8cef5e665e05080420286a82efcdee6_tuple, 6, const_str_plain_args); Py_INCREF(const_str_plain_args);
    PyTuple_SET_ITEM(const_tuple_f8cef5e665e05080420286a82efcdee6_tuple, 7, const_str_plain_id); Py_INCREF(const_str_plain_id);
    const_tuple_str_plain_id128_tuple = PyTuple_New(1);
    const_str_plain_id128 = UNSTREAM_STRING_ASCII(&constant_bin[ 10151 ], 5, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_id128_tuple, 0, const_str_plain_id128); Py_INCREF(const_str_plain_id128);
    const_tuple_748bf622b3a20d4311e01ead1081948d_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_748bf622b3a20d4311e01ead1081948d_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_748bf622b3a20d4311e01ead1081948d_tuple, 1, const_str_plain_flags); Py_INCREF(const_str_plain_flags);
    PyTuple_SET_ITEM(const_tuple_748bf622b3a20d4311e01ead1081948d_tuple, 2, const_str_plain_path); Py_INCREF(const_str_plain_path);
    PyTuple_SET_ITEM(const_tuple_748bf622b3a20d4311e01ead1081948d_tuple, 3, const_str_plain_files); Py_INCREF(const_str_plain_files);
    PyTuple_SET_ITEM(const_tuple_748bf622b3a20d4311e01ead1081948d_tuple, 4, const_str_plain_converters); Py_INCREF(const_str_plain_converters);
    PyTuple_SET_ITEM(const_tuple_748bf622b3a20d4311e01ead1081948d_tuple, 5, const_str_plain___class__); Py_INCREF(const_str_plain___class__);
    const_str_plain_SESSION_ID = UNSTREAM_STRING_ASCII(&constant_bin[ 93571 ], 10, 1);
    const_tuple_d5c103a361e5d213cffb9aa55f55ef6a_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_d5c103a361e5d213cffb9aa55f55ef6a_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_d5c103a361e5d213cffb9aa55f55ef6a_tuple, 1, const_str_plain_args); Py_INCREF(const_str_plain_args);
    PyTuple_SET_ITEM(const_tuple_d5c103a361e5d213cffb9aa55f55ef6a_tuple, 2, const_str_plain_kwargs); Py_INCREF(const_str_plain_kwargs);
    PyTuple_SET_ITEM(const_tuple_d5c103a361e5d213cffb9aa55f55ef6a_tuple, 3, const_str_plain_arg); Py_INCREF(const_str_plain_arg);
    PyTuple_SET_ITEM(const_tuple_d5c103a361e5d213cffb9aa55f55ef6a_tuple, 4, const_str_plain___class__); Py_INCREF(const_str_plain___class__);
    const_str_plain_INVALIDATE = UNSTREAM_STRING_ASCII(&constant_bin[ 84734 ], 10, 1);
    const_str_plain_PROCESS_NAME = UNSTREAM_STRING_ASCII(&constant_bin[ 93581 ], 12, 1);
    const_str_plain_LEADER = UNSTREAM_STRING_ASCII(&constant_bin[ 93593 ], 6, 1);
    const_str_digest_7e04a95681e0be7ecf733adeaffd90cc = UNSTREAM_STRING_ASCII(&constant_bin[ 93599 ], 15, 0);
    const_tuple_str_plain_self_str_plain_skip_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_skip_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_skip_tuple, 1, const_str_plain_skip); Py_INCREF(const_str_plain_skip);
    const_str_plain_levelno = UNSTREAM_STRING_ASCII(&constant_bin[ 93614 ], 7, 1);
    const_str_plain__AUDIT_SESSION = UNSTREAM_STRING_ASCII(&constant_bin[ 93621 ], 14, 1);
    const_str_plain__AUDIT_LOGINUID = UNSTREAM_STRING_ASCII(&constant_bin[ 93635 ], 15, 1);
    const_str_plain__UID = UNSTREAM_STRING_ASCII(&constant_bin[ 83183 ], 4, 1);
    const_str_plain_fdopen = UNSTREAM_STRING_ASCII(&constant_bin[ 93650 ], 6, 1);
    const_str_plain_USERSPACE_USEC = UNSTREAM_STRING_ASCII(&constant_bin[ 93656 ], 14, 1);
    const_str_plain_LOG_ERR = UNSTREAM_STRING_ASCII(&constant_bin[ 10526 ], 7, 1);
    const_tuple_str_plain_self_str_plain_level_str_plain_i_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_level_str_plain_i_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_level_str_plain_i_tuple, 1, const_str_plain_level); Py_INCREF(const_str_plain_level);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_level_str_plain_i_tuple, 2, const_str_plain_i); Py_INCREF(const_str_plain_i);
    const_str_digest_1a5ba3b8abaf2ae3c77b28febdf270fc = UNSTREAM_STRING_ASCII(&constant_bin[ 93670 ], 53, 0);
    const_str_digest_e6405dabe21ce11388667cf5301e8bbe = UNSTREAM_STRING_ASCII(&constant_bin[ 93723 ], 1215, 0);
    const_str_digest_f437c42b79eeb32fdcf80c42330a37e1 = UNSTREAM_STRING_ASCII(&constant_bin[ 94938 ], 23, 0);
    const_str_digest_9817c04eae2bbb567185cfa0c0fdb8a1 = UNSTREAM_STRING_ASCII(&constant_bin[ 94961 ], 65, 0);
    const_str_plain_LOCAL_ONLY = UNSTREAM_STRING_ASCII(&constant_bin[ 9961 ], 10, 1);
    const_str_plain__valid_field_name = UNSTREAM_STRING_ASCII(&constant_bin[ 10363 ], 17, 1);
    const_tuple_be555bfae0e8956e0ecd6677337f28ed_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_be555bfae0e8956e0ecd6677337f28ed_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_be555bfae0e8956e0ecd6677337f28ed_tuple, 1, const_str_plain_entry); Py_INCREF(const_str_plain_entry);
    PyTuple_SET_ITEM(const_tuple_be555bfae0e8956e0ecd6677337f28ed_tuple, 2, const_str_plain_result); Py_INCREF(const_str_plain_result);
    PyTuple_SET_ITEM(const_tuple_be555bfae0e8956e0ecd6677337f28ed_tuple, 3, const_str_plain_key); Py_INCREF(const_str_plain_key);
    PyTuple_SET_ITEM(const_tuple_be555bfae0e8956e0ecd6677337f28ed_tuple, 4, const_str_plain_value); Py_INCREF(const_str_plain_value);
    const_str_plain__get_all = UNSTREAM_STRING_ASCII(&constant_bin[ 95026 ], 8, 1);
    const_tuple_str_plain_field_str_plain_value_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_field_str_plain_value_tuple, 0, const_str_plain_field); Py_INCREF(const_str_plain_field);
    PyTuple_SET_ITEM(const_tuple_str_plain_field_str_plain_value_tuple, 1, const_str_plain_value); Py_INCREF(const_str_plain_value);
    const_tuple_5d9f1ebaa97d51aaa85652aceccc26c3_tuple = PyTuple_New(8);
    PyTuple_SET_ITEM(const_tuple_5d9f1ebaa97d51aaa85652aceccc26c3_tuple, 0, const_str_plain_LOG_EMERG); Py_INCREF(const_str_plain_LOG_EMERG);
    const_str_plain_LOG_ALERT = UNSTREAM_STRING_ASCII(&constant_bin[ 10585 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_5d9f1ebaa97d51aaa85652aceccc26c3_tuple, 1, const_str_plain_LOG_ALERT); Py_INCREF(const_str_plain_LOG_ALERT);
    PyTuple_SET_ITEM(const_tuple_5d9f1ebaa97d51aaa85652aceccc26c3_tuple, 2, const_str_plain_LOG_CRIT); Py_INCREF(const_str_plain_LOG_CRIT);
    PyTuple_SET_ITEM(const_tuple_5d9f1ebaa97d51aaa85652aceccc26c3_tuple, 3, const_str_plain_LOG_ERR); Py_INCREF(const_str_plain_LOG_ERR);
    PyTuple_SET_ITEM(const_tuple_5d9f1ebaa97d51aaa85652aceccc26c3_tuple, 4, const_str_plain_LOG_WARNING); Py_INCREF(const_str_plain_LOG_WARNING);
    PyTuple_SET_ITEM(const_tuple_5d9f1ebaa97d51aaa85652aceccc26c3_tuple, 5, const_str_plain_LOG_NOTICE); Py_INCREF(const_str_plain_LOG_NOTICE);
    PyTuple_SET_ITEM(const_tuple_5d9f1ebaa97d51aaa85652aceccc26c3_tuple, 6, const_str_plain_LOG_INFO); Py_INCREF(const_str_plain_LOG_INFO);
    PyTuple_SET_ITEM(const_tuple_5d9f1ebaa97d51aaa85652aceccc26c3_tuple, 7, const_str_plain_LOG_DEBUG); Py_INCREF(const_str_plain_LOG_DEBUG);
    const_str_digest_6e8934a3d6cd15317cffcf67c88e8fb1 = UNSTREAM_STRING_ASCII(&constant_bin[ 83195 ], 15, 0);
    const_str_digest_58bf094e9c8d5e9cd91e0d96cc6d7464 = UNSTREAM_STRING_ASCII(&constant_bin[ 95034 ], 22, 0);
    const_str_digest_f05e55802dd9ab1c09e4aff8f146be51 = UNSTREAM_STRING_ASCII(&constant_bin[ 95056 ], 23, 0);
    const_tuple_1a939bbd7e380cd4ba0c6c56c58be07b_tuple = PyTuple_New(11);
    PyTuple_SET_ITEM(const_tuple_1a939bbd7e380cd4ba0c6c56c58be07b_tuple, 0, const_str_plain__Reader); Py_INCREF(const_str_plain__Reader);
    PyTuple_SET_ITEM(const_tuple_1a939bbd7e380cd4ba0c6c56c58be07b_tuple, 1, const_str_plain_NOP); Py_INCREF(const_str_plain_NOP);
    PyTuple_SET_ITEM(const_tuple_1a939bbd7e380cd4ba0c6c56c58be07b_tuple, 2, const_str_plain_APPEND); Py_INCREF(const_str_plain_APPEND);
    PyTuple_SET_ITEM(const_tuple_1a939bbd7e380cd4ba0c6c56c58be07b_tuple, 3, const_str_plain_INVALIDATE); Py_INCREF(const_str_plain_INVALIDATE);
    PyTuple_SET_ITEM(const_tuple_1a939bbd7e380cd4ba0c6c56c58be07b_tuple, 4, const_str_plain_LOCAL_ONLY); Py_INCREF(const_str_plain_LOCAL_ONLY);
    PyTuple_SET_ITEM(const_tuple_1a939bbd7e380cd4ba0c6c56c58be07b_tuple, 5, const_str_plain_RUNTIME_ONLY); Py_INCREF(const_str_plain_RUNTIME_ONLY);
    PyTuple_SET_ITEM(const_tuple_1a939bbd7e380cd4ba0c6c56c58be07b_tuple, 6, const_str_plain_SYSTEM); Py_INCREF(const_str_plain_SYSTEM);
    PyTuple_SET_ITEM(const_tuple_1a939bbd7e380cd4ba0c6c56c58be07b_tuple, 7, const_str_plain_SYSTEM_ONLY); Py_INCREF(const_str_plain_SYSTEM_ONLY);
    PyTuple_SET_ITEM(const_tuple_1a939bbd7e380cd4ba0c6c56c58be07b_tuple, 8, const_str_plain_CURRENT_USER); Py_INCREF(const_str_plain_CURRENT_USER);
    PyTuple_SET_ITEM(const_tuple_1a939bbd7e380cd4ba0c6c56c58be07b_tuple, 9, const_str_plain_OS_ROOT); Py_INCREF(const_str_plain_OS_ROOT);
    PyTuple_SET_ITEM(const_tuple_1a939bbd7e380cd4ba0c6c56c58be07b_tuple, 10, const_str_plain__get_catalog); Py_INCREF(const_str_plain__get_catalog);
    const_str_plain_EXCEPTION_TEXT = UNSTREAM_STRING_ASCII(&constant_bin[ 95079 ], 14, 1);
    const_str_plain_mapPriority = UNSTREAM_STRING_ASCII(&constant_bin[ 95093 ], 11, 1);
    const_tuple_int_pos_3_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_int_pos_3_tuple, 0, const_int_pos_3); Py_INCREF(const_int_pos_3);
    const_str_digest_b5f31d15ba97aa770958542e16c473bd = UNSTREAM_STRING_ASCII(&constant_bin[ 95104 ], 16, 0);
    const_str_plain_hex = UNSTREAM_STRING_ASCII(&constant_bin[ 12075 ], 3, 1);
    const_str_digest_7c225fcacae7c67d5a4a1f2f3b6dea03 = UNSTREAM_STRING_ASCII(&constant_bin[ 95120 ], 11, 0);
    const_str_digest_a9f9a21e276932d061c34fdf077216a6 = UNSTREAM_STRING_ASCII(&constant_bin[ 42441 ], 2, 0);
    const_tuple_str_plain_self_str_plain_machineid_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_machineid_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_machineid_tuple, 1, const_str_plain_machineid); Py_INCREF(const_str_plain_machineid);
    const_str_plain__id128 = UNSTREAM_STRING_ASCII(&constant_bin[ 10150 ], 6, 1);
    const_str_plain__GID = UNSTREAM_STRING_ASCII(&constant_bin[ 92250 ], 4, 1);
    const_str_plain___MONOTONIC_TIMESTAMP = UNSTREAM_STRING_ASCII(&constant_bin[ 95131 ], 21, 1);
    const_str_plain_SYSLOG_FACILITY = UNSTREAM_STRING_ASCII(&constant_bin[ 93504 ], 15, 1);
    const_str_plain_COREDUMP_TIMESTAMP = UNSTREAM_STRING_ASCII(&constant_bin[ 95152 ], 18, 1);
    const_str_digest_4907563c396602c16f95e1ad129f7638 = UNSTREAM_STRING_ASCII(&constant_bin[ 95170 ], 328, 0);
    const_tuple_str_plain_levelno_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_levelno_tuple, 0, const_str_plain_levelno); Py_INCREF(const_str_plain_levelno);
    const_str_plain_SYSLOG_PID = UNSTREAM_STRING_ASCII(&constant_bin[ 93544 ], 10, 1);
    const_str_plain__convert_monotonic = UNSTREAM_STRING_ASCII(&constant_bin[ 10742 ], 18, 1);
    const_str_plain_query_unique = UNSTREAM_STRING_ASCII(&constant_bin[ 88640 ], 12, 1);
    const_str_plain_ERRNO = UNSTREAM_STRING_ASCII(&constant_bin[ 95498 ], 5, 1);
    const_str_plain_EXIT_STATUS = UNSTREAM_STRING_ASCII(&constant_bin[ 95503 ], 11, 1);
    const_tuple_str_plain_t_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_t_tuple, 0, const_str_plain_t); Py_INCREF(const_str_plain_t);
    const_str_plain_get_previous = UNSTREAM_STRING_ASCII(&constant_bin[ 91843 ], 12, 1);
    const_tuple_str_plain_self_str_plain_realtime_str_plain___class___tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_realtime_str_plain___class___tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_realtime_str_plain___class___tuple, 1, const_str_plain_realtime); Py_INCREF(const_str_plain_realtime);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_realtime_str_plain___class___tuple, 2, const_str_plain___class__); Py_INCREF(const_str_plain___class__);
    const_str_plain_total_seconds = UNSTREAM_STRING_ASCII(&constant_bin[ 95514 ], 13, 1);
    const_str_plain_get_machine = UNSTREAM_STRING_ASCII(&constant_bin[ 95527 ], 11, 1);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_systemd$journal(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_26aa3b7dd2f9bbc75b85be3c93c19e39;
static PyCodeObject *codeobj_9b2aa8eee207cc741290181824cdce92;
static PyCodeObject *codeobj_5251a30be86ecbc46921ff4bcd3ef1e0;
static PyCodeObject *codeobj_151b6e526798c374ecfdbdd43295e13b;
static PyCodeObject *codeobj_20e4a3dd0a995063373afb2e8b808faf;
static PyCodeObject *codeobj_2239578fced276c3b917900f1c61c33e;
static PyCodeObject *codeobj_9738b0975810206025edaf62c7b32bf0;
static PyCodeObject *codeobj_277ec3d484556603896b4a291c7e5e73;
static PyCodeObject *codeobj_73f8e93b142482edce1ea1d4b67c6b2f;
static PyCodeObject *codeobj_9e72e52c097cf20a1fd160f081121d3a;
static PyCodeObject *codeobj_bf6bd6a09433e4392b4e0337ca89e4b6;
static PyCodeObject *codeobj_00390665543bc9144c1045c88e7ad734;
static PyCodeObject *codeobj_e47bce64f0f3b69c6a55acd59f70222f;
static PyCodeObject *codeobj_ed6c1a88a285ef83445327f4ef961c3b;
static PyCodeObject *codeobj_29d08e7d0cd6242052ae6523f0bdf5a0;
static PyCodeObject *codeobj_b940415a346c344ce35f85dc7ac3efa5;
static PyCodeObject *codeobj_94d0215daa0430f96f9ec3bbd8f9148a;
static PyCodeObject *codeobj_5b08820223e4551fc7702aab3f07d5e7;
static PyCodeObject *codeobj_692052db0e3ee27f9a47c66c5122e029;
static PyCodeObject *codeobj_54f47cd341265d0483cfc75323027ee4;
static PyCodeObject *codeobj_8450915f9d1bc3af4f1eb233dce7a474;
static PyCodeObject *codeobj_1cfd7ffe5ecf0b7833dba5e62d906f5e;
static PyCodeObject *codeobj_4f3f02feb3e42938d954d85696cf76ca;
static PyCodeObject *codeobj_b42f9903601f89f9db0cef1f3275259d;
static PyCodeObject *codeobj_fbd65cd85c507de4dd9af30c7e7da31b;
static PyCodeObject *codeobj_ce3ddfe598132b5a852073e168b44b05;
static PyCodeObject *codeobj_dccb6888200845ced40ec83a78270deb;
static PyCodeObject *codeobj_9bfe4db5535fd72dd13e4b8be6a95a1b;
static PyCodeObject *codeobj_7ee5e529fbed3cce6c82724654ec0f89;
static PyCodeObject *codeobj_8056e510988e3a3d379226232700573b;
static PyCodeObject *codeobj_5804d4da4fa0ddeb195c03a018070005;
static PyCodeObject *codeobj_6b94684d53f2cd7c09ca0f256ee51ebf;
static PyCodeObject *codeobj_1556a63eec110acb74f38293cd424efa;
static PyCodeObject *codeobj_0c4148fe4b844826e05a5094ebab068a;
static PyCodeObject *codeobj_cf49912354663723424b645868386141;
static PyCodeObject *codeobj_8145472245aac94b41323cd238ab9ab5;
static PyCodeObject *codeobj_862dccd64e45a370b559bcd5fcc78300;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_1a5ba3b8abaf2ae3c77b28febdf270fc;
    codeobj_26aa3b7dd2f9bbc75b85be3c93c19e39 = MAKE_CODEOBJECT(module_filename_obj, 242, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, const_str_angle_genexpr, const_tuple_622d8e5bdbbbee6d16defef14b4ca236_tuple, 1, 0, 0);
    codeobj_9b2aa8eee207cc741290181824cdce92 = MAKE_CODEOBJECT(module_filename_obj, 456, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_angle_genexpr, const_tuple_622d8e5bdbbbee6d16defef14b4ca236_tuple, 1, 0, 0);
    codeobj_5251a30be86ecbc46921ff4bcd3ef1e0 = MAKE_CODEOBJECT(module_filename_obj, 292, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, const_str_angle_genexpr, const_tuple_4c377ac488c9c6d9e906494475447c9b_tuple, 1, 0, 0);
    codeobj_151b6e526798c374ecfdbdd43295e13b = MAKE_CODEOBJECT(module_filename_obj, 205, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_angle_listcomp, const_tuple_str_plain_val_str_plain_self_str_plain_key_tuple, 1, 0, 0);
    codeobj_20e4a3dd0a995063373afb2e8b808faf = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_a4de60e4dd1b50e7223eeddbc301c61c, const_tuple_empty, 0, 0, 0);
    codeobj_2239578fced276c3b917900f1c61c33e = MAKE_CODEOBJECT(module_filename_obj, 504, CO_NOFREE, const_str_plain_JournalHandler, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_9738b0975810206025edaf62c7b32bf0 = MAKE_CODEOBJECT(module_filename_obj, 117, CO_NOFREE, const_str_plain_Reader, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_277ec3d484556603896b4a291c7e5e73 = MAKE_CODEOBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, const_tuple_748bf622b3a20d4311e01ead1081948d_tuple, 5, 0, 0);
    codeobj_73f8e93b142482edce1ea1d4b67c6b2f = MAKE_CODEOBJECT(module_filename_obj, 556, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, const_str_plain___init__, const_tuple_2b0e0ebef1a98bb347c70e1cff449389_tuple, 3, 0, 0);
    codeobj_9e72e52c097cf20a1fd160f081121d3a = MAKE_CODEOBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___iter__, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_bf6bd6a09433e4392b4e0337ca89e4b6 = MAKE_CODEOBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___next__, const_tuple_str_plain_self_str_plain_ans_tuple, 1, 0, 0);
    codeobj_00390665543bc9144c1045c88e7ad734 = MAKE_CODEOBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__convert_entry, const_tuple_be555bfae0e8956e0ecd6677337f28ed_tuple, 2, 0, 0);
    codeobj_e47bce64f0f3b69c6a55acd59f70222f = MAKE_CODEOBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__convert_field, const_tuple_9121667be05a8b5f7af2ada16875086e_tuple, 3, 0, 0);
    codeobj_ed6c1a88a285ef83445327f4ef961c3b = MAKE_CODEOBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__convert_monotonic, const_tuple_str_plain_m_tuple, 1, 0, 0);
    codeobj_29d08e7d0cd6242052ae6523f0bdf5a0 = MAKE_CODEOBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__convert_realtime, const_tuple_str_plain_t_tuple, 1, 0, 0);
    codeobj_b940415a346c344ce35f85dc7ac3efa5 = MAKE_CODEOBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__convert_source_monotonic, const_tuple_str_plain_s_tuple, 1, 0, 0);
    codeobj_94d0215daa0430f96f9ec3bbd8f9148a = MAKE_CODEOBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__convert_timestamp, const_tuple_str_plain_s_tuple, 1, 0, 0);
    codeobj_5b08820223e4551fc7702aab3f07d5e7 = MAKE_CODEOBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__convert_trivial, const_tuple_str_plain_x_tuple, 1, 0, 0);
    codeobj_692052db0e3ee27f9a47c66c5122e029 = MAKE_CODEOBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__convert_uuid, const_tuple_str_plain_s_tuple, 1, 0, 0);
    codeobj_54f47cd341265d0483cfc75323027ee4 = MAKE_CODEOBJECT(module_filename_obj, 403, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__make_line, const_tuple_str_plain_field_str_plain_value_tuple, 2, 0, 0);
    codeobj_8450915f9d1bc3af4f1eb233dce7a474 = MAKE_CODEOBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__valid_field_name, const_tuple_str_plain_s_tuple, 1, 0, 0);
    codeobj_1cfd7ffe5ecf0b7833dba5e62d906f5e = MAKE_CODEOBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, const_str_plain_add_match, const_tuple_d5c103a361e5d213cffb9aa55f55ef6a_tuple, 1, 0, 0);
    codeobj_4f3f02feb3e42938d954d85696cf76ca = MAKE_CODEOBJECT(module_filename_obj, 568, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_emit, const_tuple_b12bc07623a651b3b8069b3f6e7ff045_tuple, 2, 0, 0);
    codeobj_b42f9903601f89f9db0cef1f3275259d = MAKE_CODEOBJECT(module_filename_obj, 393, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_catalog, const_tuple_str_plain_mid_tuple, 1, 0, 0);
    codeobj_fbd65cd85c507de4dd9af30c7e7da31b = MAKE_CODEOBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_get_next, const_tuple_18f8302865f21b708ebb4a5f98ab47c3_tuple, 2, 0, 0);
    codeobj_ce3ddfe598132b5a852073e168b44b05 = MAKE_CODEOBJECT(module_filename_obj, 267, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_previous, const_tuple_str_plain_self_str_plain_skip_tuple, 2, 0, 0);
    codeobj_dccb6888200845ced40ec83a78270deb = MAKE_CODEOBJECT(module_filename_obj, 344, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_log_level, const_tuple_str_plain_self_str_plain_level_str_plain_i_tuple, 2, 0, 0);
    codeobj_9bfe4db5535fd72dd13e4b8be6a95a1b = MAKE_CODEOBJECT(module_filename_obj, 607, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_map_priority, const_tuple_str_plain_levelno_tuple, 1, 0, 0);
    codeobj_7ee5e529fbed3cce6c82724654ec0f89 = MAKE_CODEOBJECT(module_filename_obj, 353, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_messageid_match, const_tuple_str_plain_self_str_plain_messageid_tuple, 2, 0, 0);
    codeobj_8056e510988e3a3d379226232700573b = MAKE_CODEOBJECT(module_filename_obj, 283, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_query_unique, const_tuple_str_plain_self_str_plain_field_str_plain___class___tuple, 2, 0, 0);
    codeobj_5804d4da4fa0ddeb195c03a018070005 = MAKE_CODEOBJECT(module_filename_obj, 329, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_seek_monotonic, const_tuple_7d0fd87a68517c96ebba419e8c01aba9_tuple, 3, 0, 0);
    codeobj_6b94684d53f2cd7c09ca0f256ee51ebf = MAKE_CODEOBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_seek_realtime, const_tuple_str_plain_self_str_plain_realtime_str_plain___class___tuple, 2, 0, 0);
    codeobj_1556a63eec110acb74f38293cd424efa = MAKE_CODEOBJECT(module_filename_obj, 412, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_send, const_tuple_f8cef5e665e05080420286a82efcdee6_tuple, 5, 0, 0);
    codeobj_0c4148fe4b844826e05a5094ebab068a = MAKE_CODEOBJECT(module_filename_obj, 460, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_stream, const_tuple_d2fdfa2eb59d65ee948c2b405c2e485c_tuple, 3, 0, 0);
    codeobj_cf49912354663723424b645868386141 = MAKE_CODEOBJECT(module_filename_obj, 365, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_this_boot, const_tuple_str_plain_self_str_plain_bootid_tuple, 2, 0, 0);
    codeobj_8145472245aac94b41323cd238ab9ab5 = MAKE_CODEOBJECT(module_filename_obj, 378, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_this_machine, const_tuple_str_plain_self_str_plain_machineid_tuple, 2, 0, 0);
    codeobj_862dccd64e45a370b559bcd5fcc78300 = MAKE_CODEOBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_wait, const_tuple_f318c00ec00c51d5b7c3ca58b4b93afc_tuple, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_systemd$journal$$$function_13_add_match$$$genexpr_1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_systemd$journal$$$function_16_query_unique$$$genexpr_1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_systemd$journal$$$function_26_send$$$genexpr_1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_2_complex_call_helper_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_10__convert_entry();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_11___iter__();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_12___next__();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_13_add_match();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_14_get_next(PyObject *defaults);


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_15_get_previous(PyObject *defaults);


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_16_query_unique();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_17_wait(PyObject *defaults);


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_18_seek_realtime();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_19_seek_monotonic(PyObject *defaults);


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_1__convert_monotonic();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_20_log_level();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_21_messageid_match();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_22_this_boot(PyObject *defaults);


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_23_this_machine(PyObject *defaults);


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_24_get_catalog();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_25__make_line();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_26_send(PyObject *defaults);


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_27_stream(PyObject *defaults);


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_28___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_29_emit();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_2__convert_source_monotonic();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_30_map_priority();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_3__convert_realtime();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_4__convert_timestamp();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_5__convert_trivial();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_6__convert_uuid();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_7__valid_field_name();


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_8___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_systemd$journal$$$function_9__convert_field();


// The module function definitions.
static PyObject *impl_systemd$journal$$$function_1__convert_monotonic(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[0];
    struct Nuitka_FrameObject *frame_ed6c1a88a285ef83445327f4ef961c3b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ed6c1a88a285ef83445327f4ef961c3b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ed6c1a88a285ef83445327f4ef961c3b)) {
        Py_XDECREF(cache_frame_ed6c1a88a285ef83445327f4ef961c3b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ed6c1a88a285ef83445327f4ef961c3b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ed6c1a88a285ef83445327f4ef961c3b = MAKE_FUNCTION_FRAME(codeobj_ed6c1a88a285ef83445327f4ef961c3b, module_systemd$journal, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ed6c1a88a285ef83445327f4ef961c3b->m_type_description == NULL);
    frame_ed6c1a88a285ef83445327f4ef961c3b = cache_frame_ed6c1a88a285ef83445327f4ef961c3b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ed6c1a88a285ef83445327f4ef961c3b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ed6c1a88a285ef83445327f4ef961c3b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_Monotonic);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Monotonic);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9828 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__datetime);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__datetime);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9859 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_timedelta);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_microseconds;
        CHECK_OBJECT(par_m);
        tmp_expression_name_2 = par_m;
        tmp_subscript_name_1 = const_int_0;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_1, 0);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_ed6c1a88a285ef83445327f4ef961c3b->m_frame.f_lineno = 49;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_element_name_1, 0, tmp_tuple_element_1);
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__uuid);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__uuid);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_args_element_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9890 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_UUID);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = const_str_plain_bytes;
        CHECK_OBJECT(par_m);
        tmp_expression_name_4 = par_m;
        tmp_subscript_name_2 = const_int_pos_1;
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_4, tmp_subscript_name_2, 1);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_ed6c1a88a285ef83445327f4ef961c3b->m_frame.f_lineno = 50;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_3, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_args_element_name_1, 1, tmp_tuple_element_1);
        frame_ed6c1a88a285ef83445327f4ef961c3b->m_frame.f_lineno = 49;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed6c1a88a285ef83445327f4ef961c3b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed6c1a88a285ef83445327f4ef961c3b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed6c1a88a285ef83445327f4ef961c3b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ed6c1a88a285ef83445327f4ef961c3b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ed6c1a88a285ef83445327f4ef961c3b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ed6c1a88a285ef83445327f4ef961c3b, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ed6c1a88a285ef83445327f4ef961c3b,
        type_description_1,
        par_m
    );


    // Release cached frame.
    if (frame_ed6c1a88a285ef83445327f4ef961c3b == cache_frame_ed6c1a88a285ef83445327f4ef961c3b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_ed6c1a88a285ef83445327f4ef961c3b);
    }
    cache_frame_ed6c1a88a285ef83445327f4ef961c3b = NULL;

    assertFrameObject(frame_ed6c1a88a285ef83445327f4ef961c3b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_2__convert_source_monotonic(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_b940415a346c344ce35f85dc7ac3efa5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b940415a346c344ce35f85dc7ac3efa5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b940415a346c344ce35f85dc7ac3efa5)) {
        Py_XDECREF(cache_frame_b940415a346c344ce35f85dc7ac3efa5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b940415a346c344ce35f85dc7ac3efa5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b940415a346c344ce35f85dc7ac3efa5 = MAKE_FUNCTION_FRAME(codeobj_b940415a346c344ce35f85dc7ac3efa5, module_systemd$journal, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b940415a346c344ce35f85dc7ac3efa5->m_type_description == NULL);
    frame_b940415a346c344ce35f85dc7ac3efa5 = cache_frame_b940415a346c344ce35f85dc7ac3efa5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b940415a346c344ce35f85dc7ac3efa5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b940415a346c344ce35f85dc7ac3efa5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_int_arg_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__datetime);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__datetime);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9859 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_timedelta);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_microseconds;
        CHECK_OBJECT(par_s);
        tmp_int_arg_1 = par_s;
        tmp_dict_value_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_b940415a346c344ce35f85dc7ac3efa5->m_frame.f_lineno = 54;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b940415a346c344ce35f85dc7ac3efa5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b940415a346c344ce35f85dc7ac3efa5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b940415a346c344ce35f85dc7ac3efa5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b940415a346c344ce35f85dc7ac3efa5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b940415a346c344ce35f85dc7ac3efa5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b940415a346c344ce35f85dc7ac3efa5, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b940415a346c344ce35f85dc7ac3efa5,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if (frame_b940415a346c344ce35f85dc7ac3efa5 == cache_frame_b940415a346c344ce35f85dc7ac3efa5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_b940415a346c344ce35f85dc7ac3efa5);
    }
    cache_frame_b940415a346c344ce35f85dc7ac3efa5 = NULL;

    assertFrameObject(frame_b940415a346c344ce35f85dc7ac3efa5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_3__convert_realtime(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_29d08e7d0cd6242052ae6523f0bdf5a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_29d08e7d0cd6242052ae6523f0bdf5a0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_29d08e7d0cd6242052ae6523f0bdf5a0)) {
        Py_XDECREF(cache_frame_29d08e7d0cd6242052ae6523f0bdf5a0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_29d08e7d0cd6242052ae6523f0bdf5a0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_29d08e7d0cd6242052ae6523f0bdf5a0 = MAKE_FUNCTION_FRAME(codeobj_29d08e7d0cd6242052ae6523f0bdf5a0, module_systemd$journal, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_29d08e7d0cd6242052ae6523f0bdf5a0->m_type_description == NULL);
    frame_29d08e7d0cd6242052ae6523f0bdf5a0 = cache_frame_29d08e7d0cd6242052ae6523f0bdf5a0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_29d08e7d0cd6242052ae6523f0bdf5a0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_29d08e7d0cd6242052ae6523f0bdf5a0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__datetime);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__datetime);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9859 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_1;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_datetime);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_fromtimestamp);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_t);
        tmp_left_name_1 = par_t;
        tmp_right_name_1 = const_int_pos_1000000;
        tmp_args_element_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_29d08e7d0cd6242052ae6523f0bdf5a0->m_frame.f_lineno = 58;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_29d08e7d0cd6242052ae6523f0bdf5a0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_29d08e7d0cd6242052ae6523f0bdf5a0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_29d08e7d0cd6242052ae6523f0bdf5a0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_29d08e7d0cd6242052ae6523f0bdf5a0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_29d08e7d0cd6242052ae6523f0bdf5a0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_29d08e7d0cd6242052ae6523f0bdf5a0, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_29d08e7d0cd6242052ae6523f0bdf5a0,
        type_description_1,
        par_t
    );


    // Release cached frame.
    if (frame_29d08e7d0cd6242052ae6523f0bdf5a0 == cache_frame_29d08e7d0cd6242052ae6523f0bdf5a0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_29d08e7d0cd6242052ae6523f0bdf5a0);
    }
    cache_frame_29d08e7d0cd6242052ae6523f0bdf5a0 = NULL;

    assertFrameObject(frame_29d08e7d0cd6242052ae6523f0bdf5a0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_4__convert_timestamp(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_94d0215daa0430f96f9ec3bbd8f9148a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_94d0215daa0430f96f9ec3bbd8f9148a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_94d0215daa0430f96f9ec3bbd8f9148a)) {
        Py_XDECREF(cache_frame_94d0215daa0430f96f9ec3bbd8f9148a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94d0215daa0430f96f9ec3bbd8f9148a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94d0215daa0430f96f9ec3bbd8f9148a = MAKE_FUNCTION_FRAME(codeobj_94d0215daa0430f96f9ec3bbd8f9148a, module_systemd$journal, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_94d0215daa0430f96f9ec3bbd8f9148a->m_type_description == NULL);
    frame_94d0215daa0430f96f9ec3bbd8f9148a = cache_frame_94d0215daa0430f96f9ec3bbd8f9148a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_94d0215daa0430f96f9ec3bbd8f9148a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_94d0215daa0430f96f9ec3bbd8f9148a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__datetime);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__datetime);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9859 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_1;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_datetime);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_fromtimestamp);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_s);
        tmp_int_arg_1 = par_s;
        tmp_left_name_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1000000;
        tmp_args_element_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_94d0215daa0430f96f9ec3bbd8f9148a->m_frame.f_lineno = 62;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_94d0215daa0430f96f9ec3bbd8f9148a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_94d0215daa0430f96f9ec3bbd8f9148a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_94d0215daa0430f96f9ec3bbd8f9148a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_94d0215daa0430f96f9ec3bbd8f9148a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94d0215daa0430f96f9ec3bbd8f9148a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94d0215daa0430f96f9ec3bbd8f9148a, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94d0215daa0430f96f9ec3bbd8f9148a,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if (frame_94d0215daa0430f96f9ec3bbd8f9148a == cache_frame_94d0215daa0430f96f9ec3bbd8f9148a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_94d0215daa0430f96f9ec3bbd8f9148a);
    }
    cache_frame_94d0215daa0430f96f9ec3bbd8f9148a = NULL;

    assertFrameObject(frame_94d0215daa0430f96f9ec3bbd8f9148a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_5__convert_trivial(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_6__convert_uuid(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_692052db0e3ee27f9a47c66c5122e029;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_692052db0e3ee27f9a47c66c5122e029 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_692052db0e3ee27f9a47c66c5122e029)) {
        Py_XDECREF(cache_frame_692052db0e3ee27f9a47c66c5122e029);

#if _DEBUG_REFCOUNTS
        if (cache_frame_692052db0e3ee27f9a47c66c5122e029 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_692052db0e3ee27f9a47c66c5122e029 = MAKE_FUNCTION_FRAME(codeobj_692052db0e3ee27f9a47c66c5122e029, module_systemd$journal, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_692052db0e3ee27f9a47c66c5122e029->m_type_description == NULL);
    frame_692052db0e3ee27f9a47c66c5122e029 = cache_frame_692052db0e3ee27f9a47c66c5122e029;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_692052db0e3ee27f9a47c66c5122e029);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_692052db0e3ee27f9a47c66c5122e029) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__uuid);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__uuid);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9890 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_UUID);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_s);
        tmp_called_instance_1 = par_s;
        frame_692052db0e3ee27f9a47c66c5122e029->m_frame.f_lineno = 70;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_decode);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_692052db0e3ee27f9a47c66c5122e029->m_frame.f_lineno = 70;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_692052db0e3ee27f9a47c66c5122e029);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_692052db0e3ee27f9a47c66c5122e029);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_692052db0e3ee27f9a47c66c5122e029);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_692052db0e3ee27f9a47c66c5122e029, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_692052db0e3ee27f9a47c66c5122e029->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_692052db0e3ee27f9a47c66c5122e029, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_692052db0e3ee27f9a47c66c5122e029,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if (frame_692052db0e3ee27f9a47c66c5122e029 == cache_frame_692052db0e3ee27f9a47c66c5122e029) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_692052db0e3ee27f9a47c66c5122e029);
    }
    cache_frame_692052db0e3ee27f9a47c66c5122e029 = NULL;

    assertFrameObject(frame_692052db0e3ee27f9a47c66c5122e029);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_7__valid_field_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_8450915f9d1bc3af4f1eb233dce7a474;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8450915f9d1bc3af4f1eb233dce7a474 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8450915f9d1bc3af4f1eb233dce7a474)) {
        Py_XDECREF(cache_frame_8450915f9d1bc3af4f1eb233dce7a474);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8450915f9d1bc3af4f1eb233dce7a474 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8450915f9d1bc3af4f1eb233dce7a474 = MAKE_FUNCTION_FRAME(codeobj_8450915f9d1bc3af4f1eb233dce7a474, module_systemd$journal, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8450915f9d1bc3af4f1eb233dce7a474->m_type_description == NULL);
    frame_8450915f9d1bc3af4f1eb233dce7a474 = cache_frame_8450915f9d1bc3af4f1eb233dce7a474;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8450915f9d1bc3af4f1eb233dce7a474);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8450915f9d1bc3af4f1eb233dce7a474) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_operand_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_s);
        tmp_set_arg_1 = par_s;
        tmp_left_name_1 = PySet_New(tmp_set_arg_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__IDENT_CHARACTER);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__IDENT_CHARACTER);
        }

        if (tmp_mvar_value_1 == NULL) {
            Py_DECREF(tmp_left_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9917 ], 38, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = tmp_mvar_value_1;
        tmp_operand_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8450915f9d1bc3af4f1eb233dce7a474);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8450915f9d1bc3af4f1eb233dce7a474);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8450915f9d1bc3af4f1eb233dce7a474);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8450915f9d1bc3af4f1eb233dce7a474, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8450915f9d1bc3af4f1eb233dce7a474->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8450915f9d1bc3af4f1eb233dce7a474, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8450915f9d1bc3af4f1eb233dce7a474,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if (frame_8450915f9d1bc3af4f1eb233dce7a474 == cache_frame_8450915f9d1bc3af4f1eb233dce7a474) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_8450915f9d1bc3af4f1eb233dce7a474);
    }
    cache_frame_8450915f9d1bc3af4f1eb233dce7a474 = NULL;

    assertFrameObject(frame_8450915f9d1bc3af4f1eb233dce7a474);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_8___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_flags = python_pars[1];
    PyObject *par_path = python_pars[2];
    PyObject *par_files = python_pars[3];
    PyObject *par_converters = python_pars[4];
    struct Nuitka_FrameObject *frame_277ec3d484556603896b4a291c7e5e73;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_277ec3d484556603896b4a291c7e5e73 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_277ec3d484556603896b4a291c7e5e73)) {
        Py_XDECREF(cache_frame_277ec3d484556603896b4a291c7e5e73);

#if _DEBUG_REFCOUNTS
        if (cache_frame_277ec3d484556603896b4a291c7e5e73 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_277ec3d484556603896b4a291c7e5e73 = MAKE_FUNCTION_FRAME(codeobj_277ec3d484556603896b4a291c7e5e73, module_systemd$journal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_277ec3d484556603896b4a291c7e5e73->m_type_description == NULL);
    frame_277ec3d484556603896b4a291c7e5e73 = cache_frame_277ec3d484556603896b4a291c7e5e73;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_277ec3d484556603896b4a291c7e5e73);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_277ec3d484556603896b4a291c7e5e73) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_flags);
        tmp_compexpr_left_1 = par_flags;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(par_path);
        tmp_compexpr_left_2 = par_path;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_files);
        tmp_compexpr_left_3 = par_files;
        tmp_compexpr_right_3 = Py_None;
        tmp_and_right_value_1 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_LOCAL_ONLY);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOCAL_ONLY);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9955 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_1 = tmp_mvar_value_1;
        {
            PyObject *old = par_flags;
            assert(old != NULL);
            par_flags = tmp_assign_source_1;
            Py_INCREF(par_flags);
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_int_0;
        {
            PyObject *old = par_flags;
            assert(old != NULL);
            par_flags = tmp_assign_source_2;
            Py_INCREF(par_flags);
            Py_DECREF(old);
        }

    }
    branch_end_2:;
    branch_no_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_Reader);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Reader);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9987 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_expression_name_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain___init__);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        if (par_flags == NULL) {
            Py_DECREF(tmp_called_name_1);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "flags");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = par_flags;
        CHECK_OBJECT(par_path);
        tmp_args_element_name_2 = par_path;
        CHECK_OBJECT(par_files);
        tmp_args_element_name_3 = par_files;
        frame_277ec3d484556603896b4a291c7e5e73->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__sys);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__sys);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10015 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_3;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_version_info);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = const_tuple_int_pos_3_int_pos_3_tuple;
        tmp_condition_result_3 = RICH_COMPARE_GE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__ChainMap);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__ChainMap);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10041 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 176;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        frame_277ec3d484556603896b4a291c7e5e73->m_frame.f_lineno = 176;
        tmp_assattr_name_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_converters, tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(par_converters);
        tmp_compexpr_left_5 = par_converters;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_4 = (tmp_compexpr_left_5 != tmp_compexpr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain_converters);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_maps);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_converters);
        tmp_args_element_name_4 = par_converters;
        frame_277ec3d484556603896b4a291c7e5e73->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = {tmp_args_element_name_4};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_append, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_name_7 = par_self;
        tmp_expression_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain_converters);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain_maps);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain_append);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_DEFAULT_CONVERTERS);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_CONVERTERS);
        }

        if (tmp_mvar_value_5 == NULL) {
            Py_DECREF(tmp_called_name_3);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10072 ], 40, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = tmp_mvar_value_5;
        frame_277ec3d484556603896b4a291c7e5e73->m_frame.f_lineno = 179;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_DEFAULT_CONVERTERS);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_CONVERTERS);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10072 ], 40, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 181;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_6;
        frame_277ec3d484556603896b4a291c7e5e73->m_frame.f_lineno = 181;
        tmp_assattr_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_copy);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_converters, tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT(par_converters);
        tmp_compexpr_left_6 = par_converters;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_5 = (tmp_compexpr_left_6 != tmp_compexpr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(par_self);
        tmp_expression_name_8 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain_converters);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_converters);
        tmp_args_element_name_6 = par_converters;
        frame_277ec3d484556603896b4a291c7e5e73->m_frame.f_lineno = 183;
        {
            PyObject *call_args[] = {tmp_args_element_name_6};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_update, call_args);
        }

        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_5:;
    branch_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_277ec3d484556603896b4a291c7e5e73);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_277ec3d484556603896b4a291c7e5e73);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_277ec3d484556603896b4a291c7e5e73, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_277ec3d484556603896b4a291c7e5e73->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_277ec3d484556603896b4a291c7e5e73, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_277ec3d484556603896b4a291c7e5e73,
        type_description_1,
        par_self,
        par_flags,
        par_path,
        par_files,
        par_converters,
        NULL
    );


    // Release cached frame.
    if (frame_277ec3d484556603896b4a291c7e5e73 == cache_frame_277ec3d484556603896b4a291c7e5e73) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_277ec3d484556603896b4a291c7e5e73);
    }
    cache_frame_277ec3d484556603896b4a291c7e5e73 = NULL;

    assertFrameObject(frame_277ec3d484556603896b4a291c7e5e73);

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
    Py_XDECREF(par_flags);
    par_flags = NULL;

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

    Py_XDECREF(par_flags);
    par_flags = NULL;

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_files);
    Py_DECREF(par_files);
    CHECK_OBJECT(par_converters);
    Py_DECREF(par_converters);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_files);
    Py_DECREF(par_files);
    CHECK_OBJECT(par_converters);
    Py_DECREF(par_converters);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_9__convert_field(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *var_convert = NULL;
    struct Nuitka_FrameObject *frame_e47bce64f0f3b69c6a55acd59f70222f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_e47bce64f0f3b69c6a55acd59f70222f = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e47bce64f0f3b69c6a55acd59f70222f)) {
        Py_XDECREF(cache_frame_e47bce64f0f3b69c6a55acd59f70222f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e47bce64f0f3b69c6a55acd59f70222f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e47bce64f0f3b69c6a55acd59f70222f = MAKE_FUNCTION_FRAME(codeobj_e47bce64f0f3b69c6a55acd59f70222f, module_systemd$journal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e47bce64f0f3b69c6a55acd59f70222f->m_type_description == NULL);
    frame_e47bce64f0f3b69c6a55acd59f70222f = cache_frame_e47bce64f0f3b69c6a55acd59f70222f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e47bce64f0f3b69c6a55acd59f70222f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e47bce64f0f3b69c6a55acd59f70222f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_converters);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_get);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_name_1 = par_key;
        tmp_expression_name_3 = (PyObject *)&PyBytes_Type;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_decode);
        assert(!(tmp_args_element_name_2 == NULL));
        frame_e47bce64f0f3b69c6a55acd59f70222f->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_convert == NULL);
        var_convert = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(var_convert);
        tmp_called_name_2 = var_convert;
        CHECK_OBJECT(par_value);
        tmp_args_element_name_3 = par_value;
        frame_e47bce64f0f3b69c6a55acd59f70222f->m_frame.f_lineno = 195;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_e47bce64f0f3b69c6a55acd59f70222f, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_e47bce64f0f3b69c6a55acd59f70222f, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_value);
    tmp_return_value = par_value;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 194;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e47bce64f0f3b69c6a55acd59f70222f->m_frame) frame_e47bce64f0f3b69c6a55acd59f70222f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto frame_return_exit_1;
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

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e47bce64f0f3b69c6a55acd59f70222f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e47bce64f0f3b69c6a55acd59f70222f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e47bce64f0f3b69c6a55acd59f70222f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e47bce64f0f3b69c6a55acd59f70222f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e47bce64f0f3b69c6a55acd59f70222f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e47bce64f0f3b69c6a55acd59f70222f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e47bce64f0f3b69c6a55acd59f70222f,
        type_description_1,
        par_self,
        par_key,
        par_value,
        var_convert
    );


    // Release cached frame.
    if (frame_e47bce64f0f3b69c6a55acd59f70222f == cache_frame_e47bce64f0f3b69c6a55acd59f70222f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_e47bce64f0f3b69c6a55acd59f70222f);
    }
    cache_frame_e47bce64f0f3b69c6a55acd59f70222f = NULL;

    assertFrameObject(frame_e47bce64f0f3b69c6a55acd59f70222f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_convert);
    Py_DECREF(var_convert);
    var_convert = NULL;

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

    Py_XDECREF(var_convert);
    var_convert = NULL;

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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_10__convert_entry(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_entry = python_pars[1];
    PyObject *var_result = NULL;
    PyObject *var_key = NULL;
    PyObject *var_value = NULL;
    PyObject *outline_0_var_val = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_00390665543bc9144c1045c88e7ad734;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_151b6e526798c374ecfdbdd43295e13b_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_151b6e526798c374ecfdbdd43295e13b_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_00390665543bc9144c1045c88e7ad734 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_00390665543bc9144c1045c88e7ad734)) {
        Py_XDECREF(cache_frame_00390665543bc9144c1045c88e7ad734);

#if _DEBUG_REFCOUNTS
        if (cache_frame_00390665543bc9144c1045c88e7ad734 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_00390665543bc9144c1045c88e7ad734 = MAKE_FUNCTION_FRAME(codeobj_00390665543bc9144c1045c88e7ad734, module_systemd$journal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_00390665543bc9144c1045c88e7ad734->m_type_description == NULL);
    frame_00390665543bc9144c1045c88e7ad734 = cache_frame_00390665543bc9144c1045c88e7ad734;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_00390665543bc9144c1045c88e7ad734);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_00390665543bc9144c1045c88e7ad734) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_entry);
        tmp_called_instance_1 = par_entry;
        frame_00390665543bc9144c1045c88e7ad734->m_frame.f_lineno = 203;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_items);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 203;
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


            exception_lineno = 203;
            type_description_1 = "ooooo";
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


            type_description_1 = "ooooo";
            exception_lineno = 203;
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


            type_description_1 = "ooooo";
            exception_lineno = 203;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 203;
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

            type_description_1 = "ooooo";
            exception_lineno = 203;
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
            PyObject *old = var_key;
            var_key = tmp_assign_source_7;
            Py_INCREF(var_key);
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_value);
        tmp_isinstance_inst_1 = var_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyList_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(var_value);
        tmp_iter_arg_3 = var_value;
        tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_listcomp_1__$0;
            tmp_listcomp_1__$0 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = PyList_New(0);
        {
            PyObject *old = tmp_listcomp_1__contraction;
            tmp_listcomp_1__contraction = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    if (isFrameUnusable(cache_frame_151b6e526798c374ecfdbdd43295e13b_2)) {
        Py_XDECREF(cache_frame_151b6e526798c374ecfdbdd43295e13b_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_151b6e526798c374ecfdbdd43295e13b_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_151b6e526798c374ecfdbdd43295e13b_2 = MAKE_FUNCTION_FRAME(codeobj_151b6e526798c374ecfdbdd43295e13b, module_systemd$journal, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_151b6e526798c374ecfdbdd43295e13b_2->m_type_description == NULL);
    frame_151b6e526798c374ecfdbdd43295e13b_2 = cache_frame_151b6e526798c374ecfdbdd43295e13b_2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_151b6e526798c374ecfdbdd43295e13b_2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_151b6e526798c374ecfdbdd43295e13b_2) == 2); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_2 = tmp_listcomp_1__$0;
        tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_11 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "ooo";
                exception_lineno = 205;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_12 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_val;
            outline_0_var_val = tmp_assign_source_12;
            Py_INCREF(outline_0_var_val);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_key);
        tmp_args_element_name_1 = var_key;
        CHECK_OBJECT(outline_0_var_val);
        tmp_args_element_name_2 = outline_0_var_val;
        frame_151b6e526798c374ecfdbdd43295e13b_2->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_append_value_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain__convert_field, call_args);
        }

        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_2 = "ooo";
            goto try_except_handler_6;
        }
        assert(PyList_Check(tmp_append_list_1));
        tmp_res = PyList_Append(tmp_append_list_1, tmp_append_value_1);
        Py_DECREF(tmp_append_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_2 = "ooo";
            goto try_except_handler_6;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 205;
        type_description_2 = "ooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_dictset_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_dictset_value);
    goto try_return_handler_6;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_151b6e526798c374ecfdbdd43295e13b_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_151b6e526798c374ecfdbdd43295e13b_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_5;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_151b6e526798c374ecfdbdd43295e13b_2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_151b6e526798c374ecfdbdd43295e13b_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_151b6e526798c374ecfdbdd43295e13b_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_151b6e526798c374ecfdbdd43295e13b_2, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_151b6e526798c374ecfdbdd43295e13b_2,
        type_description_2,
        outline_0_var_val,
        par_self,
        var_key
    );


    // Release cached frame.
    if (frame_151b6e526798c374ecfdbdd43295e13b_2 == cache_frame_151b6e526798c374ecfdbdd43295e13b_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_151b6e526798c374ecfdbdd43295e13b_2);
    }
    cache_frame_151b6e526798c374ecfdbdd43295e13b_2 = NULL;

    assertFrameObject(frame_151b6e526798c374ecfdbdd43295e13b_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    Py_XDECREF(outline_0_var_val);
    outline_0_var_val = NULL;

    goto outline_result_1;
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

    Py_XDECREF(outline_0_var_val);
    outline_0_var_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_1:;
    exception_lineno = 205;
    goto try_except_handler_2;
    outline_result_1:;
    CHECK_OBJECT(var_result);
    tmp_dictset_dict = var_result;
    CHECK_OBJECT(var_key);
    tmp_dictset_key = var_key;
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
    Py_DECREF(tmp_dictset_value);
    if (tmp_res != 0) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 205;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_key);
        tmp_args_element_name_3 = var_key;
        CHECK_OBJECT(var_value);
        tmp_args_element_name_4 = var_value;
        frame_00390665543bc9144c1045c88e7ad734->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_dictset_value = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, const_str_plain__convert_field, call_args);
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_result);
        tmp_dictset_dict = var_result;
        CHECK_OBJECT(var_key);
        tmp_dictset_key = var_key;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
    }
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 203;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_00390665543bc9144c1045c88e7ad734);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_00390665543bc9144c1045c88e7ad734);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_00390665543bc9144c1045c88e7ad734, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_00390665543bc9144c1045c88e7ad734->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_00390665543bc9144c1045c88e7ad734, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_00390665543bc9144c1045c88e7ad734,
        type_description_1,
        par_self,
        par_entry,
        var_result,
        var_key,
        var_value
    );


    // Release cached frame.
    if (frame_00390665543bc9144c1045c88e7ad734 == cache_frame_00390665543bc9144c1045c88e7ad734) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_00390665543bc9144c1045c88e7ad734);
    }
    cache_frame_00390665543bc9144c1045c88e7ad734 = NULL;

    assertFrameObject(frame_00390665543bc9144c1045c88e7ad734);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;

    Py_XDECREF(var_key);
    var_key = NULL;

    Py_XDECREF(var_value);
    var_value = NULL;

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

    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;

    Py_XDECREF(var_key);
    var_key = NULL;

    Py_XDECREF(var_value);
    var_value = NULL;

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
    CHECK_OBJECT(par_entry);
    Py_DECREF(par_entry);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_entry);
    Py_DECREF(par_entry);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_11___iter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

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


static PyObject *impl_systemd$journal$$$function_12___next__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_ans = NULL;
    struct Nuitka_FrameObject *frame_bf6bd6a09433e4392b4e0337ca89e4b6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bf6bd6a09433e4392b4e0337ca89e4b6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bf6bd6a09433e4392b4e0337ca89e4b6)) {
        Py_XDECREF(cache_frame_bf6bd6a09433e4392b4e0337ca89e4b6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf6bd6a09433e4392b4e0337ca89e4b6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf6bd6a09433e4392b4e0337ca89e4b6 = MAKE_FUNCTION_FRAME(codeobj_bf6bd6a09433e4392b4e0337ca89e4b6, module_systemd$journal, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bf6bd6a09433e4392b4e0337ca89e4b6->m_type_description == NULL);
    frame_bf6bd6a09433e4392b4e0337ca89e4b6 = cache_frame_bf6bd6a09433e4392b4e0337ca89e4b6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bf6bd6a09433e4392b4e0337ca89e4b6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bf6bd6a09433e4392b4e0337ca89e4b6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_bf6bd6a09433e4392b4e0337ca89e4b6->m_frame.f_lineno = 224;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_get_next);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_ans == NULL);
        var_ans = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_ans);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_ans);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oo";
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
    CHECK_OBJECT(var_ans);
    tmp_return_value = var_ans;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_raise_type_1;
        frame_bf6bd6a09433e4392b4e0337ca89e4b6->m_frame.f_lineno = 228;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_StopIteration);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 228;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf6bd6a09433e4392b4e0337ca89e4b6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf6bd6a09433e4392b4e0337ca89e4b6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf6bd6a09433e4392b4e0337ca89e4b6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bf6bd6a09433e4392b4e0337ca89e4b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf6bd6a09433e4392b4e0337ca89e4b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf6bd6a09433e4392b4e0337ca89e4b6, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf6bd6a09433e4392b4e0337ca89e4b6,
        type_description_1,
        par_self,
        var_ans
    );


    // Release cached frame.
    if (frame_bf6bd6a09433e4392b4e0337ca89e4b6 == cache_frame_bf6bd6a09433e4392b4e0337ca89e4b6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_bf6bd6a09433e4392b4e0337ca89e4b6);
    }
    cache_frame_bf6bd6a09433e4392b4e0337ca89e4b6 = NULL;

    assertFrameObject(frame_bf6bd6a09433e4392b4e0337ca89e4b6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ans);
    Py_DECREF(var_ans);
    var_ans = NULL;

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

    Py_XDECREF(var_ans);
    var_ans = NULL;

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


static PyObject *impl_systemd$journal$$$function_13_add_match(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_arg = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_1cfd7ffe5ecf0b7833dba5e62d906f5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_1cfd7ffe5ecf0b7833dba5e62d906f5e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1cfd7ffe5ecf0b7833dba5e62d906f5e)) {
        Py_XDECREF(cache_frame_1cfd7ffe5ecf0b7833dba5e62d906f5e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1cfd7ffe5ecf0b7833dba5e62d906f5e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1cfd7ffe5ecf0b7833dba5e62d906f5e = MAKE_FUNCTION_FRAME(codeobj_1cfd7ffe5ecf0b7833dba5e62d906f5e, module_systemd$journal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1cfd7ffe5ecf0b7833dba5e62d906f5e->m_type_description == NULL);
    frame_1cfd7ffe5ecf0b7833dba5e62d906f5e = cache_frame_1cfd7ffe5ecf0b7833dba5e62d906f5e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1cfd7ffe5ecf0b7833dba5e62d906f5e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1cfd7ffe5ecf0b7833dba5e62d906f5e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_arg_1;
        CHECK_OBJECT(par_args);
        tmp_list_arg_1 = par_args;
        tmp_assign_source_1 = PySequence_List(tmp_list_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_args;
            assert(old != NULL);
            par_args = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_args);
        tmp_expression_name_1 = par_args;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_extend);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT(par_kwargs);
            tmp_called_instance_1 = par_kwargs;
            frame_1cfd7ffe5ecf0b7833dba5e62d906f5e->m_frame.f_lineno = 242;
            tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_items);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "ooooN";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "ooooN";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_args_element_name_1 = MAKE_GENERATOR_systemd$journal$$$function_13_add_match$$$genexpr_1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_1;
        // End of try:
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;

        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        frame_1cfd7ffe5ecf0b7833dba5e62d906f5e->m_frame.f_lineno = 242;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(par_args);
        tmp_iter_arg_2 = par_args;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooN";
                exception_lineno = 243;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_arg;
            var_arg = tmp_assign_source_5;
            Py_INCREF(var_arg);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_Reader);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Reader);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9987 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 244;
            type_description_1 = "ooooN";
            goto try_except_handler_3;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_called_instance_2 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooN";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_arg);
        tmp_args_element_name_2 = var_arg;
        frame_1cfd7ffe5ecf0b7833dba5e62d906f5e->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = {tmp_args_element_name_2};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_add_match, call_args);
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooN";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 243;
        type_description_1 = "ooooN";
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1cfd7ffe5ecf0b7833dba5e62d906f5e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1cfd7ffe5ecf0b7833dba5e62d906f5e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1cfd7ffe5ecf0b7833dba5e62d906f5e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1cfd7ffe5ecf0b7833dba5e62d906f5e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1cfd7ffe5ecf0b7833dba5e62d906f5e, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1cfd7ffe5ecf0b7833dba5e62d906f5e,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        var_arg,
        NULL
    );


    // Release cached frame.
    if (frame_1cfd7ffe5ecf0b7833dba5e62d906f5e == cache_frame_1cfd7ffe5ecf0b7833dba5e62d906f5e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_1cfd7ffe5ecf0b7833dba5e62d906f5e);
    }
    cache_frame_1cfd7ffe5ecf0b7833dba5e62d906f5e = NULL;

    assertFrameObject(frame_1cfd7ffe5ecf0b7833dba5e62d906f5e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;

    Py_XDECREF(var_arg);
    var_arg = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;

    Py_XDECREF(var_arg);
    var_arg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct systemd$journal$$$function_13_add_match$$$genexpr_1_genexpr_locals {
    PyObject *var_key;
    PyObject *var_val;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *systemd$journal$$$function_13_add_match$$$genexpr_1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct systemd$journal$$$function_13_add_match$$$genexpr_1_genexpr_locals *generator_heap = (struct systemd$journal$$$function_13_add_match$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_key = NULL;
    generator_heap->var_val = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_26aa3b7dd2f9bbc75b85be3c93c19e39, module_systemd$journal, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noo";
                generator_heap->exception_lineno = 242;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 242;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 242;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "Noo";
                    generator_heap->exception_lineno = 242;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = const_str_digest_fcf040720b88d60da4ce975010c44a3a;
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 242;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_key;
            generator_heap->var_key = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_val;
            generator_heap->var_val = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_val);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__make_line);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__make_line);
        }

        if (tmp_mvar_value_1 == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 10112 ], 32, 0);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(generator_heap->var_key);
        tmp_args_element_name_1 = generator_heap->var_key;
        CHECK_OBJECT(generator_heap->var_val);
        tmp_args_element_name_2 = generator_heap->var_val;
        generator->m_frame->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 242;
        generator_heap->type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

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
            NULL,
            generator_heap->var_key,
            generator_heap->var_val
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
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_key);
    generator_heap->var_key = NULL;

    Py_XDECREF(generator_heap->var_val);
    generator_heap->var_val = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF(generator_heap->var_key);
    generator_heap->var_key = NULL;

    Py_XDECREF(generator_heap->var_val);
    generator_heap->var_val = NULL;



    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_systemd$journal$$$function_13_add_match$$$genexpr_1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        systemd$journal$$$function_13_add_match$$$genexpr_1_genexpr_context,
        module_systemd$journal,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_0b8b46e68996d7cdf0f99a05ce2628b8,
#endif
        codeobj_26aa3b7dd2f9bbc75b85be3c93c19e39,
        closure,
        1,
        sizeof(struct systemd$journal$$$function_13_add_match$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_systemd$journal$$$function_14_get_next(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_skip = python_pars[1];
    PyObject *var_entry = NULL;
    struct Nuitka_FrameObject *frame_fbd65cd85c507de4dd9af30c7e7da31b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fbd65cd85c507de4dd9af30c7e7da31b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fbd65cd85c507de4dd9af30c7e7da31b)) {
        Py_XDECREF(cache_frame_fbd65cd85c507de4dd9af30c7e7da31b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fbd65cd85c507de4dd9af30c7e7da31b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fbd65cd85c507de4dd9af30c7e7da31b = MAKE_FUNCTION_FRAME(codeobj_fbd65cd85c507de4dd9af30c7e7da31b, module_systemd$journal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_fbd65cd85c507de4dd9af30c7e7da31b->m_type_description == NULL);
    frame_fbd65cd85c507de4dd9af30c7e7da31b = cache_frame_fbd65cd85c507de4dd9af30c7e7da31b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fbd65cd85c507de4dd9af30c7e7da31b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fbd65cd85c507de4dd9af30c7e7da31b) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_Reader);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Reader);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9987 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 258;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_skip);
        tmp_args_element_name_1 = par_skip;
        frame_fbd65cd85c507de4dd9af30c7e7da31b->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain__next, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 258;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_type_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_object_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_Reader);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Reader);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9987 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 259;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT(par_self);
        tmp_object_name_2 = par_self;
        tmp_called_instance_2 = BUILTIN_SUPER(tmp_type_name_2, tmp_object_name_2);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_fbd65cd85c507de4dd9af30c7e7da31b->m_frame.f_lineno = 259;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain__get_all);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        assert(var_entry == NULL);
        var_entry = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_entry);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_entry);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooN";
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_fbd65cd85c507de4dd9af30c7e7da31b->m_frame.f_lineno = 261;
        tmp_ass_subvalue_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain__get_realtime);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_entry);
        tmp_ass_subscribed_1 = var_entry;
        tmp_ass_subscript_1 = const_str_plain___REALTIME_TIMESTAMP;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        frame_fbd65cd85c507de4dd9af30c7e7da31b->m_frame.f_lineno = 262;
        tmp_ass_subvalue_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain__get_monotonic);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_entry);
        tmp_ass_subscribed_2 = var_entry;
        tmp_ass_subscript_2 = const_str_plain___MONOTONIC_TIMESTAMP;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        frame_fbd65cd85c507de4dd9af30c7e7da31b->m_frame.f_lineno = 263;
        tmp_ass_subvalue_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, const_str_plain__get_cursor);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_entry);
        tmp_ass_subscribed_3 = var_entry;
        tmp_ass_subscript_3 = const_str_plain___CURSOR;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(var_entry);
        tmp_args_element_name_2 = var_entry;
        frame_fbd65cd85c507de4dd9af30c7e7da31b->m_frame.f_lineno = 264;
        {
            PyObject *call_args[] = {tmp_args_element_name_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain__convert_entry, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fbd65cd85c507de4dd9af30c7e7da31b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_fbd65cd85c507de4dd9af30c7e7da31b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fbd65cd85c507de4dd9af30c7e7da31b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fbd65cd85c507de4dd9af30c7e7da31b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fbd65cd85c507de4dd9af30c7e7da31b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fbd65cd85c507de4dd9af30c7e7da31b, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fbd65cd85c507de4dd9af30c7e7da31b,
        type_description_1,
        par_self,
        par_skip,
        var_entry,
        NULL
    );


    // Release cached frame.
    if (frame_fbd65cd85c507de4dd9af30c7e7da31b == cache_frame_fbd65cd85c507de4dd9af30c7e7da31b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_fbd65cd85c507de4dd9af30c7e7da31b);
    }
    cache_frame_fbd65cd85c507de4dd9af30c7e7da31b = NULL;

    assertFrameObject(frame_fbd65cd85c507de4dd9af30c7e7da31b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = PyDict_New();
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_entry);
    var_entry = NULL;

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

    Py_XDECREF(var_entry);
    var_entry = NULL;

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
    CHECK_OBJECT(par_skip);
    Py_DECREF(par_skip);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_skip);
    Py_DECREF(par_skip);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_15_get_previous(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_skip = python_pars[1];
    struct Nuitka_FrameObject *frame_ce3ddfe598132b5a852073e168b44b05;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ce3ddfe598132b5a852073e168b44b05 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ce3ddfe598132b5a852073e168b44b05)) {
        Py_XDECREF(cache_frame_ce3ddfe598132b5a852073e168b44b05);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ce3ddfe598132b5a852073e168b44b05 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ce3ddfe598132b5a852073e168b44b05 = MAKE_FUNCTION_FRAME(codeobj_ce3ddfe598132b5a852073e168b44b05, module_systemd$journal, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ce3ddfe598132b5a852073e168b44b05->m_type_description == NULL);
    frame_ce3ddfe598132b5a852073e168b44b05 = cache_frame_ce3ddfe598132b5a852073e168b44b05;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ce3ddfe598132b5a852073e168b44b05);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ce3ddfe598132b5a852073e168b44b05) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_get_next);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_skip);
        tmp_operand_name_1 = par_skip;
        tmp_args_element_name_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ce3ddfe598132b5a852073e168b44b05->m_frame.f_lineno = 281;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ce3ddfe598132b5a852073e168b44b05);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ce3ddfe598132b5a852073e168b44b05);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ce3ddfe598132b5a852073e168b44b05);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ce3ddfe598132b5a852073e168b44b05, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ce3ddfe598132b5a852073e168b44b05->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ce3ddfe598132b5a852073e168b44b05, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ce3ddfe598132b5a852073e168b44b05,
        type_description_1,
        par_self,
        par_skip
    );


    // Release cached frame.
    if (frame_ce3ddfe598132b5a852073e168b44b05 == cache_frame_ce3ddfe598132b5a852073e168b44b05) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_ce3ddfe598132b5a852073e168b44b05);
    }
    cache_frame_ce3ddfe598132b5a852073e168b44b05 = NULL;

    assertFrameObject(frame_ce3ddfe598132b5a852073e168b44b05);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_skip);
    Py_DECREF(par_skip);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_skip);
    Py_DECREF(par_skip);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_16_query_unique(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_field = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_8056e510988e3a3d379226232700573b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8056e510988e3a3d379226232700573b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8056e510988e3a3d379226232700573b)) {
        Py_XDECREF(cache_frame_8056e510988e3a3d379226232700573b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8056e510988e3a3d379226232700573b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8056e510988e3a3d379226232700573b = MAKE_FUNCTION_FRAME(codeobj_8056e510988e3a3d379226232700573b, module_systemd$journal, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8056e510988e3a3d379226232700573b->m_type_description == NULL);
    frame_8056e510988e3a3d379226232700573b = cache_frame_8056e510988e3a3d379226232700573b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8056e510988e3a3d379226232700573b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8056e510988e3a3d379226232700573b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_set_arg_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_type_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_object_name_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_Reader);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Reader);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 9987 ], 28, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 293;
                type_description_1 = "ccN";
                goto frame_exception_exit_1;
            }

            tmp_type_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT(Nuitka_Cell_GET(par_self));
            tmp_object_name_1 = Nuitka_Cell_GET(par_self);
            tmp_called_instance_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_1 = "ccN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(Nuitka_Cell_GET(par_field));
            tmp_args_element_name_1 = Nuitka_Cell_GET(par_field);
            frame_8056e510988e3a3d379226232700573b->m_frame.f_lineno = 293;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_query_unique, call_args);
            }

            Py_DECREF(tmp_called_instance_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_1 = "ccN";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_1 = "ccN";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[3];

            tmp_closure_1[0] = par_field;
            Py_INCREF(tmp_closure_1[0]);
            tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[2] = par_self;
            Py_INCREF(tmp_closure_1[2]);

            tmp_set_arg_1 = MAKE_GENERATOR_systemd$journal$$$function_16_query_unique$$$genexpr_1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_1;
        // End of try:
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;

        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ccN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8056e510988e3a3d379226232700573b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8056e510988e3a3d379226232700573b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8056e510988e3a3d379226232700573b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8056e510988e3a3d379226232700573b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8056e510988e3a3d379226232700573b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8056e510988e3a3d379226232700573b, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8056e510988e3a3d379226232700573b,
        type_description_1,
        par_self,
        par_field,
        NULL
    );


    // Release cached frame.
    if (frame_8056e510988e3a3d379226232700573b == cache_frame_8056e510988e3a3d379226232700573b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_8056e510988e3a3d379226232700573b);
    }
    cache_frame_8056e510988e3a3d379226232700573b = NULL;

    assertFrameObject(frame_8056e510988e3a3d379226232700573b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct systemd$journal$$$function_16_query_unique$$$genexpr_1_genexpr_locals {
    PyObject *var_value;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *systemd$journal$$$function_16_query_unique$$$genexpr_1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct systemd$journal$$$function_16_query_unique$$$genexpr_1_genexpr_locals *generator_heap = (struct systemd$journal$$$function_16_query_unique$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_value = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_5251a30be86ecbc46921ff4bcd3ef1e0, module_systemd$journal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Nocc";
                generator_heap->exception_lineno = 292;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_value;
            generator_heap->var_value = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_value);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 292;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }

        tmp_expression_name_2 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain__convert_field);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 292;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_name_1);
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "field");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 292;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }

        tmp_args_element_name_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        CHECK_OBJECT(generator_heap->var_value);
        tmp_args_element_name_2 = generator_heap->var_value;
        generator->m_frame->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 292;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_expression_name_2, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_expression_name_2, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 292;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 292;
        generator_heap->type_description_1 = "Nocc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
            NULL,
            generator_heap->var_value,
            generator->m_closure[2],
            generator->m_closure[0]
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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_value);
    generator_heap->var_value = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF(generator_heap->var_value);
    generator_heap->var_value = NULL;



    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_systemd$journal$$$function_16_query_unique$$$genexpr_1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        systemd$journal$$$function_16_query_unique$$$genexpr_1_genexpr_context,
        module_systemd$journal,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_097e2af75f6d3cdffafe42cac011dd94,
#endif
        codeobj_5251a30be86ecbc46921ff4bcd3ef1e0,
        closure,
        3,
        sizeof(struct systemd$journal$$$function_16_query_unique$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_systemd$journal$$$function_17_wait(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_timeout = python_pars[1];
    PyObject *var_us = NULL;
    struct Nuitka_FrameObject *frame_862dccd64e45a370b559bcd5fcc78300;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_862dccd64e45a370b559bcd5fcc78300 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_862dccd64e45a370b559bcd5fcc78300)) {
        Py_XDECREF(cache_frame_862dccd64e45a370b559bcd5fcc78300);

#if _DEBUG_REFCOUNTS
        if (cache_frame_862dccd64e45a370b559bcd5fcc78300 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_862dccd64e45a370b559bcd5fcc78300 = MAKE_FUNCTION_FRAME(codeobj_862dccd64e45a370b559bcd5fcc78300, module_systemd$journal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_862dccd64e45a370b559bcd5fcc78300->m_type_description == NULL);
    frame_862dccd64e45a370b559bcd5fcc78300 = cache_frame_862dccd64e45a370b559bcd5fcc78300;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_862dccd64e45a370b559bcd5fcc78300);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_862dccd64e45a370b559bcd5fcc78300) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_timeout);
        tmp_compexpr_left_1 = par_timeout;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_1 = const_int_neg_1;
        Py_INCREF(tmp_assign_source_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_timeout);
        tmp_left_name_1 = par_timeout;
        tmp_right_name_1 = const_int_pos_1000000;
        tmp_int_arg_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_us == NULL);
        var_us = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_Reader);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Reader);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9987 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 306;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_us);
        tmp_args_element_name_1 = var_us;
        frame_862dccd64e45a370b559bcd5fcc78300->m_frame.f_lineno = 306;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_wait, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_862dccd64e45a370b559bcd5fcc78300);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_862dccd64e45a370b559bcd5fcc78300);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_862dccd64e45a370b559bcd5fcc78300);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_862dccd64e45a370b559bcd5fcc78300, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_862dccd64e45a370b559bcd5fcc78300->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_862dccd64e45a370b559bcd5fcc78300, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_862dccd64e45a370b559bcd5fcc78300,
        type_description_1,
        par_self,
        par_timeout,
        var_us,
        NULL
    );


    // Release cached frame.
    if (frame_862dccd64e45a370b559bcd5fcc78300 == cache_frame_862dccd64e45a370b559bcd5fcc78300) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_862dccd64e45a370b559bcd5fcc78300);
    }
    cache_frame_862dccd64e45a370b559bcd5fcc78300 = NULL;

    assertFrameObject(frame_862dccd64e45a370b559bcd5fcc78300);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_us);
    Py_DECREF(var_us);
    var_us = NULL;

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

    Py_XDECREF(var_us);
    var_us = NULL;

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
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_18_seek_realtime(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_realtime = python_pars[1];
    struct Nuitka_FrameObject *frame_6b94684d53f2cd7c09ca0f256ee51ebf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6b94684d53f2cd7c09ca0f256ee51ebf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6b94684d53f2cd7c09ca0f256ee51ebf)) {
        Py_XDECREF(cache_frame_6b94684d53f2cd7c09ca0f256ee51ebf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6b94684d53f2cd7c09ca0f256ee51ebf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6b94684d53f2cd7c09ca0f256ee51ebf = MAKE_FUNCTION_FRAME(codeobj_6b94684d53f2cd7c09ca0f256ee51ebf, module_systemd$journal, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6b94684d53f2cd7c09ca0f256ee51ebf->m_type_description == NULL);
    frame_6b94684d53f2cd7c09ca0f256ee51ebf = cache_frame_6b94684d53f2cd7c09ca0f256ee51ebf;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6b94684d53f2cd7c09ca0f256ee51ebf);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6b94684d53f2cd7c09ca0f256ee51ebf) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_realtime);
        tmp_isinstance_inst_1 = par_realtime;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__datetime);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__datetime);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9859 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 323;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_datetime);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooN";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_realtime);
        tmp_called_instance_1 = par_realtime;
        frame_6b94684d53f2cd7c09ca0f256ee51ebf->m_frame.f_lineno = 324;
        tmp_float_arg_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_strftime, &PyTuple_GET_ITEM(const_tuple_str_digest_a3ed2e23aa4d2da087c40a572b2a5866_tuple, 0));

        if (tmp_float_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = TO_FLOAT(tmp_float_arg_1);
        Py_DECREF(tmp_float_arg_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1000000;
        tmp_int_arg_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_realtime;
            assert(old != NULL);
            par_realtime = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_realtime);
        tmp_isinstance_inst_2 = par_realtime;
        tmp_isinstance_cls_2 = (PyObject *)&PyLong_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(par_realtime);
        tmp_left_name_2 = par_realtime;
        tmp_right_name_2 = const_int_pos_1000000;
        tmp_int_arg_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_2);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_realtime;
            assert(old != NULL);
            par_realtime = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_object_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_Reader);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Reader);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9987 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 327;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_expression_name_2 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_seek_realtime);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        if (par_realtime == NULL) {
            Py_DECREF(tmp_called_name_1);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "realtime");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 327;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = par_realtime;
        frame_6b94684d53f2cd7c09ca0f256ee51ebf->m_frame.f_lineno = 327;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b94684d53f2cd7c09ca0f256ee51ebf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b94684d53f2cd7c09ca0f256ee51ebf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b94684d53f2cd7c09ca0f256ee51ebf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6b94684d53f2cd7c09ca0f256ee51ebf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b94684d53f2cd7c09ca0f256ee51ebf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b94684d53f2cd7c09ca0f256ee51ebf, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6b94684d53f2cd7c09ca0f256ee51ebf,
        type_description_1,
        par_self,
        par_realtime,
        NULL
    );


    // Release cached frame.
    if (frame_6b94684d53f2cd7c09ca0f256ee51ebf == cache_frame_6b94684d53f2cd7c09ca0f256ee51ebf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_6b94684d53f2cd7c09ca0f256ee51ebf);
    }
    cache_frame_6b94684d53f2cd7c09ca0f256ee51ebf = NULL;

    assertFrameObject(frame_6b94684d53f2cd7c09ca0f256ee51ebf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_realtime);
    par_realtime = NULL;

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

    Py_XDECREF(par_realtime);
    par_realtime = NULL;

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


static PyObject *impl_systemd$journal$$$function_19_seek_monotonic(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_monotonic = python_pars[1];
    PyObject *par_bootid = python_pars[2];
    struct Nuitka_FrameObject *frame_5804d4da4fa0ddeb195c03a018070005;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5804d4da4fa0ddeb195c03a018070005 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5804d4da4fa0ddeb195c03a018070005)) {
        Py_XDECREF(cache_frame_5804d4da4fa0ddeb195c03a018070005);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5804d4da4fa0ddeb195c03a018070005 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5804d4da4fa0ddeb195c03a018070005 = MAKE_FUNCTION_FRAME(codeobj_5804d4da4fa0ddeb195c03a018070005, module_systemd$journal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5804d4da4fa0ddeb195c03a018070005->m_type_description == NULL);
    frame_5804d4da4fa0ddeb195c03a018070005 = cache_frame_5804d4da4fa0ddeb195c03a018070005;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5804d4da4fa0ddeb195c03a018070005);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5804d4da4fa0ddeb195c03a018070005) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_monotonic);
        tmp_isinstance_inst_1 = par_monotonic;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__datetime);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__datetime);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9859 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 337;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_timedelta);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooN";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_monotonic);
        tmp_called_instance_1 = par_monotonic;
        frame_5804d4da4fa0ddeb195c03a018070005->m_frame.f_lineno = 338;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_total_seconds);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_monotonic;
            assert(old != NULL);
            par_monotonic = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_monotonic);
        tmp_left_name_1 = par_monotonic;
        tmp_right_name_1 = const_int_pos_1000000;
        tmp_int_arg_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_monotonic;
            assert(old != NULL);
            par_monotonic = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT(par_bootid);
        tmp_isinstance_inst_2 = par_bootid;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__uuid);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__uuid);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9890 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 340;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_2;
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_UUID);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooN";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(par_bootid);
        tmp_expression_name_3 = par_bootid;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_hex);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_bootid;
            assert(old != NULL);
            par_bootid = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_object_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_Reader);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Reader);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9987 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 342;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_3;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_called_instance_2 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_monotonic);
        tmp_args_element_name_1 = par_monotonic;
        CHECK_OBJECT(par_bootid);
        tmp_args_element_name_2 = par_bootid;
        frame_5804d4da4fa0ddeb195c03a018070005->m_frame.f_lineno = 342;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain_seek_monotonic, call_args);
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5804d4da4fa0ddeb195c03a018070005);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5804d4da4fa0ddeb195c03a018070005);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5804d4da4fa0ddeb195c03a018070005);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5804d4da4fa0ddeb195c03a018070005, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5804d4da4fa0ddeb195c03a018070005->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5804d4da4fa0ddeb195c03a018070005, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5804d4da4fa0ddeb195c03a018070005,
        type_description_1,
        par_self,
        par_monotonic,
        par_bootid,
        NULL
    );


    // Release cached frame.
    if (frame_5804d4da4fa0ddeb195c03a018070005 == cache_frame_5804d4da4fa0ddeb195c03a018070005) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_5804d4da4fa0ddeb195c03a018070005);
    }
    cache_frame_5804d4da4fa0ddeb195c03a018070005 = NULL;

    assertFrameObject(frame_5804d4da4fa0ddeb195c03a018070005);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_monotonic);
    Py_DECREF(par_monotonic);
    par_monotonic = NULL;

    CHECK_OBJECT(par_bootid);
    Py_DECREF(par_bootid);
    par_bootid = NULL;

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

    Py_XDECREF(par_monotonic);
    par_monotonic = NULL;

    Py_XDECREF(par_bootid);
    par_bootid = NULL;

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


static PyObject *impl_systemd$journal$$$function_20_log_level(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_level = python_pars[1];
    PyObject *var_i = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_dccb6888200845ced40ec83a78270deb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_dccb6888200845ced40ec83a78270deb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dccb6888200845ced40ec83a78270deb)) {
        Py_XDECREF(cache_frame_dccb6888200845ced40ec83a78270deb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dccb6888200845ced40ec83a78270deb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dccb6888200845ced40ec83a78270deb = MAKE_FUNCTION_FRAME(codeobj_dccb6888200845ced40ec83a78270deb, module_systemd$journal, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_dccb6888200845ced40ec83a78270deb->m_type_description == NULL);
    frame_dccb6888200845ced40ec83a78270deb = cache_frame_dccb6888200845ced40ec83a78270deb;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_dccb6888200845ced40ec83a78270deb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dccb6888200845ced40ec83a78270deb) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_outline_return_value_1;
        int tmp_truth_name_1;
        {
            PyObject *tmp_assign_source_1;
            CHECK_OBJECT(par_level);
            tmp_assign_source_1 = par_level;
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            Py_INCREF(tmp_assign_source_1);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            tmp_compexpr_left_1 = const_int_0;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert(tmp_comparison_chain_1__comparison_result == NULL);
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_name_1 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_outline_return_value_1);
        goto try_return_handler_2;
        branch_no_2:;
        {
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_left_2 = tmp_comparison_chain_1__operand_2;
            tmp_compexpr_right_2 = const_int_pos_7;
            tmp_outline_return_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_outline_return_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;

        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;

        goto outline_result_1;
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

        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;

        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;

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
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_outline_return_value_1);

            exception_lineno = 347;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_outline_return_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_level);
        tmp_left_name_1 = par_level;
        tmp_right_name_1 = const_int_pos_1;
        tmp_xrange_low_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        if (tmp_xrange_low_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 348;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_5;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_add_match);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_dict_key_1 = const_str_plain_PRIORITY;
        tmp_left_name_2 = const_str_digest_a9f9a21e276932d061c34fdf077216a6;
        CHECK_OBJECT(var_i);
        tmp_right_name_2 = var_i;
        tmp_dict_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 349;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_dccb6888200845ced40ec83a78270deb->m_frame.f_lineno = 349;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 348;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_8e41bf09a8a4f3595a81c5da2ee84e4e;
        frame_dccb6888200845ced40ec83a78270deb->m_frame.f_lineno = 351;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 351;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dccb6888200845ced40ec83a78270deb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dccb6888200845ced40ec83a78270deb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dccb6888200845ced40ec83a78270deb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dccb6888200845ced40ec83a78270deb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dccb6888200845ced40ec83a78270deb, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dccb6888200845ced40ec83a78270deb,
        type_description_1,
        par_self,
        par_level,
        var_i
    );


    // Release cached frame.
    if (frame_dccb6888200845ced40ec83a78270deb == cache_frame_dccb6888200845ced40ec83a78270deb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_dccb6888200845ced40ec83a78270deb);
    }
    cache_frame_dccb6888200845ced40ec83a78270deb = NULL;

    assertFrameObject(frame_dccb6888200845ced40ec83a78270deb);

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
    Py_XDECREF(var_i);
    var_i = NULL;

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

    Py_XDECREF(var_i);
    var_i = NULL;

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
    CHECK_OBJECT(par_level);
    Py_DECREF(par_level);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_level);
    Py_DECREF(par_level);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_21_messageid_match(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_messageid = python_pars[1];
    struct Nuitka_FrameObject *frame_7ee5e529fbed3cce6c82724654ec0f89;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7ee5e529fbed3cce6c82724654ec0f89 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7ee5e529fbed3cce6c82724654ec0f89)) {
        Py_XDECREF(cache_frame_7ee5e529fbed3cce6c82724654ec0f89);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ee5e529fbed3cce6c82724654ec0f89 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ee5e529fbed3cce6c82724654ec0f89 = MAKE_FUNCTION_FRAME(codeobj_7ee5e529fbed3cce6c82724654ec0f89, module_systemd$journal, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7ee5e529fbed3cce6c82724654ec0f89->m_type_description == NULL);
    frame_7ee5e529fbed3cce6c82724654ec0f89 = cache_frame_7ee5e529fbed3cce6c82724654ec0f89;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7ee5e529fbed3cce6c82724654ec0f89);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7ee5e529fbed3cce6c82724654ec0f89) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_messageid);
        tmp_isinstance_inst_1 = par_messageid;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__uuid);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__uuid);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9890 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 361;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_UUID);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_messageid);
        tmp_expression_name_2 = par_messageid;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_hex);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_messageid;
            assert(old != NULL);
            par_messageid = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_add_match);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_MESSAGE_ID;
        CHECK_OBJECT(par_messageid);
        tmp_dict_value_1 = par_messageid;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_7ee5e529fbed3cce6c82724654ec0f89->m_frame.f_lineno = 363;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7ee5e529fbed3cce6c82724654ec0f89);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7ee5e529fbed3cce6c82724654ec0f89);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7ee5e529fbed3cce6c82724654ec0f89, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ee5e529fbed3cce6c82724654ec0f89->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ee5e529fbed3cce6c82724654ec0f89, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ee5e529fbed3cce6c82724654ec0f89,
        type_description_1,
        par_self,
        par_messageid
    );


    // Release cached frame.
    if (frame_7ee5e529fbed3cce6c82724654ec0f89 == cache_frame_7ee5e529fbed3cce6c82724654ec0f89) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_7ee5e529fbed3cce6c82724654ec0f89);
    }
    cache_frame_7ee5e529fbed3cce6c82724654ec0f89 = NULL;

    assertFrameObject(frame_7ee5e529fbed3cce6c82724654ec0f89);

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
    CHECK_OBJECT(par_messageid);
    Py_DECREF(par_messageid);
    par_messageid = NULL;

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

    Py_XDECREF(par_messageid);
    par_messageid = NULL;

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


static PyObject *impl_systemd$journal$$$function_22_this_boot(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bootid = python_pars[1];
    struct Nuitka_FrameObject *frame_cf49912354663723424b645868386141;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cf49912354663723424b645868386141 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cf49912354663723424b645868386141)) {
        Py_XDECREF(cache_frame_cf49912354663723424b645868386141);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf49912354663723424b645868386141 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf49912354663723424b645868386141 = MAKE_FUNCTION_FRAME(codeobj_cf49912354663723424b645868386141, module_systemd$journal, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cf49912354663723424b645868386141->m_type_description == NULL);
    frame_cf49912354663723424b645868386141 = cache_frame_cf49912354663723424b645868386141;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cf49912354663723424b645868386141);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cf49912354663723424b645868386141) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_bootid);
        tmp_compexpr_left_1 = par_bootid;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__id128);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__id128);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10144 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 373;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_cf49912354663723424b645868386141->m_frame.f_lineno = 373;
        tmp_expression_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_get_boot);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_hex);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_bootid;
            assert(old != NULL);
            par_bootid = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_bootid);
        tmp_getattr_target_1 = par_bootid;
        tmp_getattr_attr_1 = const_str_plain_hex;
        CHECK_OBJECT(par_bootid);
        tmp_getattr_default_1 = par_bootid;
        tmp_assign_source_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_bootid;
            assert(old != NULL);
            par_bootid = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_end_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_add_match);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain__BOOT_ID;
        CHECK_OBJECT(par_bootid);
        tmp_dict_value_1 = par_bootid;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_cf49912354663723424b645868386141->m_frame.f_lineno = 376;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cf49912354663723424b645868386141);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cf49912354663723424b645868386141);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cf49912354663723424b645868386141, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf49912354663723424b645868386141->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf49912354663723424b645868386141, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf49912354663723424b645868386141,
        type_description_1,
        par_self,
        par_bootid
    );


    // Release cached frame.
    if (frame_cf49912354663723424b645868386141 == cache_frame_cf49912354663723424b645868386141) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_cf49912354663723424b645868386141);
    }
    cache_frame_cf49912354663723424b645868386141 = NULL;

    assertFrameObject(frame_cf49912354663723424b645868386141);

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
    CHECK_OBJECT(par_bootid);
    Py_DECREF(par_bootid);
    par_bootid = NULL;

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

    Py_XDECREF(par_bootid);
    par_bootid = NULL;

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


static PyObject *impl_systemd$journal$$$function_23_this_machine(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_machineid = python_pars[1];
    struct Nuitka_FrameObject *frame_8145472245aac94b41323cd238ab9ab5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8145472245aac94b41323cd238ab9ab5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8145472245aac94b41323cd238ab9ab5)) {
        Py_XDECREF(cache_frame_8145472245aac94b41323cd238ab9ab5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8145472245aac94b41323cd238ab9ab5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8145472245aac94b41323cd238ab9ab5 = MAKE_FUNCTION_FRAME(codeobj_8145472245aac94b41323cd238ab9ab5, module_systemd$journal, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8145472245aac94b41323cd238ab9ab5->m_type_description == NULL);
    frame_8145472245aac94b41323cd238ab9ab5 = cache_frame_8145472245aac94b41323cd238ab9ab5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8145472245aac94b41323cd238ab9ab5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8145472245aac94b41323cd238ab9ab5) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_machineid);
        tmp_compexpr_left_1 = par_machineid;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__id128);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__id128);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10144 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 387;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_8145472245aac94b41323cd238ab9ab5->m_frame.f_lineno = 387;
        tmp_expression_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_get_machine);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_hex);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_machineid;
            assert(old != NULL);
            par_machineid = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_machineid);
        tmp_getattr_target_1 = par_machineid;
        tmp_getattr_attr_1 = const_str_plain_hex;
        CHECK_OBJECT(par_machineid);
        tmp_getattr_default_1 = par_machineid;
        tmp_assign_source_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_machineid;
            assert(old != NULL);
            par_machineid = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_end_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_add_match);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain__MACHINE_ID;
        CHECK_OBJECT(par_machineid);
        tmp_dict_value_1 = par_machineid;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_8145472245aac94b41323cd238ab9ab5->m_frame.f_lineno = 390;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8145472245aac94b41323cd238ab9ab5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8145472245aac94b41323cd238ab9ab5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8145472245aac94b41323cd238ab9ab5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8145472245aac94b41323cd238ab9ab5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8145472245aac94b41323cd238ab9ab5, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8145472245aac94b41323cd238ab9ab5,
        type_description_1,
        par_self,
        par_machineid
    );


    // Release cached frame.
    if (frame_8145472245aac94b41323cd238ab9ab5 == cache_frame_8145472245aac94b41323cd238ab9ab5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_8145472245aac94b41323cd238ab9ab5);
    }
    cache_frame_8145472245aac94b41323cd238ab9ab5 = NULL;

    assertFrameObject(frame_8145472245aac94b41323cd238ab9ab5);

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
    CHECK_OBJECT(par_machineid);
    Py_DECREF(par_machineid);
    par_machineid = NULL;

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

    Py_XDECREF(par_machineid);
    par_machineid = NULL;

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


static PyObject *impl_systemd$journal$$$function_24_get_catalog(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mid = python_pars[0];
    struct Nuitka_FrameObject *frame_b42f9903601f89f9db0cef1f3275259d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b42f9903601f89f9db0cef1f3275259d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b42f9903601f89f9db0cef1f3275259d)) {
        Py_XDECREF(cache_frame_b42f9903601f89f9db0cef1f3275259d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b42f9903601f89f9db0cef1f3275259d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b42f9903601f89f9db0cef1f3275259d = MAKE_FUNCTION_FRAME(codeobj_b42f9903601f89f9db0cef1f3275259d, module_systemd$journal, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b42f9903601f89f9db0cef1f3275259d->m_type_description == NULL);
    frame_b42f9903601f89f9db0cef1f3275259d = cache_frame_b42f9903601f89f9db0cef1f3275259d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b42f9903601f89f9db0cef1f3275259d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b42f9903601f89f9db0cef1f3275259d) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_mid);
        tmp_isinstance_inst_1 = par_mid;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__uuid);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__uuid);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9890 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 398;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_UUID);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "o";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_mid);
        tmp_expression_name_2 = par_mid;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_hex);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_mid;
            assert(old != NULL);
            par_mid = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__get_catalog);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__get_catalog);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10172 ], 34, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 400;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT(par_mid);
        tmp_args_element_name_1 = par_mid;
        frame_b42f9903601f89f9db0cef1f3275259d->m_frame.f_lineno = 400;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b42f9903601f89f9db0cef1f3275259d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b42f9903601f89f9db0cef1f3275259d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b42f9903601f89f9db0cef1f3275259d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b42f9903601f89f9db0cef1f3275259d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b42f9903601f89f9db0cef1f3275259d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b42f9903601f89f9db0cef1f3275259d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b42f9903601f89f9db0cef1f3275259d,
        type_description_1,
        par_mid
    );


    // Release cached frame.
    if (frame_b42f9903601f89f9db0cef1f3275259d == cache_frame_b42f9903601f89f9db0cef1f3275259d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_b42f9903601f89f9db0cef1f3275259d);
    }
    cache_frame_b42f9903601f89f9db0cef1f3275259d = NULL;

    assertFrameObject(frame_b42f9903601f89f9db0cef1f3275259d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_mid);
    Py_DECREF(par_mid);
    par_mid = NULL;

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

    Py_XDECREF(par_mid);
    par_mid = NULL;

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_25__make_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_54f47cd341265d0483cfc75323027ee4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_54f47cd341265d0483cfc75323027ee4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_54f47cd341265d0483cfc75323027ee4)) {
        Py_XDECREF(cache_frame_54f47cd341265d0483cfc75323027ee4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_54f47cd341265d0483cfc75323027ee4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_54f47cd341265d0483cfc75323027ee4 = MAKE_FUNCTION_FRAME(codeobj_54f47cd341265d0483cfc75323027ee4, module_systemd$journal, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_54f47cd341265d0483cfc75323027ee4->m_type_description == NULL);
    frame_54f47cd341265d0483cfc75323027ee4 = cache_frame_54f47cd341265d0483cfc75323027ee4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_54f47cd341265d0483cfc75323027ee4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_54f47cd341265d0483cfc75323027ee4) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oo";
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
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(par_field);
        tmp_called_instance_1 = par_field;
        frame_54f47cd341265d0483cfc75323027ee4->m_frame.f_lineno = 405;
        tmp_left_name_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0));

        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_bytes_chr_61;
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_BYTES(tmp_left_name_2, tmp_right_name_1);
        Py_DECREF(tmp_left_name_2);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_right_name_2 = par_value;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_2 = par_value;
        tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oo";
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
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT(par_field);
        tmp_left_name_4 = par_field;
        tmp_right_name_3 = const_str_chr_61;
        tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_4, tmp_right_name_3);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_right_name_4 = par_value;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_4);
        Py_DECREF(tmp_left_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_field);
        tmp_left_name_6 = par_field;
        tmp_right_name_5 = const_str_chr_61;
        tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_6, tmp_right_name_5);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_unicode_arg_1 = par_value;
        tmp_right_name_6 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_right_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_5);

            exception_lineno = 409;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_6);
        Py_DECREF(tmp_left_name_5);
        Py_DECREF(tmp_right_name_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_54f47cd341265d0483cfc75323027ee4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_54f47cd341265d0483cfc75323027ee4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_54f47cd341265d0483cfc75323027ee4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_54f47cd341265d0483cfc75323027ee4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_54f47cd341265d0483cfc75323027ee4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_54f47cd341265d0483cfc75323027ee4, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_54f47cd341265d0483cfc75323027ee4,
        type_description_1,
        par_field,
        par_value
    );


    // Release cached frame.
    if (frame_54f47cd341265d0483cfc75323027ee4 == cache_frame_54f47cd341265d0483cfc75323027ee4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_54f47cd341265d0483cfc75323027ee4);
    }
    cache_frame_54f47cd341265d0483cfc75323027ee4 = NULL;

    assertFrameObject(frame_54f47cd341265d0483cfc75323027ee4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_26_send(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_MESSAGE = python_pars[0];
    PyObject *par_MESSAGE_ID = python_pars[1];
    PyObject *par_CODE_FILE = python_pars[2];
    PyObject *par_CODE_LINE = python_pars[3];
    PyObject *par_CODE_FUNC = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    PyObject *var_args = NULL;
    PyObject *var_id = NULL;
    nuitka_bool tmp_comparison_chain_1__comparison_result = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_1__operand_3 = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1556a63eec110acb74f38293cd424efa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1556a63eec110acb74f38293cd424efa = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1556a63eec110acb74f38293cd424efa)) {
        Py_XDECREF(cache_frame_1556a63eec110acb74f38293cd424efa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1556a63eec110acb74f38293cd424efa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1556a63eec110acb74f38293cd424efa = MAKE_FUNCTION_FRAME(codeobj_1556a63eec110acb74f38293cd424efa, module_systemd$journal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1556a63eec110acb74f38293cd424efa->m_type_description == NULL);
    frame_1556a63eec110acb74f38293cd424efa = cache_frame_1556a63eec110acb74f38293cd424efa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1556a63eec110acb74f38293cd424efa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1556a63eec110acb74f38293cd424efa) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_str_digest_6a0fbab1ba397fb45012e49e87c8071d;
        CHECK_OBJECT(par_MESSAGE);
        tmp_right_name_1 = par_MESSAGE;
        tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = PyList_New(1);
        PyList_SET_ITEM(tmp_assign_source_1, 0, tmp_list_element_1);
        assert(var_args == NULL);
        var_args = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_MESSAGE_ID);
        tmp_compexpr_left_1 = par_MESSAGE_ID;
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_MESSAGE_ID);
        tmp_getattr_target_1 = par_MESSAGE_ID;
        tmp_getattr_attr_1 = const_str_plain_hex;
        CHECK_OBJECT(par_MESSAGE_ID);
        tmp_getattr_default_1 = par_MESSAGE_ID;
        tmp_assign_source_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_id == NULL);
        var_id = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(var_args);
        tmp_expression_name_1 = var_args;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_append);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = const_str_digest_bc3c83f08cf26707f1c5bfa34c5897ed;
        CHECK_OBJECT(var_id);
        tmp_right_name_2 = var_id;
        tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 445;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_1556a63eec110acb74f38293cd424efa->m_frame.f_lineno = 445;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_outline_return_value_1;
        int tmp_truth_name_1;
        {
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(par_CODE_FILE);
            tmp_assign_source_3 = par_CODE_FILE;
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            Py_INCREF(tmp_assign_source_3);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_3;
        }
        {
            nuitka_bool tmp_assign_source_4;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(par_CODE_LINE);
            tmp_compexpr_left_2 = par_CODE_LINE;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_right_2 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_4 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_4;
        }
        // Tried code:
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            assert(tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
            tmp_operand_name_1 = (tmp_comparison_chain_1__comparison_result == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 447;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        assert(tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
        tmp_outline_return_value_1 = (tmp_comparison_chain_1__comparison_result == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        Py_INCREF(tmp_outline_return_value_1);
        goto try_return_handler_2;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(par_CODE_FUNC);
            tmp_assign_source_5 = par_CODE_FUNC;
            assert(tmp_comparison_chain_1__operand_3 == NULL);
            Py_INCREF(tmp_assign_source_5);
            tmp_comparison_chain_1__operand_3 = tmp_assign_source_5;
        }
        {
            nuitka_bool tmp_assign_source_6;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_left_3 = tmp_comparison_chain_1__operand_2;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_3);
            tmp_compexpr_right_3 = tmp_comparison_chain_1__operand_3;
            tmp_assign_source_6 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_6;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_2;
            assert(tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
            tmp_operand_name_2 = (tmp_comparison_chain_1__comparison_result == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 447;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        assert(tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
        tmp_outline_return_value_1 = (tmp_comparison_chain_1__comparison_result == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        Py_INCREF(tmp_outline_return_value_1);
        goto try_return_handler_2;
        branch_no_4:;
        {
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_3);
            tmp_compexpr_left_4 = tmp_comparison_chain_1__operand_3;
            tmp_compexpr_right_4 = Py_None;
            tmp_outline_return_value_1 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? Py_True : Py_False;
            Py_INCREF(tmp_outline_return_value_1);
            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;

        Py_XDECREF(tmp_comparison_chain_1__operand_3);
        tmp_comparison_chain_1__operand_3 = NULL;

        goto outline_result_1;
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

        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;

        Py_XDECREF(tmp_comparison_chain_1__operand_3);
        tmp_comparison_chain_1__operand_3 = NULL;

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
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_outline_return_value_1);

            exception_lineno = 447;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_outline_return_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__traceback);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__traceback);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10206 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 448;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_4 = tmp_mvar_value_1;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain_extract_stack);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_kw_name_1 = PyDict_Copy(const_dict_83aae1e6258c89f0a2f16fbc1b54323c);
        frame_1556a63eec110acb74f38293cd424efa->m_frame.f_lineno = 448;
        tmp_expression_name_3 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_expression_name_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_name_2 = const_slice_none_int_pos_3_none;
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
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
            exception_lineno = 448;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
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
            exception_lineno = 448;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 448;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_10;
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
                    exception_lineno = 448;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = const_str_digest_09d63a5a61044765cbef1a09e46446f1;
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 448;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_CODE_FILE;
            assert(old != NULL);
            par_CODE_FILE = tmp_assign_source_11;
            Py_INCREF(par_CODE_FILE);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_CODE_LINE;
            assert(old != NULL);
            par_CODE_LINE = tmp_assign_source_12;
            Py_INCREF(par_CODE_LINE);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_CODE_FUNC;
            assert(old != NULL);
            par_CODE_FUNC = tmp_assign_source_13;
            Py_INCREF(par_CODE_FUNC);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(par_CODE_FILE);
        tmp_compexpr_left_5 = par_CODE_FILE;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_5 = (tmp_compexpr_left_5 != tmp_compexpr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT(var_args);
        tmp_expression_name_5 = var_args;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain_append);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = const_str_digest_5f7e8857f68fdabf4be40762b214277a;
        CHECK_OBJECT(par_CODE_FILE);
        tmp_right_name_3 = par_CODE_FILE;
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_3);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 450;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_1556a63eec110acb74f38293cd424efa->m_frame.f_lineno = 450;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT(par_CODE_LINE);
        tmp_compexpr_left_6 = par_CODE_LINE;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_6 = (tmp_compexpr_left_6 != tmp_compexpr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(var_args);
        tmp_expression_name_6 = var_args;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain_append);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = const_str_digest_5ac9fa6c1900185f7492bdc201333f71;
        CHECK_OBJECT(par_CODE_LINE);
        tmp_args_element_name_4 = par_CODE_LINE;
        frame_1556a63eec110acb74f38293cd424efa->m_frame.f_lineno = 452;
        {
            PyObject *call_args[] = {tmp_args_element_name_4};
            tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_format, call_args);
        }

        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 452;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_1556a63eec110acb74f38293cd424efa->m_frame.f_lineno = 452;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT(par_CODE_FUNC);
        tmp_compexpr_left_7 = par_CODE_FUNC;
        tmp_compexpr_right_7 = Py_None;
        tmp_condition_result_7 = (tmp_compexpr_left_7 != tmp_compexpr_right_7) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT(var_args);
        tmp_expression_name_7 = var_args;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain_append);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = const_str_digest_5cf7359cf4084859ed6c25fb6aaf8f72;
        CHECK_OBJECT(par_CODE_FUNC);
        tmp_right_name_4 = par_CODE_FUNC;
        tmp_args_element_name_5 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_4, tmp_right_name_4);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 454;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_1556a63eec110acb74f38293cd424efa->m_frame.f_lineno = 454;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_7:;
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(var_args);
        tmp_expression_name_8 = var_args;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain_extend);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT(par_kwargs);
            tmp_called_instance_2 = par_kwargs;
            frame_1556a63eec110acb74f38293cd424efa->m_frame.f_lineno = 456;
            tmp_iter_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_items);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_14 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_14;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_args_element_name_6 = MAKE_GENERATOR_systemd$journal$$$function_26_send$$$genexpr_1_genexpr(tmp_closure_1);

            goto try_return_handler_5;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;

        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        frame_1556a63eec110acb74f38293cd424efa->m_frame.f_lineno = 456;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dircall_arg2_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_sendv);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sendv);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10238 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 457;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_2;
        CHECK_OBJECT(var_args);
        tmp_dircall_arg2_1 = var_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___internal__$$$function_2_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1556a63eec110acb74f38293cd424efa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1556a63eec110acb74f38293cd424efa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1556a63eec110acb74f38293cd424efa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1556a63eec110acb74f38293cd424efa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1556a63eec110acb74f38293cd424efa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1556a63eec110acb74f38293cd424efa, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1556a63eec110acb74f38293cd424efa,
        type_description_1,
        par_MESSAGE,
        par_MESSAGE_ID,
        par_CODE_FILE,
        par_CODE_LINE,
        par_CODE_FUNC,
        par_kwargs,
        var_args,
        var_id
    );


    // Release cached frame.
    if (frame_1556a63eec110acb74f38293cd424efa == cache_frame_1556a63eec110acb74f38293cd424efa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_1556a63eec110acb74f38293cd424efa);
    }
    cache_frame_1556a63eec110acb74f38293cd424efa = NULL;

    assertFrameObject(frame_1556a63eec110acb74f38293cd424efa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_CODE_FILE);
    Py_DECREF(par_CODE_FILE);
    par_CODE_FILE = NULL;

    CHECK_OBJECT(par_CODE_LINE);
    Py_DECREF(par_CODE_LINE);
    par_CODE_LINE = NULL;

    CHECK_OBJECT(par_CODE_FUNC);
    Py_DECREF(par_CODE_FUNC);
    par_CODE_FUNC = NULL;

    CHECK_OBJECT(var_args);
    Py_DECREF(var_args);
    var_args = NULL;

    Py_XDECREF(var_id);
    var_id = NULL;

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

    Py_XDECREF(par_CODE_FILE);
    par_CODE_FILE = NULL;

    Py_XDECREF(par_CODE_LINE);
    par_CODE_LINE = NULL;

    Py_XDECREF(par_CODE_FUNC);
    par_CODE_FUNC = NULL;

    Py_XDECREF(var_args);
    var_args = NULL;

    Py_XDECREF(var_id);
    var_id = NULL;

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
    CHECK_OBJECT(par_MESSAGE);
    Py_DECREF(par_MESSAGE);
    CHECK_OBJECT(par_MESSAGE_ID);
    Py_DECREF(par_MESSAGE_ID);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_MESSAGE);
    Py_DECREF(par_MESSAGE);
    CHECK_OBJECT(par_MESSAGE_ID);
    Py_DECREF(par_MESSAGE_ID);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct systemd$journal$$$function_26_send$$$genexpr_1_genexpr_locals {
    PyObject *var_key;
    PyObject *var_val;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *systemd$journal$$$function_26_send$$$genexpr_1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct systemd$journal$$$function_26_send$$$genexpr_1_genexpr_locals *generator_heap = (struct systemd$journal$$$function_26_send$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_key = NULL;
    generator_heap->var_val = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_9b2aa8eee207cc741290181824cdce92, module_systemd$journal, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noo";
                generator_heap->exception_lineno = 456;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 456;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 456;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 456;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "Noo";
                    generator_heap->exception_lineno = 456;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = const_str_digest_fcf040720b88d60da4ce975010c44a3a;
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 456;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_key;
            generator_heap->var_key = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_val;
            generator_heap->var_val = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_val);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__make_line);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__make_line);
        }

        if (tmp_mvar_value_1 == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 10112 ], 32, 0);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 456;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(generator_heap->var_key);
        tmp_args_element_name_1 = generator_heap->var_key;
        CHECK_OBJECT(generator_heap->var_val);
        tmp_args_element_name_2 = generator_heap->var_val;
        generator->m_frame->m_frame.f_lineno = 456;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 456;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 456;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 456;
        generator_heap->type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

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
            NULL,
            generator_heap->var_key,
            generator_heap->var_val
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
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_key);
    generator_heap->var_key = NULL;

    Py_XDECREF(generator_heap->var_val);
    generator_heap->var_val = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF(generator_heap->var_key);
    generator_heap->var_key = NULL;

    Py_XDECREF(generator_heap->var_val);
    generator_heap->var_val = NULL;



    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_systemd$journal$$$function_26_send$$$genexpr_1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        systemd$journal$$$function_26_send$$$genexpr_1_genexpr_context,
        module_systemd$journal,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_f05e55802dd9ab1c09e4aff8f146be51,
#endif
        codeobj_9b2aa8eee207cc741290181824cdce92,
        closure,
        1,
        sizeof(struct systemd$journal$$$function_26_send$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_systemd$journal$$$function_27_stream(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_identifier = python_pars[0];
    PyObject *par_priority = python_pars[1];
    PyObject *par_level_prefix = python_pars[2];
    PyObject *var_fd = NULL;
    struct Nuitka_FrameObject *frame_0c4148fe4b844826e05a5094ebab068a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0c4148fe4b844826e05a5094ebab068a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0c4148fe4b844826e05a5094ebab068a)) {
        Py_XDECREF(cache_frame_0c4148fe4b844826e05a5094ebab068a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0c4148fe4b844826e05a5094ebab068a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0c4148fe4b844826e05a5094ebab068a = MAKE_FUNCTION_FRAME(codeobj_0c4148fe4b844826e05a5094ebab068a, module_systemd$journal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0c4148fe4b844826e05a5094ebab068a->m_type_description == NULL);
    frame_0c4148fe4b844826e05a5094ebab068a = cache_frame_0c4148fe4b844826e05a5094ebab068a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0c4148fe4b844826e05a5094ebab068a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0c4148fe4b844826e05a5094ebab068a) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_identifier);
        tmp_compexpr_left_1 = par_identifier;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_tmp_or_right_value_2_object_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__sys);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__sys);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10015 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 495;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_1;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_argv);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__sys);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__sys);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10015 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 495;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = tmp_mvar_value_2;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_argv);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_operand_name_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__sys);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__sys);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10015 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 495;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = tmp_mvar_value_3;
        tmp_expression_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain_argv);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_4, tmp_subscript_name_2, 0);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_str_digest_8b4c8c81913e132a2fb432c041f3150f;
        tmp_tmp_or_right_value_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_tmp_or_right_value_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_or_right_value_2_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_right_value_2_object_1);

            exception_lineno = 495;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_or_right_value_2_object_1);
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_plain_python;
        {
            PyObject *old = par_identifier;
            assert(old != NULL);
            par_identifier = tmp_assign_source_1;
            Py_INCREF(par_identifier);
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_subscript_name_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__sys);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__sys);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10015 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 498;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = tmp_mvar_value_4;
        tmp_expression_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain_argv);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_0;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_3, 0);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_identifier;
            assert(old != NULL);
            par_identifier = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_end_2:;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_stream_fd);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_stream_fd);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10265 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 500;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_5;
        if (par_identifier == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "identifier");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 500;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = par_identifier;
        CHECK_OBJECT(par_priority);
        tmp_args_element_name_2 = par_priority;
        CHECK_OBJECT(par_level_prefix);
        tmp_args_element_name_3 = par_level_prefix;
        frame_0c4148fe4b844826e05a5094ebab068a->m_frame.f_lineno = 500;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_fd == NULL);
        var_fd = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__os);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__os);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10296 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 501;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_6;
        CHECK_OBJECT(var_fd);
        tmp_args_element_name_4 = var_fd;
        tmp_args_element_name_5 = const_str_plain_w;
        tmp_args_element_name_6 = const_int_pos_1;
        frame_0c4148fe4b844826e05a5094ebab068a->m_frame.f_lineno = 501;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(tmp_called_instance_1, const_str_plain_fdopen, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0c4148fe4b844826e05a5094ebab068a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0c4148fe4b844826e05a5094ebab068a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0c4148fe4b844826e05a5094ebab068a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0c4148fe4b844826e05a5094ebab068a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0c4148fe4b844826e05a5094ebab068a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0c4148fe4b844826e05a5094ebab068a, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0c4148fe4b844826e05a5094ebab068a,
        type_description_1,
        par_identifier,
        par_priority,
        par_level_prefix,
        var_fd
    );


    // Release cached frame.
    if (frame_0c4148fe4b844826e05a5094ebab068a == cache_frame_0c4148fe4b844826e05a5094ebab068a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_0c4148fe4b844826e05a5094ebab068a);
    }
    cache_frame_0c4148fe4b844826e05a5094ebab068a = NULL;

    assertFrameObject(frame_0c4148fe4b844826e05a5094ebab068a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_identifier);
    par_identifier = NULL;

    CHECK_OBJECT(var_fd);
    Py_DECREF(var_fd);
    var_fd = NULL;

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

    Py_XDECREF(par_identifier);
    par_identifier = NULL;

    Py_XDECREF(var_fd);
    var_fd = NULL;

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
    CHECK_OBJECT(par_priority);
    Py_DECREF(par_priority);
    CHECK_OBJECT(par_level_prefix);
    Py_DECREF(par_level_prefix);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_priority);
    Py_DECREF(par_priority);
    CHECK_OBJECT(par_level_prefix);
    Py_DECREF(par_level_prefix);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_28___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_level = python_pars[1];
    PyObject *par_sender_function = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    PyObject *var_name = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_73f8e93b142482edce1ea1d4b67c6b2f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_73f8e93b142482edce1ea1d4b67c6b2f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_73f8e93b142482edce1ea1d4b67c6b2f)) {
        Py_XDECREF(cache_frame_73f8e93b142482edce1ea1d4b67c6b2f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_73f8e93b142482edce1ea1d4b67c6b2f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_73f8e93b142482edce1ea1d4b67c6b2f = MAKE_FUNCTION_FRAME(codeobj_73f8e93b142482edce1ea1d4b67c6b2f, module_systemd$journal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_73f8e93b142482edce1ea1d4b67c6b2f->m_type_description == NULL);
    frame_73f8e93b142482edce1ea1d4b67c6b2f = cache_frame_73f8e93b142482edce1ea1d4b67c6b2f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_73f8e93b142482edce1ea1d4b67c6b2f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_73f8e93b142482edce1ea1d4b67c6b2f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_JournalHandler);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_JournalHandler);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10321 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 557;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_level);
        tmp_args_element_name_1 = par_level;
        frame_73f8e93b142482edce1ea1d4b67c6b2f->m_frame.f_lineno = 557;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain___init__, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
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


            exception_lineno = 559;
            type_description_1 = "oooooN";
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
                type_description_1 = "oooooN";
                exception_lineno = 559;
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
            PyObject *old = var_name;
            var_name = tmp_assign_source_3;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__valid_field_name);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__valid_field_name);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10357 ], 39, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 560;
            type_description_1 = "oooooN";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT(var_name);
        tmp_args_element_name_2 = var_name;
        frame_73f8e93b142482edce1ea1d4b67c6b2f->m_frame.f_lineno = 560;
        tmp_operand_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "oooooN";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "oooooN";
            goto try_except_handler_2;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_str_digest_42832435507ed9362d31d070f6314f56;
        CHECK_OBJECT(var_name);
        tmp_right_name_1 = var_name;
        tmp_make_exception_arg_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "oooooN";
            goto try_except_handler_2;
        }
        frame_73f8e93b142482edce1ea1d4b67c6b2f->m_frame.f_lineno = 561;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 561;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooN";
        goto try_except_handler_2;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 559;
        type_description_1 = "oooooN";
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
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = const_str_plain_SYSLOG_IDENTIFIER;
        CHECK_OBJECT(par_kwargs);
        tmp_compexpr_right_1 = par_kwargs;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__sys);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__sys);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10015 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 563;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_3;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_argv);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_ass_subscribed_1 = par_kwargs;
        tmp_ass_subscript_1 = const_str_plain_SYSLOG_IDENTIFIER;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_sender_function);
        tmp_assattr_name_1 = par_sender_function;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_send, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_kwargs);
        tmp_assattr_name_2 = par_kwargs;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__extra, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_73f8e93b142482edce1ea1d4b67c6b2f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_73f8e93b142482edce1ea1d4b67c6b2f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_73f8e93b142482edce1ea1d4b67c6b2f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_73f8e93b142482edce1ea1d4b67c6b2f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_73f8e93b142482edce1ea1d4b67c6b2f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_73f8e93b142482edce1ea1d4b67c6b2f,
        type_description_1,
        par_self,
        par_level,
        par_sender_function,
        par_kwargs,
        var_name,
        NULL
    );


    // Release cached frame.
    if (frame_73f8e93b142482edce1ea1d4b67c6b2f == cache_frame_73f8e93b142482edce1ea1d4b67c6b2f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_73f8e93b142482edce1ea1d4b67c6b2f);
    }
    cache_frame_73f8e93b142482edce1ea1d4b67c6b2f = NULL;

    assertFrameObject(frame_73f8e93b142482edce1ea1d4b67c6b2f);

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
    Py_XDECREF(var_name);
    var_name = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_name);
    var_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_level);
    Py_DECREF(par_level);
    CHECK_OBJECT(par_sender_function);
    Py_DECREF(par_sender_function);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_level);
    Py_DECREF(par_level);
    CHECK_OBJECT(par_sender_function);
    Py_DECREF(par_sender_function);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_29_emit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_record = python_pars[1];
    PyObject *var_msg = NULL;
    PyObject *var_pri = NULL;
    PyObject *var_extras = NULL;
    struct Nuitka_FrameObject *frame_4f3f02feb3e42938d954d85696cf76ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    static struct Nuitka_FrameObject *cache_frame_4f3f02feb3e42938d954d85696cf76ca = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4f3f02feb3e42938d954d85696cf76ca)) {
        Py_XDECREF(cache_frame_4f3f02feb3e42938d954d85696cf76ca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f3f02feb3e42938d954d85696cf76ca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f3f02feb3e42938d954d85696cf76ca = MAKE_FUNCTION_FRAME(codeobj_4f3f02feb3e42938d954d85696cf76ca, module_systemd$journal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4f3f02feb3e42938d954d85696cf76ca->m_type_description == NULL);
    frame_4f3f02feb3e42938d954d85696cf76ca = cache_frame_4f3f02feb3e42938d954d85696cf76ca;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4f3f02feb3e42938d954d85696cf76ca);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4f3f02feb3e42938d954d85696cf76ca) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_record);
        tmp_args_element_name_1 = par_record;
        frame_4f3f02feb3e42938d954d85696cf76ca->m_frame.f_lineno = 576;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_format, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_map_priority);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_record);
        tmp_expression_name_2 = par_record;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_levelno);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 577;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_4f3f02feb3e42938d954d85696cf76ca->m_frame.f_lineno = 577;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_pri == NULL);
        var_pri = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain__extra);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_4f3f02feb3e42938d954d85696cf76ca->m_frame.f_lineno = 579;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_copy);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_extras == NULL);
        var_extras = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_record);
        tmp_expression_name_4 = par_record;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain_exc_text);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 582;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_record);
        tmp_expression_name_5 = par_record;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain_exc_text);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_extras);
        tmp_ass_subscribed_1 = var_extras;
        tmp_ass_subscript_1 = const_str_plain_EXCEPTION_TEXT;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_record);
        tmp_expression_name_6 = par_record;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain_exc_info);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 585;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_record);
        tmp_expression_name_7 = par_record;
        tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain_exc_info);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_extras);
        tmp_ass_subscribed_2 = var_extras;
        tmp_ass_subscript_2 = const_str_plain_EXCEPTION_INFO;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_record);
        tmp_expression_name_8 = par_record;
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain_args);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 588;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(par_record);
        tmp_expression_name_9 = par_record;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, const_str_plain_args);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_ass_subvalue_3 = PyObject_Unicode(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_extras);
        tmp_ass_subscribed_3 = var_extras;
        tmp_ass_subscript_3 = const_str_plain_CODE_ARGS;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_3:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_11;
        CHECK_OBJECT(var_extras);
        tmp_expression_name_10 = var_extras;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, const_str_plain_update);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_record);
        tmp_expression_name_11 = par_record;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_name_11);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 592;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_4f3f02feb3e42938d954d85696cf76ca->m_frame.f_lineno = 592;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_12 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, const_str_plain_send);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_msg);
        tmp_tuple_element_1 = var_msg;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = const_str_plain_PRIORITY;
        CHECK_OBJECT(var_pri);
        tmp_format_value_1 = var_pri;
        tmp_format_spec_1 = const_str_empty;
        tmp_dict_value_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 595;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_LOGGER;
        CHECK_OBJECT(par_record);
        tmp_expression_name_13 = par_record;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, const_str_plain_name);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_dircall_arg3_1);

            exception_lineno = 596;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_THREAD_NAME;
        CHECK_OBJECT(par_record);
        tmp_expression_name_14 = par_record;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, const_str_plain_threadName);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_dircall_arg3_1);

            exception_lineno = 597;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_PROCESS_NAME;
        CHECK_OBJECT(par_record);
        tmp_expression_name_15 = par_record;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, const_str_plain_processName);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_dircall_arg3_1);

            exception_lineno = 598;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_CODE_FILE;
        CHECK_OBJECT(par_record);
        tmp_expression_name_16 = par_record;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, const_str_plain_pathname);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_dircall_arg3_1);

            exception_lineno = 599;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = const_str_plain_CODE_LINE;
        CHECK_OBJECT(par_record);
        tmp_expression_name_17 = par_record;
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, const_str_plain_lineno);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_dircall_arg3_1);

            exception_lineno = 600;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = const_str_plain_CODE_FUNC;
        CHECK_OBJECT(par_record);
        tmp_expression_name_18 = par_record;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, const_str_plain_funcName);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_dircall_arg3_1);

            exception_lineno = 601;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_extras);
        tmp_dircall_arg4_1 = var_extras;
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_call_result_2 = impl___internal__$$$function_4_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_4f3f02feb3e42938d954d85696cf76ca, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_4f3f02feb3e42938d954d85696cf76ca, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 603;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(par_record);
        tmp_args_element_name_4 = par_record;
        frame_4f3f02feb3e42938d954d85696cf76ca->m_frame.f_lineno = 604;
        {
            PyObject *call_args[] = {tmp_args_element_name_4};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_handleError, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 575;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4f3f02feb3e42938d954d85696cf76ca->m_frame) frame_4f3f02feb3e42938d954d85696cf76ca->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_3;
    branch_end_4:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4f3f02feb3e42938d954d85696cf76ca);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4f3f02feb3e42938d954d85696cf76ca);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4f3f02feb3e42938d954d85696cf76ca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f3f02feb3e42938d954d85696cf76ca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f3f02feb3e42938d954d85696cf76ca, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f3f02feb3e42938d954d85696cf76ca,
        type_description_1,
        par_self,
        par_record,
        var_msg,
        var_pri,
        var_extras
    );


    // Release cached frame.
    if (frame_4f3f02feb3e42938d954d85696cf76ca == cache_frame_4f3f02feb3e42938d954d85696cf76ca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_4f3f02feb3e42938d954d85696cf76ca);
    }
    cache_frame_4f3f02feb3e42938d954d85696cf76ca = NULL;

    assertFrameObject(frame_4f3f02feb3e42938d954d85696cf76ca);

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
    Py_XDECREF(var_msg);
    var_msg = NULL;

    Py_XDECREF(var_pri);
    var_pri = NULL;

    Py_XDECREF(var_extras);
    var_extras = NULL;

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

    Py_XDECREF(var_msg);
    var_msg = NULL;

    Py_XDECREF(var_pri);
    var_pri = NULL;

    Py_XDECREF(var_extras);
    var_extras = NULL;

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
    CHECK_OBJECT(par_record);
    Py_DECREF(par_record);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_record);
    Py_DECREF(par_record);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_systemd$journal$$$function_30_map_priority(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_levelno = python_pars[0];
    struct Nuitka_FrameObject *frame_9bfe4db5535fd72dd13e4b8be6a95a1b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9bfe4db5535fd72dd13e4b8be6a95a1b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9bfe4db5535fd72dd13e4b8be6a95a1b)) {
        Py_XDECREF(cache_frame_9bfe4db5535fd72dd13e4b8be6a95a1b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9bfe4db5535fd72dd13e4b8be6a95a1b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9bfe4db5535fd72dd13e4b8be6a95a1b = MAKE_FUNCTION_FRAME(codeobj_9bfe4db5535fd72dd13e4b8be6a95a1b, module_systemd$journal, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9bfe4db5535fd72dd13e4b8be6a95a1b->m_type_description == NULL);
    frame_9bfe4db5535fd72dd13e4b8be6a95a1b = cache_frame_9bfe4db5535fd72dd13e4b8be6a95a1b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9bfe4db5535fd72dd13e4b8be6a95a1b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9bfe4db5535fd72dd13e4b8be6a95a1b) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_levelno);
        tmp_compexpr_left_1 = par_levelno;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__logging);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__logging);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10396 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 613;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_DEBUG);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_1 = "o";
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
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_LOG_DEBUG);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOG_DEBUG);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10426 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 614;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_return_value = tmp_mvar_value_2;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT(par_levelno);
        tmp_compexpr_left_2 = par_levelno;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__logging);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__logging);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10396 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 615;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_3;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_INFO);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;
            type_description_1 = "o";
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
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_LOG_INFO);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOG_INFO);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10457 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 616;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_return_value = tmp_mvar_value_4;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_mvar_value_5;
        CHECK_OBJECT(par_levelno);
        tmp_compexpr_left_3 = par_levelno;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__logging);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__logging);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10396 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 617;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = tmp_mvar_value_5;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_WARNING);
        if (tmp_compexpr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_LOG_WARNING);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOG_WARNING);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10487 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 618;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_return_value = tmp_mvar_value_6;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_mvar_value_7;
        CHECK_OBJECT(par_levelno);
        tmp_compexpr_left_4 = par_levelno;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__logging);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__logging);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10396 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 619;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = tmp_mvar_value_7;
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain_ERROR);
        if (tmp_compexpr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 619;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 619;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_LOG_ERR);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOG_ERR);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10520 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 620;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_return_value = tmp_mvar_value_8;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_mvar_value_9;
        CHECK_OBJECT(par_levelno);
        tmp_compexpr_left_5 = par_levelno;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__logging);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__logging);
        }

        if (tmp_mvar_value_9 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10396 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 621;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = tmp_mvar_value_9;
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain_CRITICAL);
        if (tmp_compexpr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 621;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 621;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_LOG_CRIT);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOG_CRIT);
        }

        if (tmp_mvar_value_10 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10549 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 622;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_return_value = tmp_mvar_value_10;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_LOG_ALERT);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOG_ALERT);
        }

        if (tmp_mvar_value_11 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10579 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 624;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_return_value = tmp_mvar_value_11;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9bfe4db5535fd72dd13e4b8be6a95a1b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9bfe4db5535fd72dd13e4b8be6a95a1b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9bfe4db5535fd72dd13e4b8be6a95a1b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9bfe4db5535fd72dd13e4b8be6a95a1b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9bfe4db5535fd72dd13e4b8be6a95a1b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9bfe4db5535fd72dd13e4b8be6a95a1b, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9bfe4db5535fd72dd13e4b8be6a95a1b,
        type_description_1,
        par_levelno
    );


    // Release cached frame.
    if (frame_9bfe4db5535fd72dd13e4b8be6a95a1b == cache_frame_9bfe4db5535fd72dd13e4b8be6a95a1b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_9bfe4db5535fd72dd13e4b8be6a95a1b);
    }
    cache_frame_9bfe4db5535fd72dd13e4b8be6a95a1b = NULL;

    assertFrameObject(frame_9bfe4db5535fd72dd13e4b8be6a95a1b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_levelno);
    Py_DECREF(par_levelno);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_levelno);
    Py_DECREF(par_levelno);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_10__convert_entry() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_10__convert_entry,
        const_str_plain__convert_entry,
#if PYTHON_VERSION >= 300
        const_str_digest_e7aee1712a87065820dfdb862cbba591,
#endif
        codeobj_00390665543bc9144c1045c88e7ad734,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_3f4833ec1dfea57c4538bcb752439808,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_11___iter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_11___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 300
        const_str_digest_e095dc2ef6675a4d311fe55baf6f298a,
#endif
        codeobj_9e72e52c097cf20a1fd160f081121d3a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_315d5240eb0b0faa3cfa0874c0f0d861,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_12___next__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_12___next__,
        const_str_plain___next__,
#if PYTHON_VERSION >= 300
        const_str_digest_4ed08209ad5320e7c4e89a1b746a5899,
#endif
        codeobj_bf6bd6a09433e4392b4e0337ca89e4b6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_577fd6e9bddfedcbbde6041a8581bf0a,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_13_add_match() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_13_add_match,
        const_str_plain_add_match,
#if PYTHON_VERSION >= 300
        const_str_digest_8031fc2f10e44a864c4e0c40a80e6af4,
#endif
        codeobj_1cfd7ffe5ecf0b7833dba5e62d906f5e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_4907563c396602c16f95e1ad129f7638,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_14_get_next(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_14_get_next,
        const_str_plain_get_next,
#if PYTHON_VERSION >= 300
        const_str_digest_7e04a95681e0be7ecf733adeaffd90cc,
#endif
        codeobj_fbd65cd85c507de4dd9af30c7e7da31b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_4c89bbac7f3714b7cbb830562f48f26e,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_15_get_previous(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_15_get_previous,
        const_str_plain_get_previous,
#if PYTHON_VERSION >= 300
        const_str_digest_c9198050bf7f98bfc630bb56840f7994,
#endif
        codeobj_ce3ddfe598132b5a852073e168b44b05,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_98cbf32d810591fc9ca3271e790fa9ab,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_16_query_unique() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_16_query_unique,
        const_str_plain_query_unique,
#if PYTHON_VERSION >= 300
        const_str_digest_55060ab7359071f051a877504aeb95c2,
#endif
        codeobj_8056e510988e3a3d379226232700573b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_01ca262ea6fbc6568838440e24839143,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_17_wait(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_17_wait,
        const_str_plain_wait,
#if PYTHON_VERSION >= 300
        const_str_digest_7c225fcacae7c67d5a4a1f2f3b6dea03,
#endif
        codeobj_862dccd64e45a370b559bcd5fcc78300,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_1aa4617e7e8300091e0a4d919384056f,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_18_seek_realtime() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_18_seek_realtime,
        const_str_plain_seek_realtime,
#if PYTHON_VERSION >= 300
        const_str_digest_5f2cc55bec6a0e0c83461cd1c4197a6e,
#endif
        codeobj_6b94684d53f2cd7c09ca0f256ee51ebf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_39542a61c09c6d6387afa1bf5916f1aa,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_19_seek_monotonic(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_19_seek_monotonic,
        const_str_plain_seek_monotonic,
#if PYTHON_VERSION >= 300
        const_str_digest_6fb2981bbe8e2b68cc3103ac5e293911,
#endif
        codeobj_5804d4da4fa0ddeb195c03a018070005,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_84805c5d0c36c4895495c9c02fc3aaba,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_1__convert_monotonic() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_1__convert_monotonic,
        const_str_plain__convert_monotonic,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ed6c1a88a285ef83445327f4ef961c3b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_20_log_level() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_20_log_level,
        const_str_plain_log_level,
#if PYTHON_VERSION >= 300
        const_str_digest_b5f31d15ba97aa770958542e16c473bd,
#endif
        codeobj_dccb6888200845ced40ec83a78270deb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_9817c04eae2bbb567185cfa0c0fdb8a1,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_21_messageid_match() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_21_messageid_match,
        const_str_plain_messageid_match,
#if PYTHON_VERSION >= 300
        const_str_digest_58bf094e9c8d5e9cd91e0d96cc6d7464,
#endif
        codeobj_7ee5e529fbed3cce6c82724654ec0f89,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_77b5256aa381bc96240e908e295a480f,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_22_this_boot(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_22_this_boot,
        const_str_plain_this_boot,
#if PYTHON_VERSION >= 300
        const_str_digest_e40d1083a9fb62d463ef20159b6e6bd4,
#endif
        codeobj_cf49912354663723424b645868386141,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_acdc5dad05f90ed5b715c44a938bc5e6,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_23_this_machine(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_23_this_machine,
        const_str_plain_this_machine,
#if PYTHON_VERSION >= 300
        const_str_digest_7724d34893b1c2ab6fb285d1595bf355,
#endif
        codeobj_8145472245aac94b41323cd238ab9ab5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_b3aeeb166cc56a6f6c1a30aee9653c69,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_24_get_catalog() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_24_get_catalog,
        const_str_plain_get_catalog,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b42f9903601f89f9db0cef1f3275259d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_8014bd0a47eec9435fe2060a99b8b3e7,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_25__make_line() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_25__make_line,
        const_str_plain__make_line,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_54f47cd341265d0483cfc75323027ee4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_26_send(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_26_send,
        const_str_plain_send,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1556a63eec110acb74f38293cd424efa,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_57ddb8f9eb6282d599d538eff210b2da,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_27_stream(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_27_stream,
        const_str_plain_stream,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0c4148fe4b844826e05a5094ebab068a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_10a307e1d3b4f4399ff51cb55c0f5d58,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_28___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_28___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_f437c42b79eeb32fdcf80c42330a37e1,
#endif
        codeobj_73f8e93b142482edce1ea1d4b67c6b2f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_29_emit() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_29_emit,
        const_str_plain_emit,
#if PYTHON_VERSION >= 300
        const_str_digest_29a1eaa37a6e2ddd91147668c3b6987f,
#endif
        codeobj_4f3f02feb3e42938d954d85696cf76ca,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_836465ac46514b08e2d11d1ffbd311af,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_2__convert_source_monotonic() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_2__convert_source_monotonic,
        const_str_plain__convert_source_monotonic,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b940415a346c344ce35f85dc7ac3efa5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_30_map_priority() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_30_map_priority,
        const_str_plain_map_priority,
#if PYTHON_VERSION >= 300
        const_str_digest_ffdb871eb2770cd96cd0f10de05a4adf,
#endif
        codeobj_9bfe4db5535fd72dd13e4b8be6a95a1b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_69b886476f641548fe7f3df6f897d5f8,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_3__convert_realtime() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_3__convert_realtime,
        const_str_plain__convert_realtime,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_29d08e7d0cd6242052ae6523f0bdf5a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_4__convert_timestamp() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_4__convert_timestamp,
        const_str_plain__convert_timestamp,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_94d0215daa0430f96f9ec3bbd8f9148a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_5__convert_trivial() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_5__convert_trivial,
        const_str_plain__convert_trivial,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5b08820223e4551fc7702aab3f07d5e7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_6__convert_uuid() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_6__convert_uuid,
        const_str_plain__convert_uuid,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_692052db0e3ee27f9a47c66c5122e029,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_7__valid_field_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_7__valid_field_name,
        const_str_plain__valid_field_name,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8450915f9d1bc3af4f1eb233dce7a474,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_8___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_4a6adbd3133822985b0246d19784ca26,
#endif
        codeobj_277ec3d484556603896b4a291c7e5e73,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_e6405dabe21ce11388667cf5301e8bbe,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_systemd$journal$$$function_9__convert_field() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_systemd$journal$$$function_9__convert_field,
        const_str_plain__convert_field,
#if PYTHON_VERSION >= 300
        const_str_digest_958c937028b9f7e7257a16fbda8ad499,
#endif
        codeobj_e47bce64f0f3b69c6a55acd59f70222f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_systemd$journal,
        const_str_digest_150c127e289e9cda4759091e152523a2,
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

function_impl_code functable_systemd$journal[] = {
    impl_systemd$journal$$$function_1__convert_monotonic,
    impl_systemd$journal$$$function_2__convert_source_monotonic,
    impl_systemd$journal$$$function_3__convert_realtime,
    impl_systemd$journal$$$function_4__convert_timestamp,
    impl_systemd$journal$$$function_5__convert_trivial,
    impl_systemd$journal$$$function_6__convert_uuid,
    impl_systemd$journal$$$function_7__valid_field_name,
    impl_systemd$journal$$$function_8___init__,
    impl_systemd$journal$$$function_9__convert_field,
    impl_systemd$journal$$$function_10__convert_entry,
    impl_systemd$journal$$$function_11___iter__,
    impl_systemd$journal$$$function_12___next__,
    impl_systemd$journal$$$function_13_add_match,
    impl_systemd$journal$$$function_14_get_next,
    impl_systemd$journal$$$function_15_get_previous,
    impl_systemd$journal$$$function_16_query_unique,
    impl_systemd$journal$$$function_17_wait,
    impl_systemd$journal$$$function_18_seek_realtime,
    impl_systemd$journal$$$function_19_seek_monotonic,
    impl_systemd$journal$$$function_20_log_level,
    impl_systemd$journal$$$function_21_messageid_match,
    impl_systemd$journal$$$function_22_this_boot,
    impl_systemd$journal$$$function_23_this_machine,
    impl_systemd$journal$$$function_24_get_catalog,
    impl_systemd$journal$$$function_25__make_line,
    impl_systemd$journal$$$function_26_send,
    impl_systemd$journal$$$function_27_stream,
    impl_systemd$journal$$$function_28___init__,
    impl_systemd$journal$$$function_29_emit,
    impl_systemd$journal$$$function_30_map_priority,
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

    function_impl_code *current = functable_systemd$journal;
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

    if (offset > sizeof(functable_systemd$journal) || offset < 0) {
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
        functable_systemd$journal[offset],
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
        module_systemd$journal,
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
PyObject *modulecode_systemd$journal(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_systemd$journal = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_systemd$journal;
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
    PRINT_STRING("systemd.journal: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("systemd.journal: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("systemd.journal: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initsystemd$journal\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_systemd$journal = MODULE_DICT(module_systemd$journal);

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
        moduledict_systemd$journal,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_systemd$journal,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_systemd$journal,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_systemd$journal,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_systemd$journal,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_systemd$journal);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_systemd$journal);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
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
    struct Nuitka_FrameObject *frame_20e4a3dd0a995063373afb2e8b808faf;
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
    PyObject *locals_systemd$journal_117 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_9738b0975810206025edaf62c7b32bf0_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_9738b0975810206025edaf62c7b32bf0_2 = NULL;
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
    PyObject *locals_systemd$journal_504 = NULL;
    struct Nuitka_FrameObject *frame_2239578fced276c3b917900f1c61c33e_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_2239578fced276c3b917900f1c61c33e_3 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_1a5ba3b8abaf2ae3c77b28febdf270fc;
        UPDATE_STRING_DICT0(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_20e4a3dd0a995063373afb2e8b808faf = MAKE_MODULE_FRAME(codeobj_20e4a3dd0a995063373afb2e8b808faf, module_systemd$journal);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_20e4a3dd0a995063373afb2e8b808faf);
    assert(Py_REFCNT(frame_20e4a3dd0a995063373afb2e8b808faf) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_1a5ba3b8abaf2ae3c77b28febdf270fc;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_20e4a3dd0a995063373afb2e8b808faf->m_frame.f_lineno = 21;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_division,
                const_int_0
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_division);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_systemd$journal;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_20e4a3dd0a995063373afb2e8b808faf->m_frame.f_lineno = 23;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__sys, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_datetime;
        tmp_globals_name_2 = (PyObject *)moduledict_systemd$journal;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_20e4a3dd0a995063373afb2e8b808faf->m_frame.f_lineno = 24;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__datetime, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_uuid;
        tmp_globals_name_3 = (PyObject *)moduledict_systemd$journal;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_20e4a3dd0a995063373afb2e8b808faf->m_frame.f_lineno = 25;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__uuid, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_traceback;
        tmp_globals_name_4 = (PyObject *)moduledict_systemd$journal;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_20e4a3dd0a995063373afb2e8b808faf->m_frame.f_lineno = 26;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__traceback, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_os;
        tmp_globals_name_5 = (PyObject *)moduledict_systemd$journal;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = const_int_0;
        frame_20e4a3dd0a995063373afb2e8b808faf->m_frame.f_lineno = 27;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__os, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_logging;
        tmp_globals_name_6 = (PyObject *)moduledict_systemd$journal;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        tmp_level_name_6 = const_int_0;
        frame_20e4a3dd0a995063373afb2e8b808faf->m_frame.f_lineno = 28;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__logging, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_syslog;
        tmp_globals_name_7 = (PyObject *)moduledict_systemd$journal;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_5d9f1ebaa97d51aaa85652aceccc26c3_tuple;
        tmp_level_name_7 = const_int_0;
        frame_20e4a3dd0a995063373afb2e8b808faf->m_frame.f_lineno = 29;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_LOG_EMERG,
                const_int_0
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_LOG_EMERG);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_LOG_EMERG, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_LOG_ALERT,
                const_int_0
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_LOG_ALERT);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_LOG_ALERT, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_LOG_CRIT,
                const_int_0
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_LOG_CRIT);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_LOG_CRIT, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_LOG_ERR,
                const_int_0
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_LOG_ERR);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_LOG_ERR, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_LOG_WARNING,
                const_int_0
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_LOG_WARNING);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_LOG_WARNING, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_LOG_NOTICE,
                const_int_0
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_LOG_NOTICE);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_LOG_NOTICE, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_LOG_INFO,
                const_int_0
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_LOG_INFO);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_LOG_INFO, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_LOG_DEBUG,
                const_int_0
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_LOG_DEBUG);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_LOG_DEBUG, tmp_assign_source_19);
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__sys);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__sys);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10015 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_3;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_version_info);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_tuple_int_pos_3_int_pos_3_tuple;
        tmp_condition_result_1 = RICH_COMPARE_GE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

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
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_collections;
        tmp_globals_name_8 = (PyObject *)moduledict_systemd$journal;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_ChainMap_tuple;
        tmp_level_name_8 = const_int_0;
        frame_20e4a3dd0a995063373afb2e8b808faf->m_frame.f_lineno = 32;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_ChainMap,
                const_int_0
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_ChainMap);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__ChainMap, tmp_assign_source_20);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain__journal;
        tmp_globals_name_9 = (PyObject *)moduledict_systemd$journal;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain___version___str_plain_sendv_str_plain_stream_fd_tuple;
        tmp_level_name_9 = const_int_pos_1;
        frame_20e4a3dd0a995063373afb2e8b808faf->m_frame.f_lineno = 34;
        tmp_assign_source_21 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain___version__,
                const_int_pos_1
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain___version__);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_sendv,
                const_int_pos_1
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_12, const_str_plain_sendv);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_sendv, tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_stream_fd,
                const_int_pos_1
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_13, const_str_plain_stream_fd);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_stream_fd, tmp_assign_source_24);
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
        PyObject *tmp_assign_source_25;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_plain__reader;
        tmp_globals_name_10 = (PyObject *)moduledict_systemd$journal;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_1a939bbd7e380cd4ba0c6c56c58be07b_tuple;
        tmp_level_name_10 = const_int_pos_1;
        frame_20e4a3dd0a995063373afb2e8b808faf->m_frame.f_lineno = 35;
        tmp_assign_source_25 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_25;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_14 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain__Reader,
                const_int_pos_1
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_14, const_str_plain__Reader);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__Reader, tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_15 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_NOP,
                const_int_pos_1
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_15, const_str_plain_NOP);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_NOP, tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_16 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_APPEND,
                const_int_pos_1
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_16, const_str_plain_APPEND);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_APPEND, tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_17 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_INVALIDATE,
                const_int_pos_1
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_17, const_str_plain_INVALIDATE);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_INVALIDATE, tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_18 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_LOCAL_ONLY,
                const_int_pos_1
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_18, const_str_plain_LOCAL_ONLY);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_LOCAL_ONLY, tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_19 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_RUNTIME_ONLY,
                const_int_pos_1
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_19, const_str_plain_RUNTIME_ONLY);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_RUNTIME_ONLY, tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_20 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_SYSTEM,
                const_int_pos_1
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_20, const_str_plain_SYSTEM);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_SYSTEM, tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_21 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_SYSTEM_ONLY,
                const_int_pos_1
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_21, const_str_plain_SYSTEM_ONLY);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_SYSTEM_ONLY, tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_22 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_CURRENT_USER,
                const_int_pos_1
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_22, const_str_plain_CURRENT_USER);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_CURRENT_USER, tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_23 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_OS_ROOT,
                const_int_pos_1
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_23, const_str_plain_OS_ROOT);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_OS_ROOT, tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_24 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain__get_catalog,
                const_int_pos_1
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_24, const_str_plain__get_catalog);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__get_catalog, tmp_assign_source_36);
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
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_empty;
        tmp_globals_name_11 = (PyObject *)moduledict_systemd$journal;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_str_plain_id128_tuple;
        tmp_level_name_11 = const_int_pos_1;
        frame_20e4a3dd0a995063373afb2e8b808faf->m_frame.f_lineno = 40;
        tmp_import_name_from_25 = IMPORT_MODULE5(tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11);
        if (tmp_import_name_from_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_id128,
                const_int_pos_1
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_25, const_str_plain_id128);
        }

        Py_DECREF(tmp_import_name_from_25);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__id128, tmp_assign_source_37);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__sys);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__sys);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10015 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_4;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_version_info);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_tuple_int_pos_3_tuple;
        tmp_condition_result_2 = RICH_COMPARE_GE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

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
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_26;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = const_str_plain__reader;
        tmp_globals_name_12 = (PyObject *)moduledict_systemd$journal;
        tmp_locals_name_12 = Py_None;
        tmp_fromlist_name_12 = const_tuple_str_plain_Monotonic_tuple;
        tmp_level_name_12 = const_int_pos_1;
        frame_20e4a3dd0a995063373afb2e8b808faf->m_frame.f_lineno = 43;
        tmp_import_name_from_26 = IMPORT_MODULE5(tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12);
        if (tmp_import_name_from_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_systemd$journal,
                const_str_plain_Monotonic,
                const_int_pos_1
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME(tmp_import_name_from_26, const_str_plain_Monotonic);
        }

        Py_DECREF(tmp_import_name_from_26);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_Monotonic, tmp_assign_source_38);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = (PyObject *)&PyTuple_Type;
        UPDATE_STRING_DICT0(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_Monotonic, tmp_assign_source_39);
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_40;


        tmp_assign_source_40 = MAKE_FUNCTION_systemd$journal$$$function_1__convert_monotonic();

        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__convert_monotonic, tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;


        tmp_assign_source_41 = MAKE_FUNCTION_systemd$journal$$$function_2__convert_source_monotonic();

        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__convert_source_monotonic, tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;


        tmp_assign_source_42 = MAKE_FUNCTION_systemd$journal$$$function_3__convert_realtime();

        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__convert_realtime, tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;


        tmp_assign_source_43 = MAKE_FUNCTION_systemd$journal$$$function_4__convert_timestamp();

        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__convert_timestamp, tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_systemd$journal$$$function_5__convert_trivial();

        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__convert_trivial, tmp_assign_source_44);
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__sys);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__sys);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10015 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = tmp_mvar_value_5;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_version_info);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_tuple_int_pos_3_tuple;
        tmp_condition_result_3 = RICH_COMPARE_GE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_45;


        tmp_assign_source_45 = MAKE_FUNCTION_systemd$journal$$$function_6__convert_uuid();

        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__convert_uuid, tmp_assign_source_45);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__uuid);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__uuid);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9890 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = tmp_mvar_value_6;
        tmp_assign_source_46 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain_UUID);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__convert_uuid, tmp_assign_source_46);
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_dict_key_27;
        PyObject *tmp_dict_value_27;
        PyObject *tmp_dict_key_28;
        PyObject *tmp_dict_value_28;
        PyObject *tmp_dict_key_29;
        PyObject *tmp_dict_value_29;
        PyObject *tmp_dict_key_30;
        PyObject *tmp_dict_value_30;
        PyObject *tmp_dict_key_31;
        PyObject *tmp_dict_value_31;
        PyObject *tmp_dict_key_32;
        PyObject *tmp_dict_value_32;
        PyObject *tmp_dict_key_33;
        PyObject *tmp_dict_value_33;
        PyObject *tmp_mvar_value_15;
        tmp_dict_key_1 = const_str_plain_MESSAGE_ID;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__convert_uuid);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_uuid);
        }

        CHECK_OBJECT(tmp_mvar_value_7);
        tmp_dict_value_1 = tmp_mvar_value_7;
        tmp_assign_source_47 = _PyDict_NewPresized( 33 );
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain__MACHINE_ID;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__convert_uuid);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_uuid);
        }

        CHECK_OBJECT(tmp_mvar_value_8);
        tmp_dict_value_2 = tmp_mvar_value_8;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain__BOOT_ID;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__convert_uuid);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_uuid);
        }

        CHECK_OBJECT(tmp_mvar_value_9);
        tmp_dict_value_3 = tmp_mvar_value_9;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_PRIORITY;
        tmp_dict_value_4 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_LEADER;
        tmp_dict_value_5 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = const_str_plain_SESSION_ID;
        tmp_dict_value_6 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = const_str_plain_USERSPACE_USEC;
        tmp_dict_value_7 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = const_str_plain_INITRD_USEC;
        tmp_dict_value_8 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = const_str_plain_KERNEL_USEC;
        tmp_dict_value_9 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = const_str_plain__UID;
        tmp_dict_value_10 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = const_str_plain__GID;
        tmp_dict_value_11 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = const_str_plain__PID;
        tmp_dict_value_12 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = const_str_plain_SYSLOG_FACILITY;
        tmp_dict_value_13 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = const_str_plain_SYSLOG_PID;
        tmp_dict_value_14 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = const_str_plain__AUDIT_SESSION;
        tmp_dict_value_15 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = const_str_plain__AUDIT_LOGINUID;
        tmp_dict_value_16 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = const_str_plain__SYSTEMD_SESSION;
        tmp_dict_value_17 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = const_str_plain__SYSTEMD_OWNER_UID;
        tmp_dict_value_18 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = const_str_plain_CODE_LINE;
        tmp_dict_value_19 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = const_str_plain_ERRNO;
        tmp_dict_value_20 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = const_str_plain_EXIT_STATUS;
        tmp_dict_value_21 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = const_str_plain__SOURCE_REALTIME_TIMESTAMP;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__convert_timestamp);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_timestamp);
        }

        if (tmp_mvar_value_10 == NULL) {
            Py_DECREF(tmp_assign_source_47);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10610 ], 40, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_22 = tmp_mvar_value_10;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = const_str_plain___REALTIME_TIMESTAMP;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__convert_realtime);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_realtime);
        }

        if (tmp_mvar_value_11 == NULL) {
            Py_DECREF(tmp_assign_source_47);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10650 ], 39, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_23 = tmp_mvar_value_11;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = const_str_plain__SOURCE_MONOTONIC_TIMESTAMP;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__convert_source_monotonic);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_source_monotonic);
        }

        if (tmp_mvar_value_12 == NULL) {
            Py_DECREF(tmp_assign_source_47);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10689 ], 47, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_24 = tmp_mvar_value_12;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = const_str_plain___MONOTONIC_TIMESTAMP;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__convert_monotonic);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_monotonic);
        }

        if (tmp_mvar_value_13 == NULL) {
            Py_DECREF(tmp_assign_source_47);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10736 ], 40, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_25 = tmp_mvar_value_13;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = const_str_plain___CURSOR;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__convert_trivial);

        if (unlikely(tmp_mvar_value_14 == NULL)) {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_trivial);
        }

        if (tmp_mvar_value_14 == NULL) {
            Py_DECREF(tmp_assign_source_47);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10776 ], 38, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_26 = tmp_mvar_value_14;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_27 = const_str_plain_COREDUMP;
        tmp_dict_value_27 = (PyObject *)&PyBytes_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_dict_key_28 = const_str_plain_COREDUMP_PID;
        tmp_dict_value_28 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_28, tmp_dict_value_28);
        assert(!(tmp_res != 0));
        tmp_dict_key_29 = const_str_plain_COREDUMP_UID;
        tmp_dict_value_29 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_29, tmp_dict_value_29);
        assert(!(tmp_res != 0));
        tmp_dict_key_30 = const_str_plain_COREDUMP_GID;
        tmp_dict_value_30 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_30, tmp_dict_value_30);
        assert(!(tmp_res != 0));
        tmp_dict_key_31 = const_str_plain_COREDUMP_SESSION;
        tmp_dict_value_31 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_31, tmp_dict_value_31);
        assert(!(tmp_res != 0));
        tmp_dict_key_32 = const_str_plain_COREDUMP_SIGNAL;
        tmp_dict_value_32 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_32, tmp_dict_value_32);
        assert(!(tmp_res != 0));
        tmp_dict_key_33 = const_str_plain_COREDUMP_TIMESTAMP;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__convert_timestamp);

        if (unlikely(tmp_mvar_value_15 == NULL)) {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_timestamp);
        }

        if (tmp_mvar_value_15 == NULL) {
            Py_DECREF(tmp_assign_source_47);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10610 ], 40, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_33 = tmp_mvar_value_15;
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_33, tmp_dict_value_33);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_DEFAULT_CONVERTERS, tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = PySet_New(const_set_e3bdae48c9321709f8a0c13bfa83230f);
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__IDENT_CHARACTER, tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;


        tmp_assign_source_49 = MAKE_FUNCTION_systemd$journal$$$function_7__valid_field_name();

        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__valid_field_name, tmp_assign_source_49);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_16;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__Reader);

        if (unlikely(tmp_mvar_value_16 == NULL)) {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__Reader);
        }

        if (tmp_mvar_value_16 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10814 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;

            goto try_except_handler_4;
        }

        tmp_tuple_element_1 = tmp_mvar_value_16;
        tmp_assign_source_50 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_50, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_51 = impl___internal__$$$function_1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_1, tmp_key_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_4;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
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


            exception_lineno = 117;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_4;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_5 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_5, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

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
        tmp_assign_source_53 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_53;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_3, tmp_key_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_4;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 117;

        goto try_except_handler_4;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_name_6;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_6 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr(tmp_expression_name_6, const_str_plain___prepare__);
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_7 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain___prepare__);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = const_str_plain_Reader;
        tmp_args_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_20e4a3dd0a995063373afb2e8b808faf->m_frame.f_lineno = 117;
        tmp_assign_source_54 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_54;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_8;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_8 = tmp_class_creation_1__prepared;
        tmp_res = PyObject_HasAttr(tmp_expression_name_8, const_str_plain___getitem__);
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_4;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_type_arg_2;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = const_str_plain___name__;
        tmp_getattr_default_1 = const_str_angle_metaclass;
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_4;
        }
        tmp_right_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_type_arg_2 = tmp_class_creation_1__prepared;
        tmp_expression_name_9 = BUILTIN_TYPE1(tmp_type_arg_2);
        assert(!(tmp_expression_name_9 == NULL));
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, const_str_plain___name__);
        Py_DECREF(tmp_expression_name_9);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_1);

            exception_lineno = 117;

            goto try_except_handler_4;
        }
        PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 117;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_55;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_56;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_systemd$journal_117 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_6e8934a3d6cd15317cffcf67c88e8fb1;
        tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_digest_19536bb4146d07748c7d8919355ea79f;
        tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_Reader;
        tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_6;
        }
        if (isFrameUnusable(cache_frame_9738b0975810206025edaf62c7b32bf0_2)) {
            Py_XDECREF(cache_frame_9738b0975810206025edaf62c7b32bf0_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_9738b0975810206025edaf62c7b32bf0_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_9738b0975810206025edaf62c7b32bf0_2 = MAKE_FUNCTION_FRAME(codeobj_9738b0975810206025edaf62c7b32bf0, module_systemd$journal, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_9738b0975810206025edaf62c7b32bf0_2->m_type_description == NULL);
        frame_9738b0975810206025edaf62c7b32bf0_2 = cache_frame_9738b0975810206025edaf62c7b32bf0_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_9738b0975810206025edaf62c7b32bf0_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_9738b0975810206025edaf62c7b32bf0_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_none_none_none_tuple;
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_systemd$journal$$$function_8___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain___init__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_systemd$journal$$$function_9__convert_field();

        tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain__convert_field, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_systemd$journal$$$function_10__convert_entry();

        tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain__convert_entry, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_systemd$journal$$$function_11___iter__();

        tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain___iter__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_systemd$journal$$$function_12___next__();

        tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain___next__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_expression_name_10;
            PyObject *tmp_mvar_value_17;
            tmp_expression_name_10 = PyObject_GetItem(locals_systemd$journal_117, const_str_plain__sys);

            if (tmp_expression_name_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__sys);

                    if (unlikely(tmp_mvar_value_17 == NULL)) {
                        tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__sys);
                    }

                    if (tmp_mvar_value_17 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 10015 ], 26, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 230;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }

                    tmp_expression_name_10 = tmp_mvar_value_17;
                    Py_INCREF(tmp_expression_name_10);
                }
            }

            tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, const_str_plain_version_info);
            Py_DECREF(tmp_expression_name_10);
            if (tmp_compexpr_left_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_compexpr_right_4 = const_tuple_int_pos_3_tuple;
            tmp_condition_result_9 = RICH_COMPARE_LT_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_4, tmp_compexpr_right_4);
            Py_DECREF(tmp_compexpr_left_4);
            if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        tmp_dictset_value = PyObject_GetItem(locals_systemd$journal_117, const_str_plain___next__);

        if (tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10843 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 231;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain_next, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        branch_no_7:;


        tmp_dictset_value = MAKE_FUNCTION_systemd$journal$$$function_13_add_match();

        tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain_add_match, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_int_pos_1_tuple;
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_systemd$journal$$$function_14_get_next(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain_get_next, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_int_pos_1_tuple;
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_systemd$journal$$$function_15_get_previous(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain_get_previous, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_systemd$journal$$$function_16_query_unique();

        tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain_query_unique, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_systemd$journal$$$function_17_wait(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain_wait, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_systemd$journal$$$function_18_seek_realtime();

        tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain_seek_realtime, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_systemd$journal$$$function_19_seek_monotonic(tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain_seek_monotonic, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_systemd$journal$$$function_20_log_level();

        tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain_log_level, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_systemd$journal$$$function_21_messageid_match();

        tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain_messageid_match, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_systemd$journal$$$function_22_this_boot(tmp_defaults_6);

            tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain_this_boot, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_systemd$journal$$$function_23_this_machine(tmp_defaults_7);

            tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain_this_machine, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_9738b0975810206025edaf62c7b32bf0_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_9738b0975810206025edaf62c7b32bf0_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9738b0975810206025edaf62c7b32bf0_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9738b0975810206025edaf62c7b32bf0_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9738b0975810206025edaf62c7b32bf0_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9738b0975810206025edaf62c7b32bf0_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if (frame_9738b0975810206025edaf62c7b32bf0_2 == cache_frame_9738b0975810206025edaf62c7b32bf0_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_9738b0975810206025edaf62c7b32bf0_2);
        }
        cache_frame_9738b0975810206025edaf62c7b32bf0_2 = NULL;

        assertFrameObject(frame_9738b0975810206025edaf62c7b32bf0_2);

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
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_5 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_compexpr_right_5 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_5, tmp_compexpr_right_5);
            if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_systemd$journal_117, const_str_plain___orig_bases__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_6;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_Reader;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_systemd$journal_117;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_20e4a3dd0a995063373afb2e8b808faf->m_frame.f_lineno = 117;
            tmp_assign_source_57 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_57;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_56 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_56);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_systemd$journal_117);
        locals_systemd$journal_117 = NULL;
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

        Py_DECREF(locals_systemd$journal_117);
        locals_systemd$journal_117 = NULL;
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
        exception_lineno = 117;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_Reader, tmp_assign_source_56);
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

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;

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
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;

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

    {
        PyObject *tmp_assign_source_58;


        tmp_assign_source_58 = MAKE_FUNCTION_systemd$journal$$$function_24_get_catalog();

        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_get_catalog, tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;


        tmp_assign_source_59 = MAKE_FUNCTION_systemd$journal$$$function_25__make_line();

        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__make_line, tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_defaults_8;
        tmp_defaults_8 = const_tuple_none_none_none_none_tuple;
        Py_INCREF(tmp_defaults_8);


        tmp_assign_source_60 = MAKE_FUNCTION_systemd$journal$$$function_26_send(tmp_defaults_8);

        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_send, tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_defaults_9;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_mvar_value_18;
        tmp_tuple_element_5 = Py_None;
        tmp_defaults_9 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_defaults_9, 0, tmp_tuple_element_5);
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_LOG_INFO);

        if (unlikely(tmp_mvar_value_18 == NULL)) {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOG_INFO);
        }

        if (tmp_mvar_value_18 == NULL) {
            Py_DECREF(tmp_defaults_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10457 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 460;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_5 = tmp_mvar_value_18;
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_defaults_9, 1, tmp_tuple_element_5);
        tmp_tuple_element_5 = Py_False;
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_defaults_9, 2, tmp_tuple_element_5);


        tmp_assign_source_61 = MAKE_FUNCTION_systemd$journal$$$function_27_stream(tmp_defaults_9);

        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_stream, tmp_assign_source_61);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_mvar_value_19;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__logging);

        if (unlikely(tmp_mvar_value_19 == NULL)) {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__logging);
        }

        if (tmp_mvar_value_19 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10396 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 504;

            goto try_except_handler_7;
        }

        tmp_expression_name_11 = tmp_mvar_value_19;
        tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, const_str_plain_Handler);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_7;
        }
        tmp_assign_source_62 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_62, 0, tmp_tuple_element_6);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_63 = impl___internal__$$$function_1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_4, tmp_key_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_7;
        }
        tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM(tmp_dict_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_7;
        }
        tmp_condition_result_12 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_name_12 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_12, tmp_subscript_name_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_7;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_7;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_65 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_65;
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


            exception_lineno = 504;

            goto try_except_handler_7;
        }
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 504;

        goto try_except_handler_7;
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_expression_name_13;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_13 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr(tmp_expression_name_13, const_str_plain___prepare__);
        tmp_condition_result_14 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kw_name_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_14 = tmp_class_creation_2__metaclass;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, const_str_plain___prepare__);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_7;
        }
        tmp_tuple_element_7 = const_str_plain_JournalHandler;
        tmp_args_name_3 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_7);
        PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_7 = tmp_class_creation_2__bases;
        Py_INCREF(tmp_tuple_element_7);
        PyTuple_SET_ITEM(tmp_args_name_3, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
        frame_20e4a3dd0a995063373afb2e8b808faf->m_frame.f_lineno = 504;
        tmp_assign_source_66 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_3);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_66;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_15;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_name_15 = tmp_class_creation_2__prepared;
        tmp_res = PyObject_HasAttr(tmp_expression_name_15, const_str_plain___getitem__);
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_7;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_type_arg_4;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = const_str_plain___name__;
        tmp_getattr_default_2 = const_str_angle_metaclass;
        tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_7;
        }
        tmp_right_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_type_arg_4 = tmp_class_creation_2__prepared;
        tmp_expression_name_16 = BUILTIN_TYPE1(tmp_type_arg_4);
        assert(!(tmp_expression_name_16 == NULL));
        tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, const_str_plain___name__);
        Py_DECREF(tmp_expression_name_16);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_2);

            exception_lineno = 504;

            goto try_except_handler_7;
        }
        PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_8);
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 504;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_67;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_68;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_systemd$journal_504 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_6e8934a3d6cd15317cffcf67c88e8fb1;
        tmp_res = PyObject_SetItem(locals_systemd$journal_504, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_digest_96e0bca0c9bfb42fc2ff0a38c83dbea8;
        tmp_res = PyObject_SetItem(locals_systemd$journal_504, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_plain_JournalHandler;
        tmp_res = PyObject_SetItem(locals_systemd$journal_504, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_9;
        }
        if (isFrameUnusable(cache_frame_2239578fced276c3b917900f1c61c33e_3)) {
            Py_XDECREF(cache_frame_2239578fced276c3b917900f1c61c33e_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_2239578fced276c3b917900f1c61c33e_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_2239578fced276c3b917900f1c61c33e_3 = MAKE_FUNCTION_FRAME(codeobj_2239578fced276c3b917900f1c61c33e, module_systemd$journal, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_2239578fced276c3b917900f1c61c33e_3->m_type_description == NULL);
        frame_2239578fced276c3b917900f1c61c33e_3 = cache_frame_2239578fced276c3b917900f1c61c33e_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_2239578fced276c3b917900f1c61c33e_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_2239578fced276c3b917900f1c61c33e_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_10;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_expression_name_17;
            PyObject *tmp_mvar_value_20;
            PyObject *tmp_mvar_value_21;
            tmp_expression_name_17 = PyObject_GetItem(locals_systemd$journal_504, const_str_plain__logging);

            if (tmp_expression_name_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain__logging);

                    if (unlikely(tmp_mvar_value_20 == NULL)) {
                        tmp_mvar_value_20 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__logging);
                    }

                    if (tmp_mvar_value_20 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 10396 ], 30, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 556;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }

                    tmp_expression_name_17 = tmp_mvar_value_20;
                    Py_INCREF(tmp_expression_name_17);
                }
            }

            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, const_str_plain_NOTSET);
            Py_DECREF(tmp_expression_name_17);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 556;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_defaults_10 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_defaults_10, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = PyObject_GetItem(locals_systemd$journal_504, const_str_plain_send);

            if (tmp_tuple_element_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_send);

                    if (unlikely(tmp_mvar_value_21 == NULL)) {
                        tmp_mvar_value_21 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_send);
                    }

                    if (tmp_mvar_value_21 == NULL) {
                        Py_DECREF(tmp_defaults_10);
                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 664 ], 26, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 556;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }

                    tmp_tuple_element_9 = tmp_mvar_value_21;
                    Py_INCREF(tmp_tuple_element_9);
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_10, 1, tmp_tuple_element_9);


            tmp_dictset_value = MAKE_FUNCTION_systemd$journal$$$function_28___init__(tmp_defaults_10);

            tmp_res = PyObject_SetItem(locals_systemd$journal_504, const_str_plain___init__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 556;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_systemd$journal$$$function_29_emit();

        tmp_res = PyObject_SetItem(locals_systemd$journal_504, const_str_plain_emit, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_staticmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM(locals_systemd$journal_504, const_str_plain_staticmethod);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 606;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_16 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_name_4 = PyObject_GetItem(locals_systemd$journal_504, const_str_plain_staticmethod);

            if (tmp_called_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 1233 ], 34, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 606;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 606;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_name_1 = MAKE_FUNCTION_systemd$journal$$$function_30_map_priority();

            frame_2239578fced276c3b917900f1c61c33e_3->m_frame.f_lineno = 606;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 606;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_5;
            condexpr_false_5:;


            tmp_staticmethod_arg_1 = MAKE_FUNCTION_systemd$journal$$$function_30_map_priority();

            tmp_dictset_value = BUILTIN_STATICMETHOD(tmp_staticmethod_arg_1);
            Py_DECREF(tmp_staticmethod_arg_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 606;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_systemd$journal_504, const_str_plain_map_priority, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 607;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = PyObject_GetItem(locals_systemd$journal_504, const_str_plain_map_priority);

        if (tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10873 ], 34, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 626;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_res = PyObject_SetItem(locals_systemd$journal_504, const_str_plain_mapPriority, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2239578fced276c3b917900f1c61c33e_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2239578fced276c3b917900f1c61c33e_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2239578fced276c3b917900f1c61c33e_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2239578fced276c3b917900f1c61c33e_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2239578fced276c3b917900f1c61c33e_3, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2239578fced276c3b917900f1c61c33e_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if (frame_2239578fced276c3b917900f1c61c33e_3 == cache_frame_2239578fced276c3b917900f1c61c33e_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_2239578fced276c3b917900f1c61c33e_3);
        }
        cache_frame_2239578fced276c3b917900f1c61c33e_3 = NULL;

        assertFrameObject(frame_2239578fced276c3b917900f1c61c33e_3);

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
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_compexpr_left_6 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_compexpr_right_6 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_6, tmp_compexpr_right_6);
            if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 504;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_systemd$journal_504, const_str_plain___orig_bases__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_9;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_5 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_10 = const_str_plain_JournalHandler;
            tmp_args_name_4 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_10);
            PyTuple_SET_ITEM(tmp_args_name_4, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_10 = tmp_class_creation_2__bases;
            Py_INCREF(tmp_tuple_element_10);
            PyTuple_SET_ITEM(tmp_args_name_4, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_systemd$journal_504;
            Py_INCREF(tmp_tuple_element_10);
            PyTuple_SET_ITEM(tmp_args_name_4, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_20e4a3dd0a995063373afb2e8b808faf->m_frame.f_lineno = 504;
            tmp_assign_source_69 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 504;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_69;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_68 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_68);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_systemd$journal_504);
        locals_systemd$journal_504 = NULL;
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

        Py_DECREF(locals_systemd$journal_504);
        locals_systemd$journal_504 = NULL;
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
        exception_lineno = 504;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_systemd$journal, (Nuitka_StringObject *)const_str_plain_JournalHandler, tmp_assign_source_68);
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
    RESTORE_FRAME_EXCEPTION(frame_20e4a3dd0a995063373afb2e8b808faf);
#endif
    popFrameStack();

    assertFrameObject(frame_20e4a3dd0a995063373afb2e8b808faf);

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_20e4a3dd0a995063373afb2e8b808faf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_20e4a3dd0a995063373afb2e8b808faf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_20e4a3dd0a995063373afb2e8b808faf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_20e4a3dd0a995063373afb2e8b808faf, exception_lineno);
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


    return module_systemd$journal;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
