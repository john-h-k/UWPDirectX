#include "pch.h"
#include "KeyboardHandler.h"
#include <collection.h>

using namespace Windows::UI::Core;
using namespace Windows::System;
using namespace Platform::Collections;

UWPDirectX::Sample3DSceneRenderer* KeyboardHandler::s_renderer = nullptr;

bool KeyboardHandler::IsKeyPressed(VirtualKey key)
{
	return (bool)(s_renderer->m_deviceResources->GetWindow()->GetKeyState(key) & CoreVirtualKeyStates::Down);
}

static bool IsShiftPressed = false;

void KeyboardHandler::OnKeyDown(CoreWindow^ sender, KeyEventArgs^ e)
{
	
}

void KeyboardHandler::OnKeyUp(Windows::UI::Core::CoreWindow^ sender, KeyEventArgs^ e)
{
	switch (e->VirtualKey)
	{
	case VirtualKey::Shift:
		IsShiftPressed = false;
	}
}
