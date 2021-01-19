
class Fireball
{
	public :
		void Render(float _dt)
		{
			//render of fireball
			if(m_fireTex )
			{
				Render(m_fireTex);
			}

		}

	private:
		float m_damage = 0.f;

}

