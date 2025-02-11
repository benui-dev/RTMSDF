// Copyright (c) Richard Meredith AB. All Rights Reserved

#pragma once

#include "Logging/LogMacros.h"
#include "Modules/ModuleInterface.h"

DECLARE_LOG_CATEGORY_EXTERN(RTMSDFEditor, All, All);

class FRTMSDFEditorModule : public IModuleInterface
{
protected:
	virtual void StartupModule() override;
};
