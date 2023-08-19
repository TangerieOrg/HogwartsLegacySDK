#pragma once
#include <cstdint>
#include "UAblStartPositionGetter.hpp"
#pragma pack(push, 1)
class UAblStartPositionGetter_AnimNotify : public UAblStartPositionGetter {
public:
    FName AnimNotifyEventName; // 0x28
    static UAblStartPositionGetter_AnimNotify* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
