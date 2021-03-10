;; Auto-generated. Do not edit!


(when (boundp 'plumbing_pub_sub::Person)
  (if (not (find-package "PLUMBING_PUB_SUB"))
    (make-package "PLUMBING_PUB_SUB"))
  (shadow 'Person (find-package "PLUMBING_PUB_SUB")))
(unless (find-package "PLUMBING_PUB_SUB::PERSON")
  (make-package "PLUMBING_PUB_SUB::PERSON"))

(in-package "ROS")
;;//! \htmlinclude Person.msg.html


(defclass plumbing_pub_sub::Person
  :super ros::object
  :slots (_name _age _heigh ))

(defmethod plumbing_pub_sub::Person
  (:init
   (&key
    ((:name __name) "")
    ((:age __age) 0)
    ((:heigh __heigh) 0.0)
    )
   (send-super :init)
   (setq _name (string __name))
   (setq _age (round __age))
   (setq _heigh (float __heigh))
   self)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:age
   (&optional __age)
   (if __age (setq _age __age)) _age)
  (:heigh
   (&optional __heigh)
   (if __heigh (setq _heigh __heigh)) _heigh)
  (:serialization-length
   ()
   (+
    ;; string _name
    4 (length _name)
    ;; int32 _age
    4
    ;; float32 _heigh
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; int32 _age
       (write-long _age s)
     ;; float32 _heigh
       (sys::poke _heigh (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int32 _age
     (setq _age (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float32 _heigh
     (setq _heigh (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get plumbing_pub_sub::Person :md5sum-) "8d6863bac8f832699af5053b666b7f25")
(setf (get plumbing_pub_sub::Person :datatype-) "plumbing_pub_sub/Person")
(setf (get plumbing_pub_sub::Person :definition-)
      "string name
int32 age
float32 heigh

")



(provide :plumbing_pub_sub/Person "8d6863bac8f832699af5053b666b7f25")


