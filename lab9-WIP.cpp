#include <iostream>

#ifdef _WIN32
// Winsows variation
#include <windows.h>
int dev = 0;
constexpr bool hasWinAPI = true;
void enableSDLAudio() {};
void SDL_CloseAudioDevice(int placeholder) {};
void SDL_Quit () {};
#else
// Non-Windows variation - using SDL2 library
#include <SDL2/SDL.h>
#include <cmath>
#include <vector>
SDL_AudioDeviceID dev;
constexpr bool hasWinAPI = false;

void enableSDLAudio() {
	SDL_AudioSpec spec;
	spec.freq = 44100;          // Частота дискретизации (стандарт)
	spec.format = AUDIO_S16SYS; // 16-битный формат звука
	spec.channels = 1;          // Моно
	spec.samples = 512;
	spec.callback = NULL;       // Будем использовать очередь (SDL_QueueAudio)

	SDL_Init(SDL_INIT_AUDIO);
	dev = SDL_OpenAudioDevice(NULL, 0, &spec, NULL, 0);
	SDL_PauseAudioDevice(dev, 0);
}

void Beep(double frequency, int duration_ms) {
	int num_samples = (44100 * duration_ms) / 1000;
	std::vector<int16_t> buffer(num_samples);
	const double PI = 3.14159265358979323846;
	for (int i = 0; i < num_samples; i++) {
		buffer[i] = 28000 * sin(2 * PI * frequency * i / 44100);
	}
	SDL_QueueAudio(dev, buffer.data(), buffer.size() * sizeof(int16_t));
	SDL_Delay(duration_ms);
}
void Sleep(int duration_ms) {
	SDL_Delay(duration_ms);
}
#endif


int main(int argc, char* argv[]) {
	enableSDLAudio();
	// Write your music here!	
	Beep(1000, 150);
	Sleep(150);
	Beep(1000, 150);
	Sleep(150);
	Beep(1000, 450);
	Sleep(150);
	Beep(1000, 150);
	Sleep(150);
	Beep(1000, 150);
	Sleep(150);
	Beep(1000, 450);
	Sleep(150);
	Beep(1000, 150);
	Sleep(150);
	Beep(1200, 150);
	Sleep(150);
	Beep(800, 150);
	Sleep(150);
	Beep(900, 150);
	Sleep(150);
	Beep(1000, 500);
	Sleep(150);
	Sleep(500);

	Beep(1050, 150);
	Sleep(150);
	Beep(1050, 150);
	Sleep(150);
	Beep(1050, 450);
	Sleep(150);
	Beep(1000, 150);
	Sleep(150);
	Beep(900, 150);
	Sleep(150);
	Beep(800, 150);
	Sleep(150);
	Beep(1000, 150);
	Sleep(150);
	// Closing SDL Audio (if not on Windows)
	SDL_CloseAudioDevice(dev);
	SDL_Quit();
	return 0;
}
