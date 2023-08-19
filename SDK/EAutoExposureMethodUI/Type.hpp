#pragma once
#include <cstdint>
namespace EAutoExposureMethodUI {
#pragma pack(push, 1)
enum Type : uint8_t {
    AEM_Histogram = 0,
    AEM_Basic = 1,
    AEM_Manual = 2,
    AEM_MAX = 3,
};
#pragma pack(pop)
}
