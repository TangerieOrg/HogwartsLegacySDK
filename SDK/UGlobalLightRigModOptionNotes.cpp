#include "UGlobalLightRigModOption.hpp"
#include "UGlobalLightRigModOptionNotes.hpp"
UGlobalLightRigModOptionNotes* UGlobalLightRigModOptionNotes::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModOptionNotes");
    return (UGlobalLightRigModOptionNotes*)res;
}
