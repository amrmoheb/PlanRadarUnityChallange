using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class UIManger : MonoBehaviour
{
    public static UIManger shared ;
    public GameManger GM;
    public Text FPSText;
    public GameObject SpinnerIndecator;
    // Start is called before the first frame update
    private void OnEnable()
    {
        shared = this;
    }
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void Reset()
    {
        GM.ResetFloorRotation();
        GM.ResetCameraZoom();
    }
    public void ShowFPS(int fpsValue)
    {
        FPSText.text = "" + fpsValue + " FPS";
    }
    public void StopSpinerIndecator() {
        SpinnerIndecator.SetActive(false);
    }
}
