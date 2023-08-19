#include "UBTService_AvaAITree.hpp"
#include "UBiped_Interact_Interface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UBiped_Interact_Interface* UBiped_Interact_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Biped_Interact_Interface");
    return (UBiped_Interact_Interface*)res;
}
void UBiped_Interact_Interface::Interact(UBTService_AvaAITree* AvaService) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Interact_Interface.Interact"));
    struct Params_Interact {
        UBTService_AvaAITree* AvaService; // 0x0
    }; // Size: 0x8
    Params_Interact params{};
    params.AvaService = (UBTService_AvaAITree*)AvaService;
    ProcessEvent(func, &params);
}
