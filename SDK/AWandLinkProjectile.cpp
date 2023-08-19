#include "AActor.hpp"
#include "AWandLinkProjectile.hpp"
#include "UNiagaraComponent.hpp"
AWandLinkProjectile* AWandLinkProjectile::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WandLinkProjectile");
    return (AWandLinkProjectile*)res;
}
