#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UDbDynamicTableConnector_Interface : public UInterface {
public:
    static UDbDynamicTableConnector_Interface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
