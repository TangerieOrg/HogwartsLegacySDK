#pragma once
#include <cstdint>
#include "UBTTask_PawnActionBase.hpp"
class UPawnAction;
#pragma pack(push, 1)
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase {
public:
    UPawnAction* Action; // 0x70
    static UBTTask_PushPawnAction* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
