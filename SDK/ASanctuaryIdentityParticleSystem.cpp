#include "ASanctuaryIdentityParticleSystem.hpp"
#include "AStreamingPlaceholderBase.hpp"
#include "ESanctuaryIdentity.hpp"
#include "UFunction.hpp"
#include "UParticleSystem.hpp"
#include "UParticleSystemComponent.hpp"
ASanctuaryIdentityParticleSystem* ASanctuaryIdentityParticleSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuaryIdentityParticleSystem");
    return (ASanctuaryIdentityParticleSystem*)res;
}
void ASanctuaryIdentityParticleSystem::OnIdentityChanged(ESanctuaryIdentity OldIdentity, ESanctuaryIdentity NewIdentity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryIdentityParticleSystem.OnIdentityChanged"));
    struct Params_OnIdentityChanged {
        ESanctuaryIdentity OldIdentity; // 0x0
        ESanctuaryIdentity NewIdentity; // 0x1
    }; // Size: 0x2
    Params_OnIdentityChanged params{};
    params.OldIdentity = (ESanctuaryIdentity)OldIdentity;
    params.NewIdentity = (ESanctuaryIdentity)NewIdentity;
    ProcessEvent(func, &params);
}
