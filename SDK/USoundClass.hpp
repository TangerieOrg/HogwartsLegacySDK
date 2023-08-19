#pragma once
#include <cstdint>
#include "FPassiveSoundMixModifier.hpp"
#include "FSoundClassProperties.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USoundClass : public UObject {
public:
    FSoundClassProperties Properties; // 0x28
    TArray<USoundClass*> ChildClasses; // 0xa0
    TArray<FPassiveSoundMixModifier> PassiveSoundMixModifiers; // 0xb0
    USoundClass* ParentClass; // 0xc0
    static USoundClass* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
