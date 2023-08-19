#include "AStreamingPlaceholderChildActorBase.hpp"
#include "AStreamingPlaceholderSanctuaryIdentity.hpp"
#include "ESanctuaryIdentity.hpp"
#include "UFunction.hpp"
AStreamingPlaceholderSanctuaryIdentity* AStreamingPlaceholderSanctuaryIdentity::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StreamingPlaceholderSanctuaryIdentity");
    return (AStreamingPlaceholderSanctuaryIdentity*)res;
}
void AStreamingPlaceholderSanctuaryIdentity::OnIdentityChanged(ESanctuaryIdentity OldIdentity, ESanctuaryIdentity NewIdentity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StreamingPlaceholderSanctuaryIdentity.OnIdentityChanged"));
    struct Params_OnIdentityChanged {
        ESanctuaryIdentity OldIdentity; // 0x0
        ESanctuaryIdentity NewIdentity; // 0x1
    }; // Size: 0x2
    Params_OnIdentityChanged params{};
    params.OldIdentity = (ESanctuaryIdentity)OldIdentity;
    params.NewIdentity = (ESanctuaryIdentity)NewIdentity;
    ProcessEvent(func, &params);
}
