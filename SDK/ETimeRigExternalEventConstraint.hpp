#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETimeRigExternalEventConstraint : uint8_t {
    NotConstrained = 0,
    BeforeEvent = 1,
    AfterEvent = 2,
    ETimeRigExternalEventConstraint_MAX = 3,
};
#pragma pack(pop)
