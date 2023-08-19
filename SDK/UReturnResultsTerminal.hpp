#pragma once
#include <cstdint>
#include "UFieldNodeBase.hpp"
#pragma pack(push, 1)
class UReturnResultsTerminal : public UFieldNodeBase {
public:
    static UReturnResultsTerminal* StaticClass();
    UReturnResultsTerminal* SetReturnResultsTerminal();
}; // Size: 0xc8
#pragma pack(pop)
