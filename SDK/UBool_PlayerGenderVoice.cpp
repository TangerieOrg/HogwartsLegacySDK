#include "EGenderVoice.hpp"
#include "UBoolProvider.hpp"
#include "UBool_PlayerGenderVoice.hpp"
UBool_PlayerGenderVoice* UBool_PlayerGenderVoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Bool_PlayerGenderVoice");
    return (UBool_PlayerGenderVoice*)res;
}
