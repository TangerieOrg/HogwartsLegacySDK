#pragma once
#include <cstdint>
namespace EAppReturnType {
#pragma pack(push, 1)
enum Type {
    No = 0,
    Yes = 1,
    YesAll = 2,
    NoAll = 3,
    Cancel = 4,
    Ok = 5,
    Retry = 6,
    Continue = 7,
    EAppReturnType_MAX = 8,
};
#pragma pack(pop)
}
