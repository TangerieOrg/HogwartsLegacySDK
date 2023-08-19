#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USoundSubmixBase : public UObject {
public:
    TArray<USoundSubmixBase*> ChildSubmixes; // 0x28
    static USoundSubmixBase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
