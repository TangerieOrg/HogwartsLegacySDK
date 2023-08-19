#include "UMaterialParameterCollection.hpp"
#include "UNiagaraParameterCollection.hpp"
#include "UWindMapSubsystem.hpp"
#include "UWorldSubsystem.hpp"
UWindMapSubsystem* UWindMapSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindMapSubsystem");
    return (UWindMapSubsystem*)res;
}
