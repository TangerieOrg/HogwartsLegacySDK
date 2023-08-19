#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECameraStackOperationInsertLocation : uint8_t {
    TopOfStack = 0,
    TopOfBaseStack = 1,
    BeforeBehavior = 2,
    AfterBehavior = 3,
    ECameraStackOperationInsertLocation_MAX = 4,
};
#pragma pack(pop)
