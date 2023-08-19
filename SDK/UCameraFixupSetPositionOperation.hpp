#pragma once
#include <cstdint>
#include "UCameraFixupOperation.hpp"
class UCameraFixupSetPositionMethod;
#pragma pack(push, 1)
class UCameraFixupSetPositionOperation : public UCameraFixupOperation {
public:
    UCameraFixupSetPositionMethod* Method; // 0x30
    static UCameraFixupSetPositionOperation* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
