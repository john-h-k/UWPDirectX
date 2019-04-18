#pragma once

#include <collection.h>
#include "Content/Sample3DSceneRenderer.h"

ref class KeyboardHandler sealed
{
internal:
	static void SetRenderer(UWPDirectX::Sample3DSceneRenderer* renderer) { s_renderer = renderer; };
	static void OnKeyDown(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::KeyEventArgs^ e);
	static void OnKeyUp(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::KeyEventArgs^ e);
	static bool IsKeyPressed(Windows::System::VirtualKey key);

private:
	static UWPDirectX::Sample3DSceneRenderer* s_renderer;
};