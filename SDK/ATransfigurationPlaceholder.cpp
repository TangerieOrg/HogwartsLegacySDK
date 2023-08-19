#include "AActor.hpp"
#include "AStreamingPlaceholderBase.hpp"
#include "ATransfigurationPlaceholder.hpp"
#include "EStreamingPlaceholderPriority.hpp"
#include "ETransfigurationInitialColor.hpp"
#include "FDbSingleColumnInfo.hpp"
ATransfigurationPlaceholder* ATransfigurationPlaceholder::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationPlaceholder");
    return (ATransfigurationPlaceholder*)res;
}
