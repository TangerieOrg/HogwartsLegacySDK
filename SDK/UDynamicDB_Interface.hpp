#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UDynamicDB_Interface : public UInterface {
public:
    static UDynamicDB_Interface* StaticClass();
    void SetupDBQueries();
}; // Size: 0x28
#pragma pack(pop)
