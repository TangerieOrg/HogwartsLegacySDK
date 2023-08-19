#include "FModularSynthPresetBankEntry.hpp"
#include "UModularSynthPresetBank.hpp"
#include "UObject.hpp"
UModularSynthPresetBank* UModularSynthPresetBank::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.ModularSynthPresetBank");
    return (UModularSynthPresetBank*)res;
}
