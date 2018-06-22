/*
   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Attributes State Machine */
enum
{
    IDX_SVC,

    IDX_OTS_FEATURE,
    IDX_OTS_FEATURE_VAL, // Read

    IDX_OBJECT_NAME,
	IDX_OBJECT_NAME_VAL, // Read (Write: optional)

    IDX_OBJECT_TYPE,
	IDX_OBJECT_TYPE_VAL, // Read

    IDX_OBJECT_SIZE,
	IDX_OBJECT_SIZE_VAL, // Read

	// Object First Created: optional
	// Object Last Modified: optional
	// Object ID: not needed, since only one object

    IDX_OBJECT_PROPERTIES,
	IDX_OBJECT_PROPERTIES_VAL, // Read

    IDX_OBJECT_ACTION_CONTROL_POINT,
	IDX_OBJECT_ACTION_CONTROL_POINT_VAL, // Write, Indicate
	IDX_OBJECT_ACTION_CONTROL_POINT_CFG, // Indicate config

	// Object List Control Point: not needed
	// Object List Filter: not needed
	// Object Changed: optional

    OTS_IDX_NB,
};
