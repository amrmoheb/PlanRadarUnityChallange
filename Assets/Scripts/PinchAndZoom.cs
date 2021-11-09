
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PinchAndZoom : MonoBehaviour
{
    float MouseZoomSpeed = 15.0f;
    float TouchZoomSpeed = 0.07f;
    float ZoomMinBound = 0f;
    float ZoomMaxBound = -75f;  
    Camera cam;
    public Transform camTarget;
    Vector3 cameraNextPos;

    public Transform targetModel;
     
    bool enableRotation = true;
    Touch tZero;
    Touch tOne;

    Vector2 tZeroPrevious;
    Vector2 tOnePrevious;
    float oldTouchDistance;
    float currentTouchDistance;
    float deltaDistance;
    // Use this for initialization
    void Start()
    {
        cam = GetComponent<Camera>();
    }

    void Update()
    {
       
        if (Input.touchSupported)
        {
           

            // Pinch to zoom
            if (Input.touchCount >= 2)
            {
                enableRotation = false;
                // get current touch positions
                 tZero = Input.GetTouch(0);
                 tOne = Input.GetTouch(1);
                // get touch position from the previous frame
                 tZeroPrevious = tZero.position - tZero.deltaPosition;
                 tOnePrevious = tOne.position - tOne.deltaPosition;

                 oldTouchDistance = Vector2.Distance(tZeroPrevious, tOnePrevious);
                 currentTouchDistance = Vector2.Distance(tZero.position, tOne.position);


                // get offset value
                 deltaDistance = oldTouchDistance - currentTouchDistance;

                Zoom(deltaDistance, TouchZoomSpeed);
            }
            else
            {
                // Rotate 
                if (Input.touchCount == 0)
                    enableRotation = true;

                if (Input.touchCount == 1 && enableRotation)
                {
                    targetModel.transform.Rotate(Vector3.up * (-Input.GetAxis("Mouse X")));
                
                }

            }
        }
      


        
    }

    void Zoom(float deltaMagnitudeDiff, float speed )
    {
       
        camTarget.Translate(-Vector3.forward * deltaMagnitudeDiff * speed );
        cameraNextPos.x = 0;
        cameraNextPos.y = Mathf.Clamp(camTarget.localPosition.y, -75f, 0f);
        cameraNextPos.z = Mathf.Clamp(camTarget.localPosition.z, -49f, 0f);
        camTarget.localPosition = cameraNextPos;
        cam.transform.localPosition = cameraNextPos;


    }

}