#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHoudiniToolType {
    HTOOLTYPE_GENERATOR = 0,
    HTOOLTYPE_OPERATOR_SINGLE = 1,
    HTOOLTYPE_OPERATOR_MULTI = 2,
    HTOOLTYPE_OPERATOR_BATCH = 3,
    HTOOLTYPE_MAX = 4,
};
#pragma pack(pop)
