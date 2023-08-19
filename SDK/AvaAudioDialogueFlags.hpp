#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class AvaAudioDialogueFlags : uint8_t {
    DLGFLAG_None = 0,
    DLGFLAG_FromConversation = 1,
    DLGFLAG_StartPaused = 2,
    DLGFLAG_DontDispatchLipsyncMessage = 4,
    DLGFLAG_NoQueuingLimits = 8,
    DLGFLAG_SuppressSubtitles = 16,
    DLGFLAG_NonSpatialized = 32,
    DLGFLAG_UseCinematicPolyphony = 64,
    DLGFLAG_MouthLipsyncOnly = 128,
    DLGFLAG_MAX = 129,
};
#pragma pack(pop)
