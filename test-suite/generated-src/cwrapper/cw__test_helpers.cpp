// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "test_helpers.hpp"

#include "color.hpp"
#include "cw__client_interface.hpp"
#include "cw__test_helpers.hpp"
#include "cw__user_token.hpp"
#include "dh__assorted_primitives.hpp"
#include "dh__color.hpp"
#include "dh__map_enum_color_string.hpp"
#include "dh__map_list_record.hpp"
#include "dh__map_string_int64_t.hpp"
#include "dh__nested_collection.hpp"
#include "dh__primitive_list.hpp"
#include "dh__set_record.hpp"
#include <experimental/optional>
#include <vector>

std::shared_ptr<::testsuite::TestHelpers> DjinniWrapperTestHelpers::get(djinni::WrapperRef<DjinniWrapperTestHelpers> dw) {
    if (dw) {
        return dw->wrapped_obj;
    }
    return nullptr;
}

void test_helpers___wrapper_add_ref(DjinniWrapperTestHelpers * dh) {
    dh->ref_count.fetch_add(1);
}
void test_helpers___wrapper_dec_ref(DjinniWrapperTestHelpers * dh) {
    const size_t ref = dh->ref_count.fetch_sub(1);
    if (ref == 1) {// value before sub is returned
        delete dh;
    }
}
djinni::Handle<DjinniWrapperTestHelpers> DjinniWrapperTestHelpers::wrap(std::shared_ptr<::testsuite::TestHelpers> obj) {
    if (obj) 
        return djinni::Handle<DjinniWrapperTestHelpers>(new DjinniWrapperTestHelpers{ std::move(obj) }, test_helpers___wrapper_dec_ref);
    return nullptr;
}

DjinniRecordHandle * cw__test_helpers_get_set_record() {
    try { 
        return DjinniSetRecord::fromCpp(::testsuite::TestHelpers::get_set_record()).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

bool cw__test_helpers_check_set_record(DjinniRecordHandle * rec) {
    djinni::Handle<DjinniRecordHandle> _rec(rec, set_record___delete);
    try { 
        return ::testsuite::TestHelpers::check_set_record(DjinniSetRecord::toCpp(std::move(_rec)));
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

DjinniRecordHandle * cw__test_helpers_get_primitive_list() {
    try { 
        return DjinniPrimitiveList::fromCpp(::testsuite::TestHelpers::get_primitive_list()).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

bool cw__test_helpers_check_primitive_list(DjinniRecordHandle * pl) {
    djinni::Handle<DjinniRecordHandle> _pl(pl, primitive_list___delete);
    try { 
        return ::testsuite::TestHelpers::check_primitive_list(DjinniPrimitiveList::toCpp(std::move(_pl)));
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

DjinniRecordHandle * cw__test_helpers_get_nested_collection() {
    try { 
        return DjinniNestedCollection::fromCpp(::testsuite::TestHelpers::get_nested_collection()).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

bool cw__test_helpers_check_nested_collection(DjinniRecordHandle * nc) {
    djinni::Handle<DjinniRecordHandle> _nc(nc, nested_collection___delete);
    try { 
        return ::testsuite::TestHelpers::check_nested_collection(DjinniNestedCollection::toCpp(std::move(_nc)));
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

DjinniObjectHandle * cw__test_helpers_get_map() {
    try { 
        return DjinniMapStringInt64T::fromCpp(::testsuite::TestHelpers::get_map()).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

bool cw__test_helpers_check_map(DjinniObjectHandle * m) {
    djinni::Handle<DjinniObjectHandle> _m(m, map_string_int64_t___delete);
    try { 
        return ::testsuite::TestHelpers::check_map(DjinniMapStringInt64T::toCpp(std::move(_m)));
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

DjinniObjectHandle * cw__test_helpers_get_empty_map() {
    try { 
        return DjinniMapStringInt64T::fromCpp(::testsuite::TestHelpers::get_empty_map()).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

bool cw__test_helpers_check_empty_map(DjinniObjectHandle * m) {
    djinni::Handle<DjinniObjectHandle> _m(m, map_string_int64_t___delete);
    try { 
        return ::testsuite::TestHelpers::check_empty_map(DjinniMapStringInt64T::toCpp(std::move(_m)));
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

DjinniRecordHandle * cw__test_helpers_get_map_list_record() {
    try { 
        return DjinniMapListRecord::fromCpp(::testsuite::TestHelpers::get_map_list_record()).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

bool cw__test_helpers_check_map_list_record(DjinniRecordHandle * m) {
    djinni::Handle<DjinniRecordHandle> _m(m, map_list_record___delete);
    try { 
        return ::testsuite::TestHelpers::check_map_list_record(DjinniMapListRecord::toCpp(std::move(_m)));
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

void cw__test_helpers_check_client_interface_ascii(DjinniWrapperClientInterface * i) {
    djinni::Handle<DjinniWrapperClientInterface> _i(i, client_interface___wrapper_dec_ref);
    try { 
        ::testsuite::TestHelpers::check_client_interface_ascii(DjinniWrapperClientInterface::get(std::move(_i)));
    } CW_TRANSLATE_EXCEPTIONS_RETURN();
}

void cw__test_helpers_check_client_interface_nonascii(DjinniWrapperClientInterface * i) {
    djinni::Handle<DjinniWrapperClientInterface> _i(i, client_interface___wrapper_dec_ref);
    try { 
        ::testsuite::TestHelpers::check_client_interface_nonascii(DjinniWrapperClientInterface::get(std::move(_i)));
    } CW_TRANSLATE_EXCEPTIONS_RETURN();
}

void cw__test_helpers_check_enum_map(DjinniObjectHandle * m) {
    djinni::Handle<DjinniObjectHandle> _m(m, map_enum_color_string___delete);
    try { 
        ::testsuite::TestHelpers::check_enum_map(DjinniMapEnumColorString::toCpp(std::move(_m)));
    } CW_TRANSLATE_EXCEPTIONS_RETURN();
}

void cw__test_helpers_check_enum(int c) {
    try { 
        ::testsuite::TestHelpers::check_enum(static_cast<::testsuite::color>(c));
    } CW_TRANSLATE_EXCEPTIONS_RETURN();
}

DjinniWrapperUserToken * cw__test_helpers_token_id(DjinniWrapperUserToken * t) {
    djinni::Handle<DjinniWrapperUserToken> _t(t, user_token___wrapper_dec_ref);
    try { 
        return DjinniWrapperUserToken::wrap(std::move(::testsuite::TestHelpers::token_id(DjinniWrapperUserToken::get(std::move(_t))))).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

DjinniWrapperUserToken * cw__test_helpers_create_cpp_token() {
    try { 
        return DjinniWrapperUserToken::wrap(std::move(::testsuite::TestHelpers::create_cpp_token())).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

void cw__test_helpers_check_cpp_token(DjinniWrapperUserToken * t) {
    djinni::Handle<DjinniWrapperUserToken> _t(t, user_token___wrapper_dec_ref);
    try { 
        ::testsuite::TestHelpers::check_cpp_token(DjinniWrapperUserToken::get(std::move(_t)));
    } CW_TRANSLATE_EXCEPTIONS_RETURN();
}

int64_t cw__test_helpers_cpp_token_id(DjinniWrapperUserToken * t) {
    djinni::Handle<DjinniWrapperUserToken> _t(t, user_token___wrapper_dec_ref);
    try { 
        return ::testsuite::TestHelpers::cpp_token_id(DjinniWrapperUserToken::get(std::move(_t)));
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

void cw__test_helpers_check_token_type(DjinniWrapperUserToken * t, DjinniString * type) {
    djinni::Handle<DjinniWrapperUserToken> _t(t, user_token___wrapper_dec_ref);
    std::unique_ptr<DjinniString> _type(type);
    try { 
        ::testsuite::TestHelpers::check_token_type(DjinniWrapperUserToken::get(std::move(_t)), DjinniString::toCpp(std::move(_type)));
    } CW_TRANSLATE_EXCEPTIONS_RETURN();
}

DjinniBoxedI32 * cw__test_helpers_return_none() {
    try { 
        return DjinniBoxedI32::fromCpp(::testsuite::TestHelpers::return_none()).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

DjinniRecordHandle * cw__test_helpers_assorted_primitives_id(DjinniRecordHandle * i) {
    djinni::Handle<DjinniRecordHandle> _i(i, assorted_primitives___delete);
    try { 
        return DjinniAssortedPrimitives::fromCpp(::testsuite::TestHelpers::assorted_primitives_id(DjinniAssortedPrimitives::toCpp(std::move(_i)))).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

DjinniBinary * cw__test_helpers_id_binary(DjinniBinary * b) {
    std::unique_ptr<DjinniBinary> _b(b);
    try { 
        return DjinniBinary::fromCpp(::testsuite::TestHelpers::id_binary(DjinniBinary::toCpp(std::move(_b)))).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}
