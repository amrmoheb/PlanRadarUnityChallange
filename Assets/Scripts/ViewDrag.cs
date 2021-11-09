using UnityEngine;
using System.Collections;

public class ViewDrag : MonoBehaviour
{
    Vector3 hit_position = Vector3.zero;
    Vector3 current_position = Vector3.zero;
    Vector3 camera_position = Vector3.zero;
    float z = 0.0f;
    float speed  = 0.1f;
    Vector2 firstTouchDeltaPosition;
    Vector2 secTouchDeltaPosition;
    Vector2 middleTouchSeltaPosition;
    // Use this for initialization
    void Start()
    {

    }

    
 void Update()
    {
        if (Input.touchCount >= 2 &&
        Input.GetTouch(0).phase == TouchPhase.Moved) {
            // Get movement of the finger since last frame
             firstTouchDeltaPosition = Input.GetTouch(0).deltaPosition;
             secTouchDeltaPosition = Input.GetTouch(1).deltaPosition;
             middleTouchSeltaPosition = new Vector3((firstTouchDeltaPosition.x + secTouchDeltaPosition.x) / 2, (firstTouchDeltaPosition.y + secTouchDeltaPosition.y) / 2);
            // Move object across XZ plane
            transform.position = new Vector3(transform.position.x + middleTouchSeltaPosition.x * 0.03f,transform.position.y,transform.position.z + middleTouchSeltaPosition.y * 0.03f);
        }
    }
   
  
}