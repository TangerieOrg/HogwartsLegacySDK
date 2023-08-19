#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EGamepadTextInputResult {
    Unsupported = 0,
    AlreadyOpen = 1,
    UtilsAPIFailed = 2,
    FieldToLong = 3,
    DialogFailed = 4,
    StringInvalid = 5,
    DialogClosed = 6,
    EGamepadTextInputResult_MAX = 7,
};
#pragma pack(pop)
