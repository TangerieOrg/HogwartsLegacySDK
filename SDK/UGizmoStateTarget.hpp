#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UGizmoStateTarget : public UInterface {
public:
    static UGizmoStateTarget* StaticClass();
    void EndUpdate();
    void BeginUpdate();
}; // Size: 0x28
#pragma pack(pop)
