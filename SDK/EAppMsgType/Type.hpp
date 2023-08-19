#pragma once
#include <cstdint>
namespace EAppMsgType {
#pragma pack(push, 1)
enum Type {
    Ok = 0,
    YesNo = 1,
    OkCancel = 2,
    YesNoCancel = 3,
    CancelRetryContinue = 4,
    YesNoYesAllNoAll = 5,
    YesNoYesAllNoAllCancel = 6,
    YesNoYesAll = 7,
    EAppMsgType_MAX = 8,
};
#pragma pack(pop)
}
