#include "ABase_Character.hpp"
#include "ABiped_Lightweight.hpp"
#include "UBipedStateComponent.hpp"
#include "UFacialComponent.hpp"
ABiped_Lightweight* ABiped_Lightweight::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Biped_Lightweight");
    return (ABiped_Lightweight*)res;
}
