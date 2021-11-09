using UnityEngine;


public class FPS : MonoBehaviour
{
     int avgFrameRate;
    float current;

    public void Update()
    {
         current = 0;
        current = Time.frameCount / Time.time;
        avgFrameRate = (int)current;
       UIManger.shared.ShowFPS(avgFrameRate);
    }
}