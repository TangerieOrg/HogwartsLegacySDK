#include "UEditableMesh.hpp"
#include "UEditableMeshFactory.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
UEditableMeshFactory* UEditableMeshFactory::StaticClass() {
    static auto res = find_uobject("Class /Script/EditableMesh.EditableMeshFactory");
    return (UEditableMeshFactory*)res;
}
UEditableMesh* UEditableMeshFactory::MakeEditableMesh(UPrimitiveComponent* PrimitiveComponent, int32_t LODIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMeshFactory.MakeEditableMesh"));
    struct Params_MakeEditableMesh {
        UPrimitiveComponent* PrimitiveComponent; // 0x0
        int32_t LODIndex; // 0x8
        char pad_c[0x4];
        UEditableMesh* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_MakeEditableMesh params{};
    params.PrimitiveComponent = (UPrimitiveComponent*)PrimitiveComponent;
    params.LODIndex = (int32_t)LODIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UEditableMesh*)params.ReturnValue;
}
