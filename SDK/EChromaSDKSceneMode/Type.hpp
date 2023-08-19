#pragma once
#include <cstdint>
namespace EChromaSDKSceneMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    SM_Replace = 0,
    SM_Max = 1,
    SM_Min = 2,
    SM_Average = 3,
    SM_Multiply = 4,
    SM_Add = 5,
    SM_Subtract = 6,
};
#pragma pack(pop)
}
