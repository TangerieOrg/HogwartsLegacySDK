#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARWorldMappingState : uint8_t {
    NotAvailable = 0,
    StillMappingNotRelocalizable = 1,
    StillMappingRelocalizable = 2,
    Mapped = 3,
    EARWorldMappingState_MAX = 4,
};
#pragma pack(pop)
