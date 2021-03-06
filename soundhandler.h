#pragma once

namespace SoundHandler
{
	enum Sounds
	{
		SOUND_SHOOT,
		SOUND_SHOOT2,
		SOUND_SHOOT3,
		SOUND_SHOOT4,
		SOUND_SHOOT5,
		SOUND_GRUNT,
		SOUND_GRUNT2,
		SOUND_GRUNT3,
		SOUND_GRUNT4,
		SOUND_TOKEN,
		SOUND_DOOR,
		SOUND_FOOTSTEP,
		SOUND_DIE,
		SOUND_SPLAT,
		SOUND_TELEPORT,
		SOUND_GHOUL,
		SOUND_LIZARD,
		SOUND_LIZHIT,
		SOUND_TROLLMAD,
		SOUND_TROLLHIT,
		SOUND_ROBOT,
		SOUND_ROBODIE,
		SOUND_DRAGON,
		SOUND_END
	};


	void Init();
	void Quit();
	void Play(int i);
}
