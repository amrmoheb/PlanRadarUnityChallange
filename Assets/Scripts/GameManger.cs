using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManger : MonoBehaviour
{
    public Transform floorModel;
    Transform floorModelParent;
    public float resetSpeed = 10f;
    float step;
    Quaternion floorModelInitialRotation;
    Vector3 floorModelInitialPosition;
    Vector3 CamParentInitialPosition;
    Transform cam;
    Transform camParent;
    public Transform camTarget;

    // Start is called before the first frame update
    void Start()
    {
        floorModelParent = floorModel.parent;
        floorModelInitialRotation = floorModel.localRotation;
        floorModelInitialPosition = floorModel.localPosition;
        cam = Camera.main.transform;
        camParent = cam.parent;
        CamParentInitialPosition = camParent.transform.position;
        
    }


    public void ResetFloorRotation() 
    {
        StartCoroutine("StartFloorReset");
    }
    public void ResetCameraZoom()
    {
        StartCoroutine("StartCameraReset");
    }
    IEnumerator StartFloorReset()
    {
        while (floorModel.transform.rotation != floorModelInitialRotation || floorModel.transform.position != floorModelInitialPosition)
        {
            yield return new WaitForSeconds(Time.deltaTime);
            step = resetSpeed * Time.deltaTime * 2;
            floorModel.transform.localRotation = Quaternion.RotateTowards(floorModel.transform.localRotation, floorModelInitialRotation, step);
        }
    }
    IEnumerator StartCameraReset()
    {
        camTarget.localPosition = Vector3.zero;
        while (cam.localPosition != Vector3.zero || camParent.position != CamParentInitialPosition)
        {
            yield return new WaitForSeconds(Time.deltaTime);
            step = resetSpeed * Time.deltaTime * 2;
            cam.localPosition = Vector3.MoveTowards(cam.localPosition, Vector3.zero,step);
            camParent.position = Vector3.MoveTowards(camParent.position, CamParentInitialPosition, step);
        }
    }
}
