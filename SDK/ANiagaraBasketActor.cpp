#include "AActor.hpp"
#include "ANiagaraBasketActor.hpp"
ANiagaraBasketActor* ANiagaraBasketActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NiagaraBasketActor");
    return (ANiagaraBasketActor*)res;
}
