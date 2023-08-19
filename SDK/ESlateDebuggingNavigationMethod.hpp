#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESlateDebuggingNavigationMethod {
    Unknown = 0,
    Explicit = 1,
    CustomDelegateBound = 2,
    CustomDelegateUnbound = 3,
    NextOrPrevious = 4,
    HitTestGrid = 5,
    ESlateDebuggingNavigationMethod_MAX = 6,
};
#pragma pack(pop)
