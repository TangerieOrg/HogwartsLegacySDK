#include "AActor.hpp"
#include "ABP_DeadNPC_Spawner_C.hpp"
#include "E_DeadNPC_Type\Type.hpp"
#include "FSoftClassPath.hpp"
#include "FTransform.hpp"
#include "UChildActorComponent.hpp"
#include "UClass.hpp"
#include "USceneComponent.hpp"
ABP_DeadNPC_Spawner_C* ABP_DeadNPC_Spawner_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/WorldEvents/Blueprints/DeadNpc/Placeable_DeadNPC/BP_DeadNPC_Spawner.BP_DeadNPC_Spawner_C");
    return (ABP_DeadNPC_Spawner_C*)res;
}
void ABP_DeadNPC_Spawner_C::UserConstructionScript0(TArray<void*> NewLocalVar_0, TArray<void*>& K2Node_MakeArray_Array, int32_t CallFunc_Conv_ByteToInt_ReturnValue, FTransform Temp_struct_Variable, FSoftClassPath CallFunc_Array_Get_Item, UChildActorComponent* CallFunc_AddComponent_ReturnValue) {}
